#include <gui/screen_screen/screenView.hpp>
#include <stdio.h>
#include <math.h>
#include "stm32746g_discovery_audio.h"
#include "usbd_def.h"

// Externs
extern __IO uint32_t uwTick;                      // forwarded from stm32f7xx_hal.c
extern uint16_t VU_Level_Left, VU_Level_Right;    // forwarded from stm32746g_discovery_audio.c
extern USBD_HandleTypeDef hUsbDeviceFS;           // forwarded from usb_device.c

screenView::screenView()
{
  tick_cnt = 0;
}

void screenView::setupScreen()
{
  screenViewBase::setupScreen();
}

void screenView::tearDownScreen()
{
  screenViewBase::tearDownScreen();
}

void screenView::handleTickEvent(){
  static uint32_t tk_graph = 0;      // ticks to update graph_t
  static uint32_t tk_vol_ctrl = 0;   // ticks to update volume from slider1
  static uint32_t tk_vu = 0;         // ticks to update vu_L and vu_R

  static int volume = 50;
  if(uwTick - tk_graph > 40){
    tk_graph = uwTick;
    graph_t.addDataPoint(sinf(uwTick*0.004));
  }

  if(uwTick - tk_vol_ctrl > 50){
    tk_vol_ctrl = uwTick;

    // Update volume if USB connected
    int usb_conn_state = hUsbDeviceFS.dev_state;
    // printf("usb_conn_state:%d\r\n", usb_conn_state);
    switch(usb_conn_state){
      case USBD_STATE_DEFAULT:
        break;
      case USBD_STATE_ADDRESSED:
        slider1.setValue(0);
        break;
      case USBD_STATE_CONFIGURED:
        if(volume != slider1.getValue())
          BSP_AUDIO_OUT_SetVolume(slider1.getValue());
        break;
      case USBD_STATE_SUSPENDED:
        BSP_AUDIO_OUT_DeInit();
        slider1.setValue(0);
      default:;
    }
  }

  if(uwTick - tk_vu > 50){
    tk_vu = uwTick;

    static int16_t lv_L = 0;
    static int16_t lv_R = 0;
    int16_t temp_L = VU_Level_Left *slider1.getValue()/3000;
    int16_t temp_R = VU_Level_Right*slider1.getValue()/3000;

    // Restirction
    if(temp_L > 100) temp_L = 100;
    if(temp_R > 100) temp_R = 100;

    // Decrease display volume conditionaly for animation
    if(lv_L <= temp_L)    lv_L = temp_L;
    else if(lv_L >= 5)    lv_L -= (lv_L - temp_L)/5;
    else                  lv_L = 0;
    if(lv_R <= temp_R)    lv_R = temp_R;
    else if(lv_R >= 5)    lv_R -= (lv_R - temp_R)/5;
    else                  lv_R = 0;

    // printf("L:%d, R:%d\r\n", lv_L, lv_R);
    VU_Level_Left = 0;
    VU_Level_Right = 0;
    vu_L.setValue(lv_L);
    vu_L.invalidate();
    vu_R.setValue(lv_R);
    vu_R.invalidate();
  }

}

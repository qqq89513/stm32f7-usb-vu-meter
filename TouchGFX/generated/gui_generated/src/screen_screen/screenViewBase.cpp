/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

screenViewBase::screenViewBase() :
    flexButtonCallback(this, &screenViewBase::flexButtonCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    btn_config.setBoxWithBorderPosition(0, 0, 50, 50);
    btn_config.setBorderSize(0);
    btn_config.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0), touchgfx::Color::getColorFrom24BitRGB(132, 212, 239), touchgfx::Color::getColorFrom24BitRGB(0, 0, 0), touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    btn_config.setIconBitmaps(Bitmap(BITMAP_DARK_ICONS_SETTINGS_48_ID), Bitmap(BITMAP_DARK_ICONS_SETTINGS_48_ID));
    btn_config.setIconXY(0, 0);
    btn_config.setPosition(0, 222, 50, 50);
    btn_config.setVisible(false);
    btn_config.setAction(flexButtonCallback);

    btn_color.setBoxWithBorderPosition(0, 0, 50, 50);
    btn_color.setBorderSize(0);
    btn_color.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0), touchgfx::Color::getColorFrom24BitRGB(132, 212, 239), touchgfx::Color::getColorFrom24BitRGB(0, 0, 0), touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    btn_color.setIconBitmaps(Bitmap(BITMAP_DARK_ICONS_SETTINGS_48_ID), Bitmap(BITMAP_DARK_ICONS_SETTINGS_48_ID));
    btn_color.setIconXY(0, 0);
    btn_color.setPosition(0, 222, 50, 50);
    btn_color.setAction(flexButtonCallback);

    graph_t.setScale(1);
    graph_t.setPosition(40, 0, 400, 193);
    graph_t.setGraphAreaMargin(0, 0, 0, 0);
    graph_t.setGraphAreaPadding(0, 0, 0, 0);
    graph_t.setGraphRangeY(-100, 100);

    graph_tHistogram1.setScale(1);
    graph_tHistogram1.setColor(touchgfx::Color::getColorFrom24BitRGB(130, 20, 197));
    graph_tHistogram1.setBarWidth(1);
    graph_tHistogram1.setBaseline(0);
    graph_t.addGraphElement(graph_tHistogram1);

    graph_t.addDataPoint(-23.460931266948f);
    graph_t.addDataPoint(-22.8454647616901f);
    graph_t.addDataPoint(-21.5290816568545f);
    graph_t.addDataPoint(-19.5048937303161f);
    graph_t.addDataPoint(-16.7779872504521f);
    graph_t.addDataPoint(-13.3654093006881f);
    graph_t.addDataPoint(-9.29596770552219f);
    graph_t.addDataPoint(-4.60983927468548f);
    graph_t.addDataPoint(0.641996601920788f);
    graph_t.addDataPoint(6.39849868509449f);
    graph_t.addDataPoint(12.5894645459851f);
    graph_t.addDataPoint(19.1365753708702f);
    graph_t.addDataPoint(25.9545748688138f);
    graph_t.addDataPoint(32.9525557158791f);
    graph_t.addDataPoint(40.0353398596828f);
    graph_t.addDataPoint(47.104928923124f);
    graph_t.addDataPoint(54.0620011661268f);
    graph_t.addDataPoint(60.8074353742407f);
    graph_t.addDataPoint(67.2438329819729f);
    graph_t.addDataPoint(73.2770185623067f);
    graph_t.addDataPoint(78.8174938001321f);
    graph_t.addDataPoint(83.7818222302566f);
    graph_t.addDataPoint(88.0939240950803f);
    graph_t.addDataPoint(91.6862597667066f);
    graph_t.addDataPoint(94.5008843941457f);
    graph_t.addDataPoint(96.4903566961549f);
    graph_t.addDataPoint(97.6184885671727f);
    graph_t.addDataPoint(97.8609219375816f);
    graph_t.addDataPoint(97.2055261840194f);
    graph_t.addDataPoint(95.6526081896341f);
    graph_t.addDataPoint(93.2149320385881f);
    graph_t.addDataPoint(89.917549713006f);
    graph_t.addDataPoint(85.7974408637245f);
    graph_t.addDataPoint(80.9029730775355f);
    graph_t.addDataPoint(75.2931866440141f);
    graph_t.addDataPoint(69.0369161130985f);
    graph_t.addDataPoint(62.2117647492184f);
    graph_t.addDataPoint(54.902940889748f);
    graph_t.addDataPoint(47.2019833107477f);
    graph_t.addDataPoint(39.2053886251444f);
    graph_t.addDataPoint(31.0131640602279f);
    graph_t.addDataPoint(22.7273311692658f);
    graph_t.addDataPoint(14.4503948407733f);
    graph_t.addDataPoint(6.28381302791737f);
    graph_t.addDataPoint(-1.67351780667105f);
    graph_t.addDataPoint(-9.32673529083997f);
    graph_t.addDataPoint(-16.5864154481667f);
    graph_t.addDataPoint(-23.369897211688f);
    graph_t.addDataPoint(-29.6024930754767f);
    graph_t.addDataPoint(-35.2185773429677f);
    graph_t.addDataPoint(-40.162531868753f);
    graph_t.addDataPoint(-44.3895309961211f);
    graph_t.addDataPoint(-47.8661646422041f);
    graph_t.addDataPoint(-50.5708753687775f);
    graph_t.addDataPoint(-52.4942137921525f);
    graph_t.addDataPoint(-53.6389049033126f);
    graph_t.addDataPoint(-54.0197207640059f);
    graph_t.addDataPoint(-53.6631728531551f);
    graph_t.addDataPoint(-52.6070142863527f);
    graph_t.addDataPoint(-50.8995709782641f);
    graph_t.addDataPoint(-48.598908634011f);
    graph_t.addDataPoint(-45.7718453269054f);
    graph_t.addDataPoint(-42.4928357442054f);
    graph_t.addDataPoint(-38.8427307010526f);
    graph_t.addDataPoint(-34.9074420077127f);
    graph_t.addDataPoint(-30.7765300866344f);
    graph_t.addDataPoint(-26.5417335971086f);
    graph_t.addDataPoint(-22.2954734073584f);
    graph_t.addDataPoint(-18.1293420742062f);
    graph_t.addDataPoint(-14.132611887859f);
    graph_t.addDataPoint(-10.3907816523639f);
    graph_t.addDataPoint(-6.98418272919716f);
    graph_t.addDataPoint(-3.98667362902231f);
    graph_t.addDataPoint(-1.46443372074189f);
    graph_t.addDataPoint(0.52511746320021f);
    graph_t.addDataPoint(1.93426105200364f);
    graph_t.addDataPoint(2.72576649437382f);
    graph_t.addDataPoint(2.87350855577086f);
    graph_t.addDataPoint(2.36291083540639f);
    graph_t.addDataPoint(1.19120353401632f);
    graph_t.addDataPoint(-0.632506640720045f);
    graph_t.addDataPoint(-3.08735499061813f);
    graph_t.addDataPoint(-6.14102646392359f);
    graph_t.addDataPoint(-9.7502442200272f);
    graph_t.addDataPoint(-13.8614342064404f);
    graph_t.addDataPoint(-18.4115542683544f);
    graph_t.addDataPoint(-23.3290752066006f);
    graph_t.addDataPoint(-28.5350982104506f);
    graph_t.addDataPoint(-33.9445914631034f);
    graph_t.addDataPoint(-39.4677265233523f);
    graph_t.addDataPoint(-45.0112933895073f);
    graph_t.addDataPoint(-50.4801733809102f);
    graph_t.addDataPoint(-55.7788437926575f);
    graph_t.addDataPoint(-60.8128946914523f);
    graph_t.addDataPoint(-65.4905312819415f);
    graph_t.addDataPoint(-69.7240390434443f);
    graph_t.addDataPoint(-73.4311907785241f);
    graph_t.addDataPoint(-76.5365679505232f);
    graph_t.addDataPoint(-78.9727829119107f);
    graph_t.addDataPoint(-80.6815774279676f);
    graph_t.addDataPoint(-81.614781841484f);
    graph_t.addDataPoint(-81.7351225783f);
    graph_t.addDataPoint(-81.0168574729918f);
    graph_t.addDataPoint(-79.4462391459019f);
    graph_t.addDataPoint(-77.021791399596f);
    graph_t.addDataPoint(-73.7543965608759f);
    graph_t.addDataPoint(-69.6671955697013f);
    graph_t.addDataPoint(-64.7952926931833f);
    graph_t.addDataPoint(-59.1852819113162f);
    graph_t.addDataPoint(-52.8945927709338f);
    graph_t.addDataPoint(-45.9906687670383f);
    graph_t.addDataPoint(-38.5499945371585f);
    graph_t.addDataPoint(-30.6569762089707f);
    graph_t.addDataPoint(-22.4027063320073f);
    graph_t.addDataPoint(-13.8836218756571f);
    graph_t.addDataPoint(-5.2000795212956f);
    graph_t.addDataPoint(3.54512596992918f);
    graph_t.addDataPoint(12.2482885185232f);
    graph_t.addDataPoint(20.8063241813723f);
    graph_t.addDataPoint(29.1182986869474f);
    graph_t.addDataPoint(37.0869216973719f);
    graph_t.addDataPoint(44.6199810662743f);
    graph_t.addDataPoint(51.631705817582f);
    graph_t.addDataPoint(58.044022221284f);
    graph_t.addDataPoint(63.7876945037676f);
    graph_t.addDataPoint(68.803328863455f);
    graph_t.addDataPoint(73.0422220588564f);
    graph_t.addDataPoint(76.4670515238673f);
    graph_t.addDataPoint(79.05238303485f);
    graph_t.addDataPoint(80.7849982752694f);
    graph_t.addDataPoint(81.6640338649525f);
    graph_t.addDataPoint(81.7009271575743f);
    graph_t.addDataPoint(80.9191783054497f);
    graph_t.addDataPoint(79.3539210679038f);
    graph_t.addDataPoint(77.0513178194549f);
    graph_t.addDataPoint(74.0677852910977f);
    graph_t.addDataPoint(70.4690612956165f);
    graph_t.addDataPoint(66.3291335721221f);
    graph_t.addDataPoint(61.7290388966624f);
    graph_t.addDataPoint(56.7555579037425f);
    graph_t.addDataPoint(51.4998236729752f);
    graph_t.addDataPoint(46.0558647719051f);
    graph_t.addDataPoint(40.5191095719805f);
    graph_t.addDataPoint(34.9848698103279f);
    graph_t.addDataPoint(29.5468312958113f);
    graph_t.addDataPoint(24.2955737372907f);
    graph_t.addDataPoint(19.3171426433074f);
    graph_t.addDataPoint(14.6916969159753f);
    graph_t.addDataPoint(10.4922514108088f);
    graph_t.addDataPoint(6.78353558568556f);
    graph_t.addDataPoint(3.62098531165138f);
    graph_t.addDataPoint(1.04988431202186f);
    graph_t.addDataPoint(-0.895332861974758f);
    graph_t.addDataPoint(-2.19160362551001f);
    graph_t.addDataPoint(-2.82757909216869f);
    graph_t.addDataPoint(-2.80377926646334f);
    graph_t.addDataPoint(-2.1325577044003f);
    graph_t.addDataPoint(-0.837880417333999f);
    graph_t.addDataPoint(1.04508288326539f);
    graph_t.addDataPoint(3.47054475125478f);
    graph_t.addDataPoint(6.38285505555361f);
    graph_t.addDataPoint(9.71741564165858f);
    graph_t.addDataPoint(13.4017336363224f);
    graph_t.addDataPoint(17.3566055144774f);
    graph_t.addDataPoint(21.4974068895139f);
    graph_t.addDataPoint(25.7354697280487f);
    graph_t.addDataPoint(29.979528403444f);
    graph_t.addDataPoint(34.1372032717176f);
    graph_t.addDataPoint(38.1165098457872f);
    graph_t.addDataPoint(41.8273613724187f);
    graph_t.addDataPoint(45.1830438889075f);
    graph_t.addDataPoint(48.1016440617792f);
    graph_t.addDataPoint(50.5073972639437f);
    graph_t.addDataPoint(52.3319480537372f);
    graph_t.addDataPoint(53.5154931950181f);
    graph_t.addDataPoint(54.0077924455169f);
    graph_t.addDataPoint(53.7690348688753f);
    graph_t.addDataPoint(52.7705360158776f);
    graph_t.addDataPoint(50.9952694477098f);
    graph_t.addDataPoint(48.4382132031662f);
    graph_t.addDataPoint(45.106509215874f);
    graph_t.addDataPoint(41.0194367113439f);
    graph_t.addDataPoint(36.2081886820063f);
    graph_t.addDataPoint(30.7154695404236f);
    graph_t.addDataPoint(24.5949089033529f);
    graph_t.addDataPoint(17.9103042036899f);
    graph_t.addDataPoint(10.7347072368538f);
    graph_t.addDataPoint(3.14935810143497f);
    graph_t.addDataPoint(-4.75750286671368f);
    graph_t.addDataPoint(-12.8919374711666f);
    graph_t.addDataPoint(-21.1557025538505f);
    graph_t.addDataPoint(-29.4477088268128f);
    graph_t.addDataPoint(-37.6655324727794f);
    graph_t.addDataPoint(-45.7069434794633f);
    graph_t.addDataPoint(-53.4714365456647f);
    graph_t.addDataPoint(-60.8617375038779f);
    graph_t.addDataPoint(-67.7852595100506f);
    graph_t.addDataPoint(-74.1554940869622f);
    graph_t.addDataPoint(-79.8933051579995f);
    graph_t.addDataPoint(-84.9281138068352f);
    graph_t.addDataPoint(-89.1989526054638f);
    graph_t.addDataPoint(-92.6553715669595f);
    graph_t.addDataPoint(-95.258187119408f);
    graph_t.addDataPoint(-96.9800551791087f);
    graph_t.addDataPoint(-97.8058650572328f);
    graph_t.addDataPoint(-97.7329460456197f);
    graph_t.addDataPoint(-96.771082810463f);
    graph_t.addDataPoint(-94.9423422668832f);
    graph_t.addDataPoint(-92.2807107733801f);
    graph_t.addDataPoint(-88.8315503797971f);
    graph_t.addDataPoint(-84.6508813933811f);
    graph_t.addDataPoint(-79.8045026946222f);
    graph_t.addDataPoint(-74.3669636418022f);
    graph_t.addDataPoint(-68.4204033567613f);
    graph_t.addDataPoint(-62.0532757809779f);
    graph_t.addDataPoint(-55.3589800394821f);
    graph_t.addDataPoint(-48.4344185909015f);
    graph_t.addDataPoint(-41.3785029665705f);
    graph_t.addDataPoint(-34.2906337931446f);
    graph_t.addDataPoint(-27.2691762811645f);
    graph_t.addDataPoint(-20.409955496673f);
    graph_t.addDataPoint(-13.8047968027304f);
    graph_t.addDataPoint(-7.54012890935358f);
    graph_t.addDataPoint(-1.69567812542861f);
    graph_t.addDataPoint(3.65673100307238f);
    graph_t.addDataPoint(8.45424857295892f);
    graph_t.addDataPoint(12.6439263918107f);
    graph_t.addDataPoint(16.1834924137894f);
    graph_t.addDataPoint(19.0419506686924f);
    graph_t.addDataPoint(21.2000048463491f);
    graph_t.addDataPoint(22.6502967799338f);
    graph_t.addDataPoint(23.3974529976546f);
    graph_t.addDataPoint(23.457948096162f);
    graph_t.addDataPoint(22.8597748914461f);
    graph_t.addDataPoint(21.6419358827657f);
    graph_t.addDataPoint(19.8537611855125f);
    graph_t.addDataPoint(17.5540601396027f);
    graph_t.addDataPoint(14.8101305561052f);
    graph_t.addDataPoint(11.6966272568216f);
    graph_t.addDataPoint(8.2943182320825f);
    graph_t.addDataPoint(4.68874458659418f);
    graph_t.addDataPoint(0.968801633531854f);
    graph_t.addDataPoint(-2.77472542040828f);
    graph_t.addDataPoint(-6.45066292555982f);
    graph_t.addDataPoint(-9.96895265911818f);
    graph_t.addDataPoint(-13.2421381456097f);
    graph_t.addDataPoint(-16.1868136786487f);
    graph_t.addDataPoint(-18.7250022566578f);
    graph_t.addDataPoint(-20.7854553717682f);
    graph_t.addDataPoint(-22.3048431667087f);
    graph_t.addDataPoint(-23.2288199277239f);
    graph_t.addDataPoint(-23.5129514101862f);
    graph_t.addDataPoint(-23.1234791706662f);
    graph_t.addDataPoint(-22.0379233865934f);
    graph_t.addDataPoint(-20.2455043350694f);
    graph_t.addDataPoint(-17.747379315033f);
    graph_t.addDataPoint(-14.5566939239615f);
    graph_t.addDataPoint(-10.6984379973769f);
    graph_t.addDataPoint(-6.20912000063034f);
    graph_t.addDataPoint(-1.13625596107661f);
    graph_t.addDataPoint(4.46231611087054f);
    graph_t.addDataPoint(10.519283682518f);
    graph_t.addDataPoint(16.9588626918508f);
    graph_t.addDataPoint(23.6979314642566f);
    graph_t.addDataPoint(30.6472848636385f);
    graph_t.addDataPoint(37.7129867065253f);
    graph_t.addDataPoint(44.7977982014371f);
    graph_t.addDataPoint(51.8026645535505f);
    graph_t.addDataPoint(58.6282307209715f);
    graph_t.addDataPoint(65.1763672513422f);
    graph_t.addDataPoint(71.3516807097606f);
    graph_t.addDataPoint(77.0629848622975f);
    graph_t.addDataPoint(82.2247113683602f);
    graph_t.addDataPoint(86.7582356557138f);
    graph_t.addDataPoint(90.5930991616388f);
    graph_t.addDataPoint(93.6681080150246f);
    graph_t.addDataPoint(95.9322916331548f);
    graph_t.addDataPoint(97.3457051590389f);
    graph_t.addDataPoint(97.8800645514316f);
    graph_t.addDataPoint(97.5192034657325f);
    graph_t.addDataPoint(96.2593448230798f);
    graph_t.addDataPoint(94.1091842940859f);
    graph_t.addDataPoint(91.0897805221373f);
    graph_t.addDataPoint(87.2342586969721f);
    graph_t.addDataPoint(82.5873283871336f);
    graph_t.addDataPoint(77.2046240598054f);
    graph_t.addDataPoint(71.1518807980245f);
    graph_t.addDataPoint(64.5039516895707f);
    graph_t.addDataPoint(57.3436903777998f);
    graph_t.addDataPoint(49.7607099603116f);
    graph_t.addDataPoint(41.8500393282909f);
    graph_t.addDataPoint(33.7107007497902f);
    graph_t.addDataPoint(25.4442223861158f);
    graph_t.addDataPoint(17.1531198620524f);
    graph_t.addDataPoint(8.93936218718827f);
    graph_t.addDataPoint(0.902848407105751f);
    graph_t.addDataPoint(-6.86007796777378f);
    graph_t.addDataPoint(-14.2580636709107f);
    graph_t.addDataPoint(-21.2060941548989f);
    graph_t.addDataPoint(-27.6267448117682f);
    graph_t.addDataPoint(-33.4513124110699f);
    graph_t.addDataPoint(-38.6208055867634f);
    graph_t.addDataPoint(-43.0867899758442f);
    graph_t.addDataPoint(-46.8120605711044f);
    graph_t.addDataPoint(-49.7711418178469f);
    graph_t.addDataPoint(-51.9506042725827f);
    graph_t.addDataPoint(-53.349189350696f);
    graph_t.addDataPoint(-53.9777515500802f);
    graph_t.addDataPoint(-53.8590044221693f);
    graph_t.addDataPoint(-53.0270855914257f);
    graph_t.addDataPoint(-51.5269440671809f);
    graph_t.addDataPoint(-49.4135560781495f);
    graph_t.addDataPoint(-46.7509925697263f);
    graph_t.addDataPoint(-43.6113388142807f);
    graph_t.addDataPoint(-40.0734939410758f);
    graph_t.addDataPoint(-36.2218656295535f);
    graph_t.addDataPoint(-32.1449774126491f);
    graph_t.addDataPoint(-27.9340201180677f);
    graph_t.addDataPoint(-23.6813573563379f);
    graph_t.addDataPoint(-19.47901825433f);
    graph_t.addDataPoint(-15.4171977370131f);
    graph_t.addDataPoint(-11.5827854277924f);
    graph_t.addDataPoint(-8.05795420167767f);
    graph_t.addDataPoint(-4.91881991604541f);
    graph_t.addDataPoint(-2.23420142646818f);
    graph_t.addDataPoint(-0.0644974911706058f);
    graph_t.addDataPoint(1.53930350765923f);
    graph_t.addDataPoint(2.53645971390065f);
    graph_t.addDataPoint(2.89715242349789f);
    graph_t.addDataPoint(2.60298662858897f);
    graph_t.addDataPoint(1.6473097725552f);
    graph_t.addDataPoint(0.0353445049551837f);
    graph_t.addDataPoint(-2.21586991041572f);
    graph_t.addDataPoint(-5.07772229128737f);
    graph_t.addDataPoint(-8.5104599506994f);
    graph_t.addDataPoint(-12.4637967818915f);
    graph_t.addDataPoint(-16.8776896440207f);
    graph_t.addDataPoint(-21.6832714213237f);
    graph_t.addDataPoint(-26.8039254597629f);
    graph_t.addDataPoint(-32.1564852673916f);
    graph_t.addDataPoint(-37.6525402829391f);
    graph_t.addDataPoint(-43.1998283295529f);
    graph_t.addDataPoint(-48.7036906951403f);
    graph_t.addDataPoint(-54.0685700359979f);
    graph_t.addDataPoint(-59.1995255611984f);
    graph_t.addDataPoint(-64.0037422645995f);
    graph_t.addDataPoint(-68.3920124590265f);
    graph_t.addDataPoint(-72.2801614912165f);
    graph_t.addDataPoint(-75.5904017505872f);
    graph_t.addDataPoint(-78.2525889888361f);
    graph_t.addDataPoint(-80.2053626165791f);
    graph_t.addDataPoint(-81.3971546890208f);
    graph_t.addDataPoint(-81.7870444714571f);
    graph_t.addDataPoint(-81.3454546729204f);
    graph_t.addDataPoint(-80.0546712452437f);
    graph_t.addDataPoint(-77.9091806877533f);
    graph_t.addDataPoint(-74.915822644523f);
    graph_t.addDataPoint(-71.0937461447753f);
    graph_t.addDataPoint(-66.4741820695408f);
    graph_t.addDataPoint(-61.1000262228819f);
    graph_t.addDataPoint(-55.0252422184999f);
    graph_t.addDataPoint(-48.3140969048012f);
    graph_t.addDataPoint(-41.0402296635524f);
    graph_t.addDataPoint(-33.2855837425058f);
    graph_t.addDataPoint(-25.1392057621532f);
    graph_t.addDataPoint(-16.6959353198099f);
    graph_t.addDataPoint(-8.05500868776909f);
    graph_t.addDataPoint(0.681412870277737f);
    graph_t.addDataPoint(9.40975267337691f);
    graph_t.addDataPoint(18.0265537763248f);
    graph_t.addDataPoint(26.4300122693165f);
    graph_t.addDataPoint(34.5214813266434f);
    graph_t.addDataPoint(42.2069337673373f);
    graph_t.addDataPoint(49.3983457931502f);
    graph_t.addDataPoint(56.0149915653598f);
    graph_t.addDataPoint(61.9846248716523f);
    graph_t.addDataPoint(67.2445262659041f);
    graph_t.addDataPoint(71.7424098437005f);
    graph_t.addDataPoint(75.4371619083021f);
    graph_t.addDataPoint(78.2994105644892f);
    graph_t.addDataPoint(80.311913954582f);
    graph_t.addDataPoint(81.4697583915569f);
    graph_t.addDataPoint(81.7803724175523f);
    graph_t.addDataPoint(81.2633447348072f);
    graph_t.addDataPoint(79.9500580672019f);
    graph_t.addDataPoint(77.8831416296566f);
    graph_t.addDataPoint(75.1157487205572f);
    graph_t.addDataPoint(71.7106778801799f);
    graph_t.addDataPoint(67.7393419930981f);
    graph_t.addDataPoint(63.2806087183382f);
    graph_t.addDataPoint(58.4195278557118f);
    graph_t.addDataPoint(53.2459642625538f);
    graph_t.addDataPoint(47.8531624279392f);
    graph_t.addDataPoint(42.3362588456736f);
    graph_t.addDataPoint(36.7907703231553f);
    graph_t.addDataPoint(31.3110800338f);
    graph_t.addDataPoint(25.9889445543406f);
    graph_t.addDataPoint(20.9120472657014f);
    graph_t.addDataPoint(16.1626179001913f);
    graph_t.addDataPoint(11.8161420198208f);

    vu_L.setXY(0, 0);
    vu_L.setProgressIndicatorPosition(0, 0, 20, 184);
    vu_L.setRange(0, 100);
    vu_LPainter.setBitmap(touchgfx::Bitmap(BITMAP_VU_METER_ID));
    vu_L.setPainter(vu_LPainter);
    vu_L.setStart(10, 174);
    vu_L.setEnd(10, 10);
    vu_L.setLineWidth(16);
    vu_L.setLineEndingStyle(touchgfx::Line::SQUARE_CAP_ENDING);
    vu_L.setValue(100);

    vu_R.setXY(460, 0);
    vu_R.setProgressIndicatorPosition(0, 0, 20, 184);
    vu_R.setRange(0, 100);
    vu_RPainter.setBitmap(touchgfx::Bitmap(BITMAP_VU_METER_ID));
    vu_R.setPainter(vu_RPainter);
    vu_R.setStart(10, 174);
    vu_R.setEnd(10, 10);
    vu_R.setLineWidth(16);
    vu_R.setLineEndingStyle(touchgfx::Line::SQUARE_CAP_ENDING);
    vu_R.setValue(100);

    sliderB.setXY(64, 255);
    sliderB.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_DIVIDERS_DIVIDER_SHORT_ID), touchgfx::Bitmap(BITMAP_BLUE_DIVIDERS_DIVIDER_SHORT_ID), touchgfx::Bitmap(BITMAP_SLIDER_INDICATOR_BLUE_ID));
    sliderB.setVisible(false);
    sliderB.setupHorizontalSlider(3, 7, 0, 36, 306);
    sliderB.setValueRange(0, 255);
    sliderB.setValue(5);

    sliderG.setXY(64, 238);
    sliderG.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_DIVIDERS_DIVIDER_SHORT_ID), touchgfx::Bitmap(BITMAP_BLUE_DIVIDERS_DIVIDER_SHORT_ID), touchgfx::Bitmap(BITMAP_SLIDER_INDICATOR_GREEN_ID));
    sliderG.setVisible(false);
    sliderG.setupHorizontalSlider(3, 7, 0, 36, 306);
    sliderG.setValueRange(0, 255);
    sliderG.setValue(5);

    sliderR.setXY(64, 221);
    sliderR.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_DIVIDERS_DIVIDER_SHORT_ID), touchgfx::Bitmap(BITMAP_BLUE_DIVIDERS_DIVIDER_SHORT_ID), touchgfx::Bitmap(BITMAP_SLIDER_INDICATOR_RED_ID));
    sliderR.setVisible(false);
    sliderR.setupHorizontalSlider(3, 7, 0, 36, 306);
    sliderR.setValueRange(0, 255);
    sliderR.setValue(255);

    slider_volume.setXY(144, 232);
    slider_volume.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_SMALL_SLIDER_HORIZONTAL_SMALL_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_SMALL_SLIDER_HORIZONTAL_SMALL_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_SOUND_32_ID));
    slider_volume.setupHorizontalSlider(0, 0, 5, 11, 157);
    slider_volume.setValueRange(0, 100);
    slider_volume.setValue(100);

    add(__background);
    add(btn_config);
    add(btn_color);
    add(graph_t);
    add(vu_L);
    add(vu_R);
    add(sliderB);
    add(sliderG);
    add(sliderR);
    add(slider_volume);
}

void screenViewBase::setupScreen()
{

}

void screenViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &btn_config)
    {
        //Interaction_btn_config_onclick
        //When btn_config clicked change screen to screen_config
        //Go to screen_config with screen transition towards East
        application().gotoscreen_configScreenWipeTransitionEast();
    }
    else if (&src == &btn_color)
    {
        //Interaction_btn_color_onclick
        //When btn_color clicked call virtual function
        //Call btn_color_onclick
        btn_color_onclick();
    }
}

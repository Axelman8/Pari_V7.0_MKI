#pragma once



/*======================================================================================================================================= 
                 _____ _____                               _                    _       _     _           
                / ____|  __ \                             | |                  (_)     | |   | |          
               | (___ | |  | |  ______    ___ __ _ _ __ __| |  __   ____ _ _ __ _  __ _| |__ | | ___  ___ 
                \___ \| |  | | |______|  / __/ _` | '__/ _` |  \ \ / / _` | '__| |/ _` | '_ \| |/ _ \/ __|
                ____) | |__| |          | (_| (_| | | | (_| |   \ V / (_| | |  | | (_| | |_) | |  __/\__ \
               |_____/|_____/            \___\__,_|_|  \__,_|    \_/ \__,_|_|  |_|\__,_|_.__/|_|\___||___/

======================================================================================================================================= 

                             HERE ARE THE SCREEN AND PIN NUMBERS.  EACH PAGE HAS THE SAME SETUP
                                    YOU CAN CONFIGURE YOUR PAGE BUILDUP SETTINGS HERE 
                    
                                     |=====|   |=====|   |=====|   |=====|   |=====|  
                                     |  11 |   |  12 |   |  13 |   |  14 |   |  15 |  
                                     |=====|   |=====|   |=====|   |=====|   |=====|   18
                                        O         O         O         O         O       O
                                              
                                     |=====|   |=====|   |=====|   |=====|   |=====|  
                                     |  6  |   |  7  |   |  8  |   |  9  |   |  10 |  
                                     |=====|   |=====|   |=====|   |=====|   |=====|   17
                                        O         O         O         O         O       O
                                              
                                     |=====|   |=====|   |=====|   |=====|   |=====|  
                                     |  1  |   |  2  |   |  3  |   |  4  |   |  5  |   
                                     |=====|   |=====|   |=====|   |=====|   |=====|   16
                                        O         O         O         O         O       O

======================================================================================================================================= */

/* 
-- configure button behaviour: --           -- configure screen behaviour: --      
scenePage_selection()                     
presetPage_selection()                      presetNameNumber_screen() 
auditionmodePage_selection()                auditionMode_screen()
effectPage_selection()                      effect_NOWAH_screen() effect_YESWAH_screen()    
looperPage_selection()                      NOlooper_screen() YESlooper_screen()    
numberPage_selection()                      numberSelect_screen() reset_numberSelect_screen()  
ampabcdPage_selection()                     ampABCD_NOWAH_screen() | ampABCD_YESWAH_screen() | ampABCD_NOLOOPER_screen() | ampABCD_YESLOOPER_screen()
taptempoPage_selection()                    tapTempo_screen()  
tunerPage_selection()
bankDown_selection()
bankUp_selection()
presetDown_selection()                      presetDown_screen()     
presetUp_selection()                        presetUp_screen()     
presetPlus100_selection()                   presetPlus100_screen()                                              
presetPlus50_selection()                    presetPlus50_screen()
presetMin50_selection()                     presetMin50_screen()
presetMin100_selection()                    presetMin100_screen()
presetScenes_Tuner_selection()
*/


/*=======================================================================================================================================*/
//    SCENES
/*=======================================================================================================================================*/
#define sceneScreen_5  presetDown_screen()
#define sceneswitch_5  presetDown_selection()

#define sceneScreen_10 presetUp_screen()
#define sceneswitch_10 presetUp_selection()

#define sceneScreen_11 effect_screen()
#define sceneswitch_11 effectPage_selection()

#define sceneScreen_12 ampABCD_screen()
#define sceneswitch_12 ampabcdPage_selection()

#define sceneScreen_13 presetNameNumber_screen()
#define sceneswitch_13 presetPage_selection()

#define sceneScreen_14 tapTempo_screen()
#define sceneswitch_14 taptempoPage_selection()


#define sceneScreen_15 numberSelect_screen()
#define sceneswitch_15 numberPage_selection()

//BUTTONS ONLY
#define sceneswitch_16 bankDown_selection()
#define sceneswitch_17 bankUp_selection()
#define sceneswitch_18 tunerPage_selection()

/*=======================================================================================================================================*/
//    PRESET
/*=======================================================================================================================================*/
#define presetScreen_11 effect_screen()
#define presetswitch_11 effectPage_selection()

#define presetScreen_12 ampABCD_screen()
#define presetswitch_12 ampabcdPage_selection()

#define presetScreen_13 auditionMode_screen()
#define presetswitch_13 auditionmodePage_selection()

#define presetScreen_14 tapTempo_screen()
#define presetswitch_14 taptempoPage_selection()

#define presetScreen_15 numberSelect_screen()
#define presetswitch_15 numberPage_selection()

//BUTTONS ONLY
#define presetswitch_16 bankDown_selection()
#define presetswitch_17 bankUp_selection()
#define presetswitch_18 tunerPage_selection()


/*=======================================================================================================================================*/
//    EFFECT
/*=======================================================================================================================================*/
#define effectScreen_11 ampABCD_screen()
#define effectswitch_11 ampabcdPage_selection()

#define effectScreen_12 looper_screen()
#define effectswitch_12 looperPage_selection()

#define effectswitch_13 scenePage_selection()

#define effectScreen_14 tapTempo_screen()
#define effectswitch_14 taptempoPage_selection()

#define effectScreen_15 numberSelect_screen()
#define effectswitch_15 numberPage_selection()

//BUTTONS ONLY
#define effectswitch_16 bankDown_selection()
#define effectswitch_17 bankUp_selection()
#define effectswitch_18 tunerPage_selection()


/*=======================================================================================================================================*/
//    AMP_ABCD
/*=======================================================================================================================================*/
#define AMP_effectScreen_11 effect_screen()
#define AMP_effectswitch_11 effectPage_selection()
#define AMP_effectScreen_12 looper_screen()
#define AMP_effectswitch_12 looperPage_selection()

#define AMP_effectswitch_13 scenePage_selection()

#define AMP_effectswitch_14 taptempoPage_selection()
#define AMP_effectScreen_14 tapTempo_screen()

#define AMP_effectScreen_15 numberSelect_screen()
#define AMP_effectswitch_15 numberPage_selection()

//BUTTONS ONLY
#define AMP_effectswitch_16 bankDown_selection()
#define AMP_effectswitch_17 bankUp_selection()
#define AMP_effectswitch_18 tunerPage_selection()


/*=======================================================================================================================================*/
//    LOOPER
/*=======================================================================================================================================*/
#define looperScreen_11 effect_screen()
#define looperswitch_11 effectPage_selection()

#define looperScreen_12 ampABCD_screen()
#define looperswitch_12 ampabcdPage_selection()

#define looperswitch_13 scenePage_selection()

#define looperScreen_14 tapTempo_screen()
#define looperswitch_14 taptempoPage_selection()

#define looperScreen_15 numberSelect_screen()
#define looperswitch_15 numberPage_selection()

//BUTTONS ONLY
#define looperswitch_16 bankDown_selection()
#define looperswitch_17 bankUp_selection()
#define looperswitch_18 tunerPage_selection()

/*=======================================================================================================================================*/
//    NUMBERS PAGE
/*=======================================================================================================================================*/
#define numberScreen_11 effect_screen()
#define numberswitch_11 effectPage_selection()

#define numberScreen_12 ampABCD_screen()
#define numberswitch_12 ampabcdPage_selection()

#define numberswitch_13 scenePage_selection()

#define numberScreen_14 tapTempo_screen()
#define numberScreen_15 numberSelect_screen()

//BUTTONS ONLY
#define numberswitch_16 bankDown_selection()
#define numberswitch_17 bankUp_selection()
#define numberswitch_18 reset_numberSelect_screen()

// 14 and 15 are solid in the code, no need for a option to make this something else
// #define numberswitch_14 taptempoPage_selection() 
// #define numberswitch_15 numberPage_selection() 

/*=======================================================================================================================================*/
// Define SCREEN build-up Variables
/*=======================================================================================================================================*/
/* 
 *  These colors are free to configure... just give it a color and flash it to the ARDUINO to see the result!
 *  NOTE:  Only some screens are configurable.
 *  
 *##################   COLORS   ###########################
 *                     
 *                     TFT_BLACK       0x0000
 *                     TFT_NAVY        0x000F
 *                     TFT_DARKGREEN   0x03E0
 *                     TFT_DARKCYAN    0x03EF
 *                     TFT_MAROON      0x7800
 *                     TFT_PURPLE      0x780F
 *                     TFT_OLIVE       0x7BE0
 *                     TFT_LIGHTGREY   0xC618
 *                     TFT_DARKGREY    0x7BEF
 *                     TFT_BLUE        0x001F
 *                     TFT_GREEN       0x07E0
 *                     TFT_CYAN        0x07FF
 *                     TFT_RED         0xF800
 *                     TFT_MAGENTA     0xF81F
 *                     TFT_YELLOW      0xFFE0
 *                     TFT_WHITE       0xFFFF
 *                     TFT_ORANGE      0xFDA0
 *                     TFT_GREENYELLOW 0xB7E0
 *                     TFT_PINK        0xFC9F
 *  
 *  TFT can also be ST7735_BLACK etc...  but I prefer TFT (is faster!)
 *  
 *  
 */
/*=======================================================================================================================================*/

/* fillscreen       = SCREEN background color
 * txt1,2,3color    = TEXT color 
 * txt1,2,3BGcolor  = TEXT background color: this is taken from the fillscreen background color!
*/

// bootup TOPscreens 12, 13, 14 -> Topscreens with text: A X E 
#define bootupStyle1_fillscreen TFT_BLACK 
#define bootupStyle1_txt1_color TFT_CYAN 
#define bootupStyle1_txt1_BGcolor bootupStyle1_fillscreen

// bootup MIDDLEscreen 8 -> Topscreens with text: FX 
#define bootupStyle5_fillscreen TFT_RED
#define bootupStyle5_txt1_color TFT_WHITE
#define bootupStyle5_txt1_BGcolor bootupStyle5_fillscreen

// bootup BOTTOMscreen 2 -> Topscreens with text: I 
#define bootupStyle2_fillscreen TFT_BLACK
#define bootupStyle2_txt1_color TFT_RED
#define bootupStyle2_txt1_BGcolor bootupStyle2_fillscreen

// bootup BOTTOMscreen 3 -> Topscreens with text: I  
#define bootupStyle3_fillscreen TFT_BLACK
#define bootupStyle3_txt1_color TFT_WHITE
#define bootupStyle3_txt1_BGcolor bootupStyle3_fillscreen

// bootup BOTTOMscreen 4 -> Topscreens with text: I 
#define bootupStyle4_fillscreen TFT_BLACK
#define bootupStyle4_txt1_color TFT_BLUE
#define bootupStyle4_txt1_BGcolor bootupStyle4_fillscreen

/*=======================================================================================================================================*/

#define activesceneStyle1_fillscreen TFT_GREEN
#define activesceneStyle1_txt1_color TFT_BLACK
#define activesceneStyle1_txt1_BGcolor activesceneStyle1_fillscreen

// ALL SCENES screens Background color
#define sceneStyle0_fillscreen TFT_BLACK

// ALL SCENE screen color 
#define sceneStyle1_txt1_color TFT_YELLOW
#define sceneStyle1_txt1_BGcolor sceneStyle0_fillscreen
#define sceneStyle1_txt2_color TFT_YELLOW
#define sceneStyle1_txt2_BGcolor sceneStyle0_fillscreen

#define sceneStyle2_txt1_color TFT_CYAN
#define sceneStyle2_txt1_BGcolor sceneStyle0_fillscreen
#define sceneStyle2_txt2_color TFT_CYAN
#define sceneStyle2_txt2_BGcolor sceneStyle0_fillscreen

#define sceneStyle3_txt1_color TFT_CYAN
#define sceneStyle3_txt1_BGcolor sceneStyle0_fillscreen

#define sceneStyle4_txt1_color TFT_YELLOW
#define sceneStyle4_txt1_BGcolor sceneStyle0_fillscreen

/*=======================================================================================================================================*/

// PRESET DOWN screen (Screen 5) ->  1 screen configuration of the screen background and txt1(PRESET) and txt2(<<) color
#define presetDown_screen_fillscreen TFT_BLACK
#define presetDown_screen_txt1_color TFT_BLUE
#define presetDown_screen_txt1_BGcolor presetDown_screen_fillscreen
#define presetDown_screen_txt2_color TFT_YELLOW
#define presetDown_screen_txt2_BGcolor presetDown_screen_fillscreen

// PRESET UP screen (Screen 10) ->  1 screen configuration of the screen background and txt1(PRESET) and txt2(>>) color
#define presetUp_screen_fillscreen TFT_BLACK
#define presetUp_screen_txt1_color TFT_BLUE
#define presetUp_screen_txt1_BGcolor presetUp_screen_fillscreen
#define presetUp_screen_txt2_color TFT_YELLOW
#define presetUp_screen_txt2_BGcolor presetUp_screen_fillscreen

/*=======================================================================================================================================*/

//STARTUP screen for preset info  NO(txt1) INFO(txt2)
#define presetNameNumber_screen_fillscreen TFT_BLACK
#define presetNameNumber_screen_txt1_color TFT_CYAN
#define presetNameNumber_screen_txt1_BGcolor presetNameNumber_screen_fillscreen
#define presetNameNumber_screen_txt2_color TFT_CYAN
#define presetNameNumber_screen_txt2_BGcolor presetNameNumber_screen_fillscreen

//Not active PRESET number text color settings
#define presetNumberStyle1_fillscreen TFT_BLACK
#define presetNumberStyle1_txt1_color TFT_MAGENTA
#define presetNumberStyle1_txt1_BGcolor presetNumberStyle1_fillscreen

//PRESET name text color settings
#define presetNameStyle1_txt1_color TFT_CYAN
#define presetNameStyle1_txt1_BGcolor presetNumberStyle1_fillscreen

//Active preset settings text color settings
#define presetNumberStyle2_fillscreen TFT_BLACK
#define presetNumberStyle2_txt1_color TFT_MAGENTA
#define presetNumberStyle2_txt1_BGcolor presetNumberStyle2_fillscreen

//Active preset settings
#define presetNameStyle2_fillscreen TFT_GREEN
#define presetNameStyle2_txt1_color TFT_BLACK
#define presetNameStyle2_txt1_BGcolor presetNameStyle2_fillscreen

/*=======================================================================================================================================*/
// TOP SCREENS build-up Variables
/*=======================================================================================================================================*/

// PRESET number and name on Screen 13 -> configuration color of the number(txt1) and text (txt2)
#define screen13Style_fillscreen TFT_BLACK
#define screen13Style_txt1_color TFT_BLUE
#define screen13Style_txt1_BGcolor screen13Style_fillscreen
#define screen13Style_txt2_color TFT_YELLOW
#define screen13Style_txt2_BGcolor screen13Style_fillscreen


// PRESET screen -> 1 screen with "Preset" (txt1)  "Page" (txt2) on it (topscreens)
#define preset_screen_fillscreen TFT_ORANGE
#define preset_screen_txt1_color TFT_BLACK
#define preset_screen_txt1_BGcolor preset_screen_fillscreen
#define preset_screen_txt2_color TFT_BLACK
#define preset_screen_txt2_BGcolor preset_screen_fillscreen

// PRESET ADDITIONAL TOP screen -> PRESET(txt1) (topscreens for +100,-100,+50,-50) text color
#define presetStyle1_fillscreen TFT_PINK
#define presetStyle1_txt1_color TFT_BLACK
#define presetStyle1_txt1_BGcolor presetStyle1_fillscreen
#define presetStyle1_txt2_color TFT_BLACK
#define presetStyle1_txt2_BGcolor presetStyle1_fillscreen

// EFFECT screen -> 1 screen configuration of the screen background and txt1(EFFECT) and txt2(PAGE) color
#define effect_screen_fillscreen TFT_PURPLE
#define effect_screen_txt1_color TFT_CYAN
#define effect_screen_txt1_BGcolor effect_screen_fillscreen
#define effect_screen_txt2_color TFT_CYAN
#define effect_screen_txt2_BGcolor effect_screen_fillscreen

// AMP ABCD screen -> 1 screen configuration of the screen background and txt1(AMP/CAB) and txt2(ABCD) color
#define ampABCD_screen_fillscreen TFT_PURPLE
#define ampABCD_screen_txt1_color TFT_CYAN
#define ampABCD_screen_txt1_BGcolor ampABCD_screen_fillscreen
#define ampABCD_screen_txt2_color TFT_CYAN
#define ampABCD_screen_txt2_BGcolor ampABCD_screen_fillscreen

//EFFECT NOT ACTIVE background and text color settings
#define effectStyle1_fillscreen TFT_RED
#define effectStyle1_txt1_color TFT_CYAN
#define effectStyle1_txt1_BGcolor effectStyle1_fillscreen

//EFFECT ACTIVE background and text color settings
#define effectStyle2_fillscreen TFT_GREEN
#define effectStyle2_txt1_color TFT_BLACK
#define effectStyle2_txt1_BGcolor effectStyle2_fillscreen


// TAP TEMPO screen ->  1 screen configuration of the screen background and txt1(TAP) and txt2(axe tempo) color
#define tapTempo_screen_fillscreen TFT_BLACK  //TFT_DARKGREEN
#define tapTempo_screen_txt1_color TFT_CYAN
#define tapTempo_screen_txt1_BGcolor tapTempo_screen_fillscreen
#define tapTempo_screen_txt2_color TFT_YELLOW
#define tapTempo_screen_txt2_BGcolor tapTempo_screen_fillscreen
#define tapTempo_screen_flash_color TFT_LIGHTGREY  // this is the color of the flash rectangle fillment
#define tapTempo_screen_flash_color1 TFT_PURPLE  // this is the color of the flash rectangle fillment
#define tapTempo_screen_sprite_color TFT_WHITE  // this is the color of the flash rectangle fillment


// TAP TEMPO selectionScreen (when tapping the TEMPO to the beat. The screen shows its selected and to be tapped again) 
// ->  1 screen configuration of the screen background and txt1(TAP) and txt2(axe tempo) color
#define tapTempo_selectionScreen_fillscreen TFT_RED
#define tapTempo_selectionScreen_txt1_color TFT_WHITE
#define tapTempo_selectionScreen_txt1_BGcolor tapTempo_selectionScreen_fillscreen
#define tapTempo_selectionScreen_txt2_color TFT_WHITE
#define tapTempo_selectionScreen_txt2_BGcolor tapTempo_selectionScreen_fillscreen


// LOOPER screen -> 1 screen with LOOPER(txt1) text color
#define looper_screen_fillscreen TFT_PURPLE
#define looper_screen_txt1_color TFT_CYAN
#define looper_screen_txt1_BGcolor looper_screen_fillscreen

// LOOPER screen -> 6 screens with LOOPER(txt1) text color
#define looper_screen_fillscreen TFT_BLACK
#define looper_screen_txt1_color TFT_BLUE
#define looper_screen_txt1_BGcolor looper_screen_fillscreen

// LOOPER screen -> 6 screens (txt2) = selected looper option text color 
#define looper_screen_txt2_color TFT_RED
#define looper_screen_txt2_BGcolor looper_screen_fillscreen


// NOWAH TOPscreen 11 configuration of the screen background and txt1(NO WAH ACTIVE) color
#define NOWAH_screen_fillscreen TFT_PURPLE
#define NOWAH_screen_txt1_color TFT_RED
#define NOWAH_screen_txt1_BGcolor NOWAH_screen_fillscreen

// YESWAH TOPscreen 11 configuration of the screen background and txt1(WAH AVAILABLE) color
#define YESWAH_screen_fillscreen TFT_PURPLE
#define YESWAH_screen_txt1_color TFT_GREEN
#define YESWAH_screen_txt1_BGcolor YESWAH_screen_fillscreen

// NOLOOPER TOPscreen 12 configuration of the screen background and txt1(NO LOOPER) color
#define NOLOOPER_screen_fillscreen TFT_PURPLE
#define NOLOOPER_screen_txt1_color TFT_RED
#define NOLOOPER_screen_txt1_BGcolor NOLOOPER_screen_fillscreen

// YESLOOPER TOPscreen 12 configuration of the screen background and txt1(LOOPER ACTIVE) color
#define YESLOOPER_screen_fillscreen TFT_PURPLE
#define YESLOOPER_screen_txt1_color TFT_GREEN
#define YESLOOPER_screen_txt1_BGcolor YESLOOPER_screen_fillscreen

// 1 NUMBER screen -> 1 screen configuration of the screen background and txt1(axelman8) and txt2(Number Select) color
#define number_screen_fillscreen TFT_BLACK
#define number_screen_txt1_color TFT_YELLOW
#define number_screen_txt1_BGcolor number_screen_fillscreen
#define number_screen_txt2_color TFT_CYAN
#define number_screen_txt2_BGcolor number_screen_fillscreen
#define number_screen_txt3_color TFT_CYAN
#define number_screen_txt3_BGcolor number_screen_fillscreen

// NUMBERS 0 to 9 screens -> 10 screens configuration of the screen background and text color
#define numberSelect_screen_fillscreen TFT_BLACK
#define numberSelect_screen_txt1_color TFT_YELLOW
#define numberSelect_screen_txt1_BGcolor numberSelect_screen_fillscreen

// AUDITION MODE Screen 13 -> configuration of background and txt1 (audition) and txt2 (mode) color
#define auditionMode_screen_fillscreen TFT_BLACK
#define auditionMode_screen_txt1_color TFT_BLUE
#define auditionMode_screen_txt1_BGcolor auditionMode_screen_fillscreen
#define auditionMode_screen_txt2_color TFT_BLUE
#define auditionMode_screen_txt2_BGcolor auditionMode_screen_fillscreen

// AUDITION MODE Screen 12 -> configuration of background and txt1(select, type) and txt2(tuner) color
#define tuner_screen_fillscreen TFT_BLACK  
#define tuner_screen_txt1_color TFT_CYAN
#define tuner_screen_txt1_BGcolor tuner_screen_fillscreen
#define tuner_screen_txt2_color TFT_YELLOW
#define tuner_screen_txt2_BGcolor tuner_screen_fillscreen


/*=========================================================================================================================*/
/*=========================================================================================================================*/


                            /* ==========================================================
                               ====                                                 =====
                               ====      On this page are all the presetnames       =====
                               ====                                                 =====
                               ====                   from 0 511                    =====
                               ====                                                 =====
                               ====     Paste the info from the Excel page here     =====
                               ====                                                 =====
                               ==========================================================*/                            



/*=========================================================================================================================
       PRESET NAMES
  =========================================================================================================================*/

void preset_Names()
{
  debugln(); debug(" -> Preset names are beeing read");
  switch (PresetNumb)
  {

    // Delete all below and PASTE HERE :) !!

case 0: 
strcpy(PresetName0,("Petrucci REC"));
strcpy(PresetName1,("Petrucci Rig 2020"));
strcpy(PresetName2,("Boogie IIC++"));
strcpy(PresetName3,("JP2C Best Rig"));
strcpy(PresetName4,("JP2C+"));
strcpy(PresetName5,("JohnP MarkIIC+"));
strcpy(PresetName6,("JP's IIC+ v12"));
strcpy(PresetName7,("Mesa MarkIV"));
strcpy(PresetName8,("Mesa TriAxess"));
strcpy(PresetName9,("VidarAus JP2C Rigv5"));

break;

case 10: 
strcpy(PresetName0,("MESA TRIAXIS"));
strcpy(PresetName1,("Mark's Recto TNT"));
strcpy(PresetName2,("Mark's Recto 2"));
strcpy(PresetName3,("Mark Journey Set"));
strcpy(PresetName4,("L.O.G."));
strcpy(PresetName5,("L.O.G. To Rest"));
strcpy(PresetName6,("L.O.G 11th Hour"));
strcpy(PresetName7,("L.O.G 11th Hour"));
strcpy(PresetName8,("Mark Morton Mesa"));
strcpy(PresetName9,("MarkIV_NKD"));

break;

case 20: 
strcpy(PresetName0,("Evailution 1"));
strcpy(PresetName1,("Evailution 2"));
strcpy(PresetName2,("Legator Ninja (Fishman Modern)"));
strcpy(PresetName3,("Legator Ninja (Fishman Modern)"));
strcpy(PresetName4,("Sacrament"));
strcpy(PresetName5,("LAMB OF GOD"));
strcpy(PresetName6,("LAMB OF GOD"));
strcpy(PresetName7,("LAMB OF GOD"));
strcpy(PresetName8,("Blitz III"));
strcpy(PresetName9,("Lonestar rig"));

break;

case 30: 
strcpy(PresetName0,("TM Lukather"));
strcpy(PresetName1,("Farfegnugen"));
strcpy(PresetName2,("Zakk's Marshall #34"));
strcpy(PresetName3,("Two Amps"));
strcpy(PresetName4,("B03 Sleepwalk"));
strcpy(PresetName5,("Chuggg"));
strcpy(PresetName6,("Shiva onthe Rocks"));
strcpy(PresetName7,("5153 Blue"));
strcpy(PresetName8,("GnomeMans Land 2"));
strcpy(PresetName9,("Diezel Herbert"));

break;

case 40: 
strcpy(PresetName0,("Kind of Dream"));
strcpy(PresetName1,("Echo Deva III"));
strcpy(PresetName2,("Life in lockdown"));
strcpy(PresetName3,("Fremen Archon All-in-one"));
strcpy(PresetName4,("SinMix PiVi"));
strcpy(PresetName5,("High Landrons"));
strcpy(PresetName6,("Fender Acoustisonic Strat"));
strcpy(PresetName7,("Lunar Eclipse"));
strcpy(PresetName8,("Diamonique Rain"));
strcpy(PresetName9,("ThemePark"));

break;

case 50: 
strcpy(PresetName0,("LAMB OF GOD"));
strcpy(PresetName1,("DiG"));
strcpy(PresetName2,("LT MK IV Cygnus"));
strcpy(PresetName3,("LT Rack Delays (Filth)"));
strcpy(PresetName4,("LT Rack Delays (Clean)"));
strcpy(PresetName5,("F.A.R.K"));
strcpy(PresetName6,("LT Crunch"));
strcpy(PresetName7,("LT Chunk"));
strcpy(PresetName8,("MCU"));
strcpy(PresetName9,("Rockbone! (mas bueno)"));

break;

case 60: 
strcpy(PresetName0,("Skull Crusher"));
strcpy(PresetName1,("Powerball ENGL AX3 -c"));
strcpy(PresetName2,("Zakk Wylde"));
strcpy(PresetName3,("Vox AC-15W"));
strcpy(PresetName4,("Vox AC30s"));
strcpy(PresetName5,("MoreVox AC30s* v12"));
strcpy(PresetName6,("Hiwatt DR103* v12"));
strcpy(PresetName7,("AmpegSVT-4Guitar* v12"));
strcpy(PresetName8,("RolandJazzChorus* v12"));
strcpy(PresetName9,("==/MARSHALLS\=="));

break;

case 70: 
strcpy(PresetName0,("JTM45Plexi Marshall v12"));
strcpy(PresetName1,("JTM 45 SCoils"));
strcpy(PresetName2,("Plexi 50Watt v12"));
strcpy(PresetName3,("More Plexi 50W"));
strcpy(PresetName4,("MstrVol 2204 50W"));
strcpy(PresetName5,("ClnsOnly Plexi50W v12"));
strcpy(PresetName6,("Plexi 100 Watt v12"));
strcpy(PresetName7,("More Plexi 100W v12"));
strcpy(PresetName8,("1959 SuperLead SLP"));
strcpy(PresetName9,("SuperLead Marshall v12"));

break;

case 80: 
strcpy(PresetName0,("SilverJubilee Marshall v12"));
strcpy(PresetName1,("Brown Sound Plexi v12"));
strcpy(PresetName2,("ClnsOnly 100W Plexi v12"));
strcpy(PresetName3,("JCM 800 Marshall v12"));
strcpy(PresetName4,("SlashGnR AFD100 v12"));
strcpy(PresetName5,("1987X  v12"));
strcpy(PresetName6,("*1987X SCoils v12"));
strcpy(PresetName7,("JVM410H OD1chn v12"));
strcpy(PresetName8,("JVM410H OD2chn v12"));
strcpy(PresetName9,("JVM410HJS (Satch2)"));

break;

case 90: 
strcpy(PresetName0,("=/MESA BOOGIE\="));
strcpy(PresetName1,("2Chn Dual Rectifier v12"));
strcpy(PresetName2,("Orng 3Ch DualRectifier"));
strcpy(PresetName3,("Red3Ch DualRectifier v12"));
strcpy(PresetName4,("Thorendahl DualRectifier v12"));
strcpy(PresetName5,("MarkIIC+ options v12"));
strcpy(PresetName6,("More Mark IIC+ v12"));
strcpy(PresetName7,("MarkIIC++ (Only) v12"));
strcpy(PresetName8,("Mark IV options* v12"));
strcpy(PresetName9,("More Mark IV* v12"));

break;

case 100: 
strcpy(PresetName0,("==/FENDERS\=="));
strcpy(PresetName1,("Texas Lonestar* v12"));
strcpy(PresetName2,("Subway Blues v12"));
strcpy(PresetName3,("Twd Champ* v12"));
strcpy(PresetName4,("Twd Princeton v12"));
strcpy(PresetName5,("Twd Deluxe* v12"));
strcpy(PresetName6,("Mo' Twd Deluxe* v12"));
strcpy(PresetName7,("TwdTwin HiPwr* v12"));
strcpy(PresetName8,("'59 Bassman"));
strcpy(PresetName9,("59 Bassman SCoils"));

break;

case 110: 
strcpy(PresetName0,("15 Spkr Twd v12"));
strcpy(PresetName1,("Cln Twd&Brwn v12"));
strcpy(PresetName2,("Brwn Concert* v12"));
strcpy(PresetName3,("Brwn Super v12"));
strcpy(PresetName4,("Brwn Vibrolux* v12"));
strcpy(PresetName5,("Face Clns SCoil v12"));
strcpy(PresetName6,("Super Reverb v12"));
strcpy(PresetName7,("SuperRvrb SCoils v12"));
strcpy(PresetName8,("Deluxe* v12"));
strcpy(PresetName9,("Deluxe 4 Teles v12"));

break;

case 120: 
strcpy(PresetName0,("15 VibroVerb v12"));
strcpy(PresetName1,("VibroVerb SCoils v12"));
strcpy(PresetName2,("65 Bassman v12"));
strcpy(PresetName3,("65 Bassman SCoils V12"));
strcpy(PresetName4,("BFace Twin* v12"));
strcpy(PresetName5,("*BFaceTwin SCoils v12"));
strcpy(PresetName6,("BF Princeton Rvrb v12"));
strcpy(PresetName7,("MASTER OF PUPPETS V2"));
strcpy(PresetName8,("59 Bassguy"));
strcpy(PresetName9,("65 Bassguy"));

break;

case 130: 
strcpy(PresetName0,("Vibrato Lux"));
strcpy(PresetName1,("Deluxe Verb"));
strcpy(PresetName2,("Double Verb"));
strcpy(PresetName3,("A-Class 15"));
strcpy(PresetName4,("Top Boost"));
strcpy(PresetName5,("Prince Tone"));
strcpy(PresetName6,("Plexi 50W"));
strcpy(PresetName7,("Plexi 100W"));
strcpy(PresetName8,("Brit 800"));
strcpy(PresetName9,("Hipower"));

break;

case 140: 
strcpy(PresetName0,("USA Mk IV"));
strcpy(PresetName1,("USA IIC+"));
strcpy(PresetName2,("Recto 1"));
strcpy(PresetName3,("Recto 2"));
strcpy(PresetName4,("Euro"));
strcpy(PresetName5,("AC-20 Deluxe"));
strcpy(PresetName6,("Shiver"));
strcpy(PresetName7,("Vibrato-King"));
strcpy(PresetName8,("Euro Uber"));
strcpy(PresetName9,("Solo 100"));

break;

case 150: 
strcpy(PresetName0,("Super Verb"));
strcpy(PresetName1,("Friedman BE-100"));
strcpy(PresetName2,("Friedman HBE-100"));
strcpy(PresetName3,("Champlifier"));
strcpy(PresetName4,("Tremolo Deluxe"));
strcpy(PresetName5,("5153"));
strcpy(PresetName6,("Vibrato Deluxe"));
strcpy(PresetName7,("Mr. Z 38"));
strcpy(PresetName8,("Wreckers"));
strcpy(PresetName9,("Angle Severe"));

break;

case 160: 
strcpy(PresetName0,("Spawn Q-Rod OD-1"));
strcpy(PresetName1,("CA3+"));
strcpy(PresetName2,("FAS Lead 1-3"));
strcpy(PresetName3,("Tucana"));
strcpy(PresetName4,("FAS Modern"));
strcpy(PresetName5,("Das Metall"));
strcpy(PresetName6,("ODS-100"));
strcpy(PresetName7,("The Brown Sound"));
strcpy(PresetName8,("Buddah Duomaster"));
strcpy(PresetName9,("Matchbox Chiefman"));

break;

case 170: 
strcpy(PresetName0,("Supertweed"));
strcpy(PresetName1,("Brit JVM OD1"));
strcpy(PresetName2,("Brit JVM OD2"));
strcpy(PresetName3,("Blanknship Leeds"));
strcpy(PresetName4,("Supremo Trem"));
strcpy(PresetName5,("Citrus RV50"));
strcpy(PresetName6,("Carol Ann OD-2"));
strcpy(PresetName7,("JM45"));
strcpy(PresetName8,("Hot Kitty"));
strcpy(PresetName9,("Two-Stone J35"));

break;

case 180: 
strcpy(PresetName0,("Spawn Nitrous"));
strcpy(PresetName1,("Brit Silver"));
strcpy(PresetName2,("Herbie"));
strcpy(PresetName3,("Dweezil's Bassguy"));
strcpy(PresetName4,("Ma the Meatloaf..."));
strcpy(PresetName5,("5F8 Tweed"));
strcpy(PresetName6,("Atomica"));
strcpy(PresetName7,("Deluxe Tweed"));
strcpy(PresetName8,("Dirty Shirley"));
strcpy(PresetName9,("Fox ODS"));

break;

case 190: 
strcpy(PresetName0,("Nuclear Tone"));
strcpy(PresetName1,("6160s"));
strcpy(PresetName2,("Archean"));
strcpy(PresetName3,("Spawn Q-Rod OD-2"));
strcpy(PresetName4,("Wrecked Express"));
strcpy(PresetName5,("Brit Pre"));
strcpy(PresetName6,("Badger 18"));
strcpy(PresetName7,("Brit AFS100"));
strcpy(PresetName8,("Dizzy VH4"));
strcpy(PresetName9,("Bassman About 2 Explode"));

break;

case 200: 
strcpy(PresetName0,("Band Commander"));
strcpy(PresetName1,("ODS-100 HRM"));
strcpy(PresetName2,("Vibrato Verb"));
strcpy(PresetName3,("TX Star"));
strcpy(PresetName4,("Jumped Plexi"));
strcpy(PresetName5,("Studio Leads"));
strcpy(PresetName6,("Dee Cee 30"));
strcpy(PresetName7,("Whole Lotta"));
strcpy(PresetName8,("Fuzz Tweed"));
strcpy(PresetName9,("Hell's Glockenspiels"));

break;

case 210: 
strcpy(PresetName0,("Petrucci Rig"));
strcpy(PresetName1,("Solo 88"));
strcpy(PresetName2,("Comet Concourse"));
strcpy(PresetName3,("Try Axes"));
strcpy(PresetName4,("Cameron CCV"));
strcpy(PresetName5,("Capt Hook"));
strcpy(PresetName6,("JS410"));
strcpy(PresetName7,("Corncob"));
strcpy(PresetName8,("Bludojai"));
strcpy(PresetName9,("JM45 Blues Lead"));

break;

case 220: 
strcpy(PresetName0,("Jr. Blues"));
strcpy(PresetName1,("Triptik"));
strcpy(PresetName2,("FAS Originals"));
strcpy(PresetName3,("EJ Clean"));
strcpy(PresetName4,("Who's Next?"));
strcpy(PresetName5,("Thick and Chunky"));
strcpy(PresetName6,("Tucana II"));
strcpy(PresetName7,("Studio Clean"));
strcpy(PresetName8,("Solo 99"));
strcpy(PresetName9,("Triple Crest"));

break;

case 230: 
strcpy(PresetName0,("Djentlemanly"));
strcpy(PresetName1,("Leon's Djent Bass"));
strcpy(PresetName2,("Citrus A30"));
strcpy(PresetName3,("Ruby Rocket"));
strcpy(PresetName4,("Machine Gun"));
strcpy(PresetName5,("Bogfish"));
strcpy(PresetName6,("Limelight M@"));
strcpy(PresetName7,("Glass Leads"));
strcpy(PresetName8,("Stacked Delays"));
strcpy(PresetName9,("Get Your Kicks"));

break;

case 240: 
strcpy(PresetName0,("Subtle Blues"));
strcpy(PresetName1,("Chainsaw 88"));
strcpy(PresetName2,("Deluxe Tapes"));
strcpy(PresetName3,("Destructive Appetites"));
strcpy(PresetName4,("So Many Roads"));
strcpy(PresetName5,("Tiny Terrier"));
strcpy(PresetName6,("Jim and Leo"));
strcpy(PresetName7,("Cork Sniffers"));
strcpy(PresetName8,("Still Blue"));
strcpy(PresetName9,("MF Euro"));

break;

case 250: 
strcpy(PresetName0,("Rockin' Train"));
strcpy(PresetName1,("Dr-Z's blues"));
strcpy(PresetName2,("Carol-Ann OD2 lead-1"));
strcpy(PresetName3,("Carol-Ann OD2 lead-2"));
strcpy(PresetName4,("Carol-Ann OD2 lead-3"));
strcpy(PresetName5,("Fat Buddah"));
strcpy(PresetName6,("Bright Buddah"));
strcpy(PresetName7,("Bludojai Lead 1"));
strcpy(PresetName8,("Bludojai Lead 2"));
strcpy(PresetName9,("TwoRock torock"));

break;

case 260: 
strcpy(PresetName0,("TwoRock torock II"));
strcpy(PresetName1,("Zen Wreck"));
strcpy(PresetName2,("FAS Wreck"));
strcpy(PresetName3,("What theFuchs isgoin"));
strcpy(PresetName4,("ODS-100 Lead 1"));
strcpy(PresetName5,("ODS-100 Lead 2"));
strcpy(PresetName6,("ODS-100 Lead 3"));
strcpy(PresetName7,("ODS-100 Lead4 JoeB"));
strcpy(PresetName8,("ODS-100 HRM Midlead"));
strcpy(PresetName9,("ODS-100 Ford lead-1"));

break;

case 270: 
strcpy(PresetName0,("ODS-100 Ford lead-2"));
strcpy(PresetName1,("ODS-100 Ford lead-3"));
strcpy(PresetName2,("Dumble and Dumbler"));
strcpy(PresetName3,("Fat ODS-100"));
strcpy(PresetName4,("Fat lead"));
strcpy(PresetName5,("Komet Concorde 1"));
strcpy(PresetName6,("Komet Concorde 2"));
strcpy(PresetName7,("Komet Concorde 3"));
strcpy(PresetName8,("Tucana blues 1"));
strcpy(PresetName9,("Tucana blues 2"));

break;

case 280: 
strcpy(PresetName0,("Hook blues"));
strcpy(PresetName1,("Warm BogFish lead"));
strcpy(PresetName2,("5F1 Tweed EC"));
strcpy(PresetName3,("Blues Jr Fat"));
strcpy(PresetName4,("Texas Blues Lonestar"));
strcpy(PresetName5,("Texas Blues Vibroking"));
strcpy(PresetName6,("Texas Blues VibratoVerb"));
strcpy(PresetName7,("Texas Blues Bandmaster"));
strcpy(PresetName8,("Texas Blues Super Reverb"));
strcpy(PresetName9,("Texas Blues Princeton"));

break;

case 290: 
strcpy(PresetName0,("Texas Blues DrZ"));
strcpy(PresetName1,("Texas Blues Bassman"));
strcpy(PresetName2,("Dirty tweed"));
strcpy(PresetName3,("Andy Little Wing"));
strcpy(PresetName4,("Just one night"));
strcpy(PresetName5,("AC20 crunch"));
strcpy(PresetName6,("AC20 crunch 2"));
strcpy(PresetName7,("AC20 fusion 1"));
strcpy(PresetName8,("AC20 fusion 2"));
strcpy(PresetName9,("AC20 fusion 3"));

break;

case 300: 
strcpy(PresetName0,("Crunchy D30"));
strcpy(PresetName1,("Div13 crunch"));
strcpy(PresetName2,("J.Mayer I"));
strcpy(PresetName3,("J.Mayer II"));
strcpy(PresetName4,("<EMPTY>"));
strcpy(PresetName5,("DJENT La Tempesta"));
strcpy(PresetName6,("Bag Pipes drone"));
strcpy(PresetName7,("Vertigo!"));
strcpy(PresetName8,("Spring in a Cave"));
strcpy(PresetName9,("Dream Sequences"));

break;

case 310: 
strcpy(PresetName0,("DynamoFlanger"));
strcpy(PresetName1,("Stereo Tape Delays"));
strcpy(PresetName2,("Mystic Arps"));
strcpy(PresetName3,("Frenetica"));
strcpy(PresetName4,("Heavenly Echo"));
strcpy(PresetName5,("Trem on the Tail"));
strcpy(PresetName6,("The Abyss"));
strcpy(PresetName7,("Quad Diatonic"));
strcpy(PresetName8,("S/Hip Ahoy"));
strcpy(PresetName9,("Rubber Biscuit"));

break;

case 320: 
strcpy(PresetName0,("Double Diffusor"));
strcpy(PresetName1,("I'm Nationwide"));
strcpy(PresetName2,("Water Colors"));
strcpy(PresetName3,("Meditation Workshop"));
strcpy(PresetName4,("Perceptual Reverb"));
strcpy(PresetName5,("Band Delay Grooves"));
strcpy(PresetName6,("Rainbow Dash"));
strcpy(PresetName7,("Thick Choruses"));
strcpy(PresetName8,("New Jupiter"));
strcpy(PresetName9,("Tracking Ringmods"));

break;

case 330: 
strcpy(PresetName0,("Starship Flanger"));
strcpy(PresetName1,("Undulation"));
strcpy(PresetName2,("Serenity Now!"));
strcpy(PresetName3,("Haunting Echoes"));
strcpy(PresetName4,("Rockabilly HotRod"));
strcpy(PresetName5,("Ambient Swirl"));
strcpy(PresetName6,("6th Stone From the Sun"));
strcpy(PresetName7,("Echoes from God"));
strcpy(PresetName8,("Auto Wah Funk"));
strcpy(PresetName9,("No Quarter"));

break;

case 340: 
strcpy(PresetName0,("Flanging Flankers"));
strcpy(PresetName1,("Wide Chorus"));
strcpy(PresetName2,("Surf's Up"));
strcpy(PresetName3,("Flippin' Switch"));
strcpy(PresetName4,("Ascensions"));
strcpy(PresetName5,("Wandering Delays"));
strcpy(PresetName6,("Heavily Processed"));
strcpy(PresetName7,("Boutique Battle"));
strcpy(PresetName8,("Frogtones Irie"));
strcpy(PresetName9,("Nameless Streets"));

break;

case 350: 
strcpy(PresetName0,("Fat Solo Lead 2"));
strcpy(PresetName1,("Rainy Nights III"));
strcpy(PresetName2,("Crunchy Even in Milk"));
strcpy(PresetName3,("Arpeggiator M@ness (B Min)"));
strcpy(PresetName4,("Class-A Brethren"));
strcpy(PresetName5,("Bond...James Bond"));
strcpy(PresetName6,("Synth Lineup"));
strcpy(PresetName7,("Screaming Plexi 3"));
strcpy(PresetName8,("Bostonian"));
strcpy(PresetName9,("Choral Canyons"));

break;

case 360: 
strcpy(PresetName0,("Touch Phase III"));
strcpy(PresetName1,("8-Plex Golden"));
strcpy(PresetName2,("Disco Clean"));
strcpy(PresetName3,("Pitchmod Pulse"));
strcpy(PresetName4,("Sci-Fi Delays"));
strcpy(PresetName5,("Year of the City 2274"));
strcpy(PresetName6,("PolyOctaveGen Pedal"));
strcpy(PresetName7,("Tape Driver"));
strcpy(PresetName8,("New Atmos"));
strcpy(PresetName9,("Twin Peaks Bari"));

break;

case 370: 
strcpy(PresetName0,("Dual Amp Diatonic"));
strcpy(PresetName1,("Gamelan 2021"));
strcpy(PresetName2,("Horrorfest"));
strcpy(PresetName3,("Wide E-plex 21"));
strcpy(PresetName4,("Funky Synth"));
strcpy(PresetName5,("5-Octave Lead"));
strcpy(PresetName6,("Music Boxes"));
strcpy(PresetName7,("Purple Flanger"));
strcpy(PresetName8,("Mic Pre Slam"));
strcpy(PresetName9,("Great Plains"));

break;

case 380: 
strcpy(PresetName0,("Panner Pedal"));
strcpy(PresetName1,("Feedbacker Pedal"));
strcpy(PresetName2,("Ham & Cheese"));
strcpy(PresetName3,("Triple Filter Funk"));
strcpy(PresetName4,("Overcompressed"));
strcpy(PresetName5,("Floating Swells"));
strcpy(PresetName6,("Raja Drone III"));
strcpy(PresetName7,("Direct Injects"));
strcpy(PresetName8,("One-Note Synthestra"));
strcpy(PresetName9,("By Your Command"));

break;

case 390: 
strcpy(PresetName0,("Brittle Comp Rhythm"));
strcpy(PresetName1,("Ping-Pong Pong-Ping"));
strcpy(PresetName2,("Rotary Scenes"));
strcpy(PresetName3,("New Planets"));
strcpy(PresetName4,("Home World"));
strcpy(PresetName5,("Scintilations"));
strcpy(PresetName6,("Proggy Plex Filter"));
strcpy(PresetName7,("Traffic Jam"));
strcpy(PresetName8,("Katie's Song"));
strcpy(PresetName9,("Detuned Plexi"));

break;

case 400: 
strcpy(PresetName0,("Bouncing Echo"));
strcpy(PresetName1,("Bad"));
strcpy(PresetName2,("8-Voice Chorus"));
strcpy(PresetName3,("Dual Clean"));
strcpy(PresetName4,("Seq and LFO Wahs"));
strcpy(PresetName5,("No-Synth Synth"));
strcpy(PresetName6,("New Country"));
strcpy(PresetName7,("Ten-Tap Alpha"));
strcpy(PresetName8,("Drop Tune"));
strcpy(PresetName9,("Pre+Post Tape Pedals"));

break;

case 410: 
strcpy(PresetName0,("In a Fixx"));
strcpy(PresetName1,("Uber Chuggas"));
strcpy(PresetName2,("L.A. Session Clean"));
strcpy(PresetName3,("'63 Tube Spring Verb"));
strcpy(PresetName4,("Yngwie!"));
strcpy(PresetName5,("Rhythm Tap"));
strcpy(PresetName6,("Run like Heck"));
strcpy(PresetName7,("1967 All Over Again"));
strcpy(PresetName8,("M@-o-spheres"));
strcpy(PresetName9,("Rotary Tapeverb"));

break;

case 420: 
strcpy(PresetName0,("Melancholy"));
strcpy(PresetName1,("Shifted Band Delay"));
strcpy(PresetName2,("Jeff & Jan"));
strcpy(PresetName3,("Later Eddie"));
strcpy(PresetName4,("PCM70 Hall"));
strcpy(PresetName5,("Mr.Gilmour Lead"));
strcpy(PresetName6,("Soundtrack"));
strcpy(PresetName7,("Plate Collection"));
strcpy(PresetName8,("Juicy Lead"));
strcpy(PresetName9,("Ganymede 9"));

break;

case 430: 
strcpy(PresetName0,("Forty Miles"));
strcpy(PresetName1,("Freeway Jam"));
strcpy(PresetName2,("Beef Supreme"));
strcpy(PresetName3,("Shoegaze Fuzz"));
strcpy(PresetName4,("Pedalboard Deluxe"));
strcpy(PresetName5,("Clockwork Banana"));
strcpy(PresetName6,("Chugnuts"));
strcpy(PresetName7,("East Wes"));
strcpy(PresetName8,("Bayou Country"));
strcpy(PresetName9,("Prometheus WV"));

break;

case 440: 
strcpy(PresetName0,("Ned Beatty"));
strcpy(PresetName1,("Non-Lin Verbs"));
strcpy(PresetName2,("A Kind of Dream"));
strcpy(PresetName3,("Spandex & Hairspray"));
strcpy(PresetName4,("Mutatron Bye-Phaser"));
strcpy(PresetName5,("Avant Jazz"));
strcpy(PresetName6,("Shiva on the Rocks"));
strcpy(PresetName7,("Heavy Harmonies"));
strcpy(PresetName8,("Quad Series Delay"));
strcpy(PresetName9,("Stone in Love"));

break;

case 450: 
strcpy(PresetName0,("CE-1 Chorus/Vibe"));
strcpy(PresetName1,("Fifth Tribe"));
strcpy(PresetName2,("Synchrostep Flanger"));
strcpy(PresetName3,("Circuitbenders"));
strcpy(PresetName4,("Stereo Death Fuzz"));
strcpy(PresetName5,("Forlorn"));
strcpy(PresetName6,("Ambient Guitar"));
strcpy(PresetName7,("Eruption"));
strcpy(PresetName8,("Thrilling Chilling"));
strcpy(PresetName9,("Mr.Floyd"));

break;

case 460: 
strcpy(PresetName0,("Men In The Box"));
strcpy(PresetName1,("Barracuda"));
strcpy(PresetName2,("Solar Eclipses"));
strcpy(PresetName3,("Comb Delays"));
strcpy(PresetName4,("Time After Time"));
strcpy(PresetName5,("Capricorn 3"));
strcpy(PresetName6,("How Soon is Soon?"));
strcpy(PresetName7,("Circular Delay"));
strcpy(PresetName8,("Blitz III"));
strcpy(PresetName9,("Final Frontier 3"));

break;

case 470: 
strcpy(PresetName0,("Dynafilter Dual Mod"));
strcpy(PresetName1,("Pitch Follower"));
strcpy(PresetName2,("Fiiifths in Space"));
strcpy(PresetName3,("Sea of Tranquility"));
strcpy(PresetName4,("Corbomite Maneuver"));
strcpy(PresetName5,("The Infield"));
strcpy(PresetName6,("Polychromatic Shifter"));
strcpy(PresetName7,("Clocktower"));
strcpy(PresetName8,("Plex Verb 8x2"));
strcpy(PresetName9,("Night Creatures"));

break;

case 480: 
strcpy(PresetName0,("Reverb DynaMix"));
strcpy(PresetName1,("Tumbleweeds"));
strcpy(PresetName2,("W@rped Vinyl 3.0"));
strcpy(PresetName3,("1987 Clean"));
strcpy(PresetName4,("Scene Control Delay"));
strcpy(PresetName5,("Sultans"));
strcpy(PresetName6,("RockMeOn Clean"));
strcpy(PresetName7,("High Landrons"));
strcpy(PresetName8,("Lunar Eclipses"));
strcpy(PresetName9,("Crystal Scions"));

break;

case 490: 
strcpy(PresetName0,("Jeff Gets Ready"));
strcpy(PresetName1,("FilteRING Funk"));
strcpy(PresetName2,("Fly By Night"));
strcpy(PresetName3,("Reich-Like"));
strcpy(PresetName4,("Echo Deva III"));
strcpy(PresetName5,("Cliffs of Dover"));
strcpy(PresetName6,("Diamonique Rain"));
strcpy(PresetName7,("Compurhythm"));
strcpy(PresetName8,("Gnome Man's Lands"));
strcpy(PresetName9,("Stevens Rebel Yell"));

break;

case 500: 
strcpy(PresetName0,("Hevy Devy"));
strcpy(PresetName1,("Pete-a-Palooza"));
strcpy(PresetName2,("Larry Mitchell NY Steak"));
strcpy(PresetName3,("Mark's Day's Recto Cygnus"));
strcpy(PresetName4,("Fremen's Drones of Arrakis"));
strcpy(PresetName5,("Brett's Party Pack"));
strcpy(PresetName6,("Brett's Party Pack 2"));
strcpy(PresetName7,("Austin Buddy's XTCs"));
strcpy(PresetName8,("Leon's Live"));
strcpy(PresetName9,("Out1:FOH Out2:Cab"));

break;

case 510: 
strcpy(PresetName0,("Amp Match Template"));
strcpy(PresetName1,("BYPASS"));
strcpy(PresetName2,(" EMPTY PRESET"));
strcpy(PresetName3,(" EMPTY PRESET"));
strcpy(PresetName4,(" EMPTY PRESET"));
strcpy(PresetName5,(" EMPTY PRESET"));
strcpy(PresetName6,(" EMPTY PRESET"));
strcpy(PresetName7,(" EMPTY PRESET"));
strcpy(PresetName8,(" EMPTY PRESET"));
strcpy(PresetName9,(" EMPTY PRESET"));

break;

 }
}

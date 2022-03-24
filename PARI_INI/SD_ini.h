#pragma once


#include <variables_ini.h>
#include <Arduino.h>


#if DEBUG == DEBUG1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#else
#define debug(x)
#define debugln(x)
#endif


/*=======================================================================================================================================


 ██████╗ ██████╗ ███╗   ██╗███████╗██╗ ██████╗        ██╗███╗   ██╗██╗    ███████╗███████╗████████╗████████╗██╗███╗   ██╗ ██████╗ ███████╗
██╔════╝██╔═══██╗████╗  ██║██╔════╝██║██╔════╝        ██║████╗  ██║██║    ██╔════╝██╔════╝╚══██╔══╝╚══██╔══╝██║████╗  ██║██╔════╝ ██╔════╝
██║     ██║   ██║██╔██╗ ██║█████╗  ██║██║  ███╗       ██║██╔██╗ ██║██║    ███████╗█████╗     ██║      ██║   ██║██╔██╗ ██║██║  ███╗███████╗
██║     ██║   ██║██║╚██╗██║██╔══╝  ██║██║   ██║       ██║██║╚██╗██║██║    ╚════██║██╔══╝     ██║      ██║   ██║██║╚██╗██║██║   ██║╚════██║
╚██████╗╚██████╔╝██║ ╚████║██║     ██║╚██████╔╝    ██╗██║██║ ╚████║██║    ███████║███████╗   ██║      ██║   ██║██║ ╚████║╚██████╔╝███████║
 ╚═════╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝     ╚═╝ ╚═════╝     ╚═╝╚═╝╚═╝  ╚═══╝╚═╝    ╚══════╝╚══════╝   ╚═╝      ╚═╝   ╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚══════╝

========================================================================================================================================*/

/*

On this page you have controll over your setup.  
If any update will be pushed for the software,  this will not effect your personal settings like:

* Screen definitions
* Screen layout 
* Screen layout coloring per screen


If you want to change anything to your personal settings,  do it in this library tab.
Just edit and save and then flash the program to the arduino

*/


/*=======================================================================================================================================*/
//    SERIAL AND DEBUGGER
/*=======================================================================================================================================*/

// Using the Serial DEBUGGER |  ON = DEBUG1  |  OFF = DEBUG0 
#define DEBUG DEBUG0

/*========================================================================================================================================*/
//    SYSTEM SETTINGS
/*========================================================================================================================================*/

#define MIDICHAN 1 
#define TAP_TEMPO_LED_DURATION 100
#define SceneSelect_CC 34
#define NUM_SCENES 8
#define NUM_PRESET 10

/*=======================================================================================================================================*/
//    SHOW TUNER ON  SCREEN 8  
/*=======================================================================================================================================*/

//bool tunerScreen8 = false;
bool tunerScreen8 = true;

//Tuner is CIRCLE or PYRAMID
bool tunerScreen8_Circle = false; 
 

/*=======================================================================================================================================*/
//    SHOW FLASH TAP TEMPO ON SCREEN 14  
/*=======================================================================================================================================*/

bool flashScreen14 = true;    // true  = YES show TAP TEMPO flash in screen 14. NO  show TAP TEMPO Flash LED on pin 29 
                              // false = NO  show TAP TEMPO flash in screen 14. YES show TAP TEMPO Flash LED on pin 29    

// Only works if flashScreen14 = true;
bool tempoflash_bar = false;  // true  = show   90x30px | single BAR on top of screen 14
                              // false = show   30x20px | 4 NOTES on top of screen 14


/*=======================================================================================================================================*/
//    Various variables with non changing values
/*=======================================================================================================================================*/

#define PNtxtHeight 100

/* ======================================================================================================================================= 



                           HERE ARE THE SCREEN AND BUTTON NUMBERS.  EACH PAGE HAS THE SAME SETUP
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

//SWITCH ONLY
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

//SWITCH ONLY
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

//SWITCH ONLY
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

//SWITCH ONLY
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

//SWITCH ONLY
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

//SWITCH ONLY
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


// ****************************************
// NEW ADDED on 24-3-2022

//Choose color of scene active bezel
#define sceneStyle_ACTIVEbezel TFT_GREEN

// ****************************************


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
#define sceneStyle0_fillscreen TFT_PURPLE

// ALL SCENE screen color  txt1 and txt2 = number  
#define sceneStyle1_txt1_color TFT_YELLOW
#define sceneStyle1_txt1_BGcolor sceneStyle0_fillscreen
#define sceneStyle1_txt2_color TFT_YELLOW
#define sceneStyle1_txt2_BGcolor sceneStyle0_fillscreen

//txt1 and txt2 = scenename text
#define sceneStyle2_txt1_color TFT_WHITE
#define sceneStyle2_txt1_BGcolor sceneStyle0_fillscreen
#define sceneStyle2_txt2_color TFT_WHITE
#define sceneStyle2_txt2_BGcolor sceneStyle0_fillscreen

#define sceneStyle3_txt1_color TFT_WHITE
#define sceneStyle3_txt1_BGcolor sceneStyle0_fillscreen

#define sceneStyle4_txt1_color TFT_YELLOW 
#define sceneStyle4_txt1_BGcolor sceneStyle0_fillscreen

/*=======================================================================================================================================*/

// PRESET DOWN screen (Screen 5) ->  1 screen configuration of the screen background and txt1(number) and txt2(name) color
#define presetDown_screen_fillscreen TFT_BLACK
#define presetDown_screen_txt1_color TFT_YELLOW
#define presetDown_screen_txt1_BGcolor presetDown_screen_fillscreen
#define presetDown_screen_txt2_color TFT_YELLOW
#define presetDown_screen_txt2_BGcolor presetDown_screen_fillscreen

// PRESET UP screen (Screen 10) ->  1 screen configuration of the screen background and txt1(number) and txt2(name) color
#define presetUp_screen_fillscreen TFT_BLACK
#define presetUp_screen_txt1_color TFT_YELLOW
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

//Not active PRESET number text color settings  //All preset screens number text 
#define presetNumberStyle1_fillscreen TFT_BLACK
#define presetNumberStyle1_txt1_color TFT_YELLOW
#define presetNumberStyle1_txt1_BGcolor presetNumberStyle1_fillscreen

//PRESET name text color settings              //All preset screens number text 
#define presetNameStyle1_txt1_color TFT_CYAN
#define presetNameStyle1_txt1_BGcolor presetNumberStyle1_fillscreen

//Active preset settings text color settings
#define presetNumberStyle2_fillscreen TFT_BLACK
#define presetNumberStyle2_txt1_color TFT_YELLOW
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
#define screen13Style_txt1_color TFT_CYAN
#define screen13Style_txt1_BGcolor TFT_BLUE //screen13Style_fillscreen
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
#define effect_screen_fillscreen TFT_BLACK
#define effect_screen_txt1_color TFT_CYAN
#define effect_screen_txt1_BGcolor effect_screen_fillscreen
#define effect_screen_txt2_color TFT_CYAN
#define effect_screen_txt2_BGcolor effect_screen_fillscreen

// AMP ABCD screen -> 1 screen configuration of the screen background and txt1(AMP/CAB) and txt2(ABCD) color
#define ampABCD_screen_fillscreen TFT_BLACK
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
#define tapTempo_screen_flash_color1 TFT_PURPLE    // this is the color of the flash rectangle fillment
#define tapTempo_screen_sprite_color TFT_WHITE     // this is the color of the flash rectangle fillment


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
#define NOWAH_screen_fillscreen TFT_BLACK
#define NOWAH_screen_txt1_color TFT_RED
#define NOWAH_screen_txt1_BGcolor NOWAH_screen_fillscreen

// YESWAH TOPscreen 11 configuration of the screen background and txt1(WAH AVAILABLE) color
#define YESWAH_screen_fillscreen TFT_BLACK
#define YESWAH_screen_txt1_color TFT_GREEN
#define YESWAH_screen_txt1_BGcolor YESWAH_screen_fillscreen

// NOLOOPER TOPscreen 12 configuration of the screen background and txt1(NO LOOPER) color
#define NOLOOPER_screen_fillscreen TFT_BLACK
#define NOLOOPER_screen_txt1_color TFT_RED
#define NOLOOPER_screen_txt1_BGcolor NOLOOPER_screen_fillscreen

// YESLOOPER TOPscreen 12 configuration of the screen background and txt1(LOOPER ACTIVE) color
#define YESLOOPER_screen_fillscreen TFT_BLACK
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

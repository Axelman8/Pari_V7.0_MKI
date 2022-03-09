#pragma once

#include <MIDI.h>
#include "switch_PageSettings.h"
#include "variables.h"
#include <SD_ini.h>

/*======================================================================================================================================= 
                 _____ _____                               _                    _       _     _           
                / ____|  __ \                             | |                  (_)     | |   | |          
               | (___ | |  | |  ______    ___ __ _ _ __ __| |  __   ____ _ _ __ _  __ _| |__ | | ___  ___ 
                \___ \| |  | | |______|  / __/ _` | '__/ _` |  \ \ / / _` | '__| |/ _` | '_ \| |/ _ \/ __|
                ____) | |__| |          | (_| (_| | | | (_| |   \ V / (_| | |  | | (_| | |_) | |  __/\__ \
               |_____/|_____/            \___\__,_|_|  \__,_|    \_/ \__,_|_|  |_|\__,_|_.__/|_|\___||___/

======================================================================================================================================= 

/*=======================================================================================================================================*/
//    SERIAL DEBUGGER
/*=======================================================================================================================================*/

// Serial DEBUGGER |  ON = DEBUG1  |  OFF = DEBUG0 
#define DEBUG DEBUG0

#define midichannelSet 1
#define serial Serial1


//MIDI_CREATE_INSTANCE(Type, SerialPort, Name)
MIDI_CREATE_INSTANCE(HardwareSerial, serial, MIDI);

/*===========================================================================================================================
     SYSTEM SETTINGS
  ===========================================================================================================================*/

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
//    PEDDLEBOARD CONFIG WITH 15 OR 18 BUTTONS 
/*=======================================================================================================================================*/

byte switches[18] = { SWITCH1, SWITCH2, SWITCH3, SWITCH4, SWITCH5, SWITCH6, SWITCH7, SWITCH8, SWITCH9,  
                      SWITCH10,SWITCH11, SWITCH12, SWITCH13, SWITCH14, SWITCH15, SWITCH16, SWITCH17, SWITCH18};
byte switchState[18] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};

//byte switches[15] = { SWITCH1, SWITCH2, SWITCH3, SWITCH4, SWITCH5, SWITCH6, SWITCH7, SWITCH8,  
//                      SWITCH9, SWITCH10, SWITCH11, SWITCH12, SWITCH13, SWITCH14, SWITCH15};    
//byte switchState[15] = { HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};


/*=======================================================================================================================================*/
//    Various variables with non changing values
/*=======================================================================================================================================*/

#define PNtxtHeight 100

/*=======================================================================================================================================*/
//    END
/*=======================================================================================================================================*/

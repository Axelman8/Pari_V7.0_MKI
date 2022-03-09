#pragma once

/*=======================================================================================================================================*/
/*

          _          _   _  ____ _______        _                            
         | |        | \ | |/ __ \__   __|      | |                           
       __| | ___    |  \| | |  | | | |      ___| |__   __ _ _ __   __ _  ___ 
      / _` |/ _ \   | . ` | |  | | | |     / __| '_ \ / _` | '_ \ / _` |/ _ \
     | (_| | (_) |  | |\  | |__| | | |    | (__| | | | (_| | | | | (_| |  __/
      \__,_|\___/   |_| \_|\____/  |_|     \___|_| |_|\__,_|_| |_|\__, |\___|
                                                                   __/ |     
                                                                  |___/      


 =========================   -  Include library's  -  ==============================*/
#include <MIDI.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h> // include i/o class header
#include <TFT_eSPI.h>
#include <SPI.h>
#include <DS3231.h>

/*===================================================================================*/

#if DEBUG == DEBUG1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#else
#define debug(x)
#define debugln(x)
#endif


/*===================================================================================*/

/* -- Time clock -- */
DS3231  rtc(70, 71);
Time t;

/* -- TFT setting -- */
TFT_eSPI tft = TFT_eSPI(); 

/* -- 16*2 lcd -- */
hd44780_I2Cexp lcd; 

char page[] = "Axelman8";

AxeSystem Axe;
Tempo tempo;
Timer timer;

/*===================================================================================*/

//RAM usage shown in the serial monitor
unsigned long previousMillisStatePrint;
const unsigned long WaitingTimeStatePrint = 1000;
uint32_t MaxUsedHeapRAM;
uint32_t MaxUsedStackRAM;
uint32_t MaxUsedStaticRAM;
uint32_t MinfreeRAM;
extern char _end;
extern "C" char* sbrk(int i);
char* ramstart = (char*)0x20070000;
char* ramend = (char*)0x20088000;


// ===========   ==== ===    VARIABLES   === ====  ====================================

char active_PresetName[33],Preset_Name[33],previousPresetName[33],nextPresetName[33], PresetName0[33], PresetName1[33], PresetName2[33], 
     PresetName3[33], PresetName4[33], PresetName5[33], PresetName6[33], PresetName7[33], PresetName8[33], PresetName9[33];
char Preset_name[] = "Axelman8";
char tuner_type[] = " CIRCLE ";

//=====  Scene name alignment management  ========
//scenenames per row on tft-screen
char 
SCE11[16],SCE12[16],SCE13[16],
SCE21[16],SCE22[16],SCE23[16],
SCE31[16],SCE32[16],SCE33[16],
SCE41[16],SCE42[16],SCE43[16],
SCE51[16],SCE52[16],SCE53[16],
SCE61[16],SCE62[16],SCE63[16],
SCE71[16],SCE72[16],SCE73[16],
SCE81[16],SCE82[16],SCE83[16],
PRE11[32],PRE12[32],PRE13[32];


//Length of scenenames per row per scene
String stringScene;
String stringPreset;


byte 
L11,L12,L13,
L21,L22,L23,
L31,L32,L33,
L41,L42,L43,
L51,L52,L53,
L61,L62,L63,
L71,L72,L73,
L81,L82,L83;

byte P11,P12,P13;
byte Cursor;
byte PNtxtWidth = 0;

//extracted word from the string max 4 words
String str1,str2,str3;
String pre1,pre2,pre3;
String CAB;

//extracted rows from the string | 1 row per word.
byte row1,row2,row3;
byte prow1,prow2,prow3;


/*===================================================================================*/

int counter;
int PresetNumb;     // Initial preset number for preset selection (first one of the ten)
int Preset_Number; // This is presetnumber conversion for all 10 presetnumbers
int CurPreset;      // current preset that is selected from preset up/down or bank up/down
int active_Preset;  // setting the AxeFX active presetnumber

int previousPreset;
int previousPresetnr;
int nextPreset;
int nextPresetnr;
int maxPreset = 511;

//numbers selection for choosing your preset with a number:
byte stringLength;
byte inputNumber;
byte n1;
byte n2;
int  n3;  // > 255, byte is not possible
int  n4;  // > 255, byte is not possible
byte Counter;
byte sceneNumber;
byte loopPreset;


byte  effect17, effect18, effect19,     // effects 17-19 used for "AMP CAB abcd" settings
      thisEffect, effect1, effect2, effect3, effect4, effect5, effect6, effect7,effect8, effect9, effect10, //effect 1-10 used for effect settings on screen 1-10
      effect11, effect12, effect13, effect14,effect15, effect16;   // effects 1-10 and 11-16 are used for the LOOPER and WAH available function
      
byte active_Scene;  // active scene number
byte effectindex;
byte currentSwitch = 0;
byte currentEffect = 0;
byte changeCurrentEffect = 0;

// TAP-TEMPO
byte tapTempo;   // Used for setting tap tempo with numbers
byte flashhight_tempo_Text; // 
byte tempo_Counter = 0; // For the "4 balls" tempo sprite


bool tapSwitch;
bool getScenes;
bool effectCycle;
bool auditionMode;
bool looperActive;
bool wahActive;
bool AMP_abcdselected = false;

String channel = "X";

unsigned long lastMillis;

/*=======================================================================================================================================
                  controller buildup  buttons and screens
          
                                     - TOP -              
               -------------------------------------------              
               PIN screen     48 | 47 | 44 | 45 | 41 | lcd
              *switch nr      11 | 12 | 13 | 14 | 15 | 18        
               PIN switch     27 | 26 | 23 | 24 | 22 | 32
               ------------------+----+----+----+----+----       
               PIN screen     43 | 37 | 35 | 33 | 49 | 
              *switch nr      06 | 07 | 08 | 09 | 10 | 17        
               PIN switch     9  | 11 | 12 | 13 | 28 | 31
               ------------------+----+----+----+----+----       
               PIN screen     34 | 36 | 40 | 42 | 46 | 
              *switch nr      01 | 02 | 03 | 04 | 05 | 16        
               PIN switch     3  | 5  | 6  | 7  | 25 | 30
               -------------------------------------------       
                                   - BOTTOM -                    

             
               16 x 2 lcd =    SDA  pin -> 20
                               SCL  pin -> 21
               led =                pin -> 29
               DS3231:         SDA1 pin -> 70
                               SCL1 pin -> 71

======================================================================================================================================= */
byte SWITCH;  //universal name that gets assigned with a SWITCH in a loop
byte CS;      //universal name that gets assigned with a CS*NUMBER* in a loop

#define M_SIZE 1
#define SWITCH1 3
#define SWITCH2 5
#define SWITCH3 6
#define SWITCH4 7
#define SWITCH5 25
#define SWITCH6 9
#define SWITCH7 11
#define SWITCH8 12
#define SWITCH9 13
#define SWITCH10 28
#define SWITCH11 27
#define SWITCH12 26
#define SWITCH13 23
#define SWITCH14 24
#define SWITCH15 22

#define SWITCH16 30
#define SWITCH17 31
#define SWITCH18 32

    

//Screens pinnumbers with CS number:
#define CS1 34
#define CS2 36
#define CS3 40
#define CS4 42
#define CS5 46
#define CS6 43
#define CS7 37
#define CS8 35
#define CS9 33
#define CS10 49
#define CS11 48
#define CS12 47
#define CS13 44
#define CS14 45
#define CS15 41

/*===================================================================================*/
/*Axelman8*/

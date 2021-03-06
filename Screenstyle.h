#pragma once


/*===========================================   -  Include library's  -  ================================================*/
#include <SD_ini.h>
#include "preset_range.h"

/*========================================================================================================================*/

/*=========================================================
    Serial monitor text: RAM MEMORY CALCULATION   
  =========================================================*/

void serialprint_memory_info() //Serial monitor text: RAM MEMORY CALCULATION 
{
  debugln();debugln(); 
  debugln(" =======================");
  debug(F(" -->> Free RAM = "));   //F function does the same and is now a built in library, in IDE > 1.0.0
  debugln(freeMemory());
  debugln(" =======================");  // print how much RAM is available in bytes.
}

/*=========================================================
    16*2 LCD text: RAM MEMORY CALCULATION   
  =========================================================*/
void availablememory()
{
    lcd.setCursor(0, 1); lcd.print("Free RAM: "); lcd.print(freeMemory()); lcd.print(" ");
}

/*=========================================================
    16*2 LCD text: DIGITAL CLOCK SETTINGS  
  =========================================================*/
void digitalClockDisplay()
{
  // digital clock display of the time
  if (millis() - lastMillis >= 1 * 1 * 1000UL)
  {
    lastMillis = millis();  //get ready for the next iteration
    lcd.setCursor(0, 0); lcd.print("    ");  lcd.print(rtc.getTimeStr()); lcd.print("     ");     
    if (strcmp(page, "numbers") != 0)
    {
    availablememory();
    }
  }
}

/*===========================================================================================================================
     16*2 LCD BUILT TEXT on screen         
  ===========================================================================================================================*/

void scene_LCD_text()
{
  //lcd.clear();   //lcd.begin(16, 2);  lcd.setCursor(0, 0); lcd.print("ACT PRESET: "); lcd.print(active_Preset);
  availablememory(); digitalClockDisplay();
  }
  
void preset_LCD_text()
{
  //lcd.clear(); //lcd.begin(16, 2);  lcd.setCursor(0, 0); lcd.print("ACT PRESET: "); lcd.print(CurPreset);
  availablememory(); digitalClockDisplay();  
  }
  
void effect_LCD_text()
{
  //lcd.clear(); 
  availablememory(); digitalClockDisplay();
  }
  
void ampabcd_LCD_text()
{
  //lcd.clear(); //lcd.setCursor(0, 0); lcd.print("Sel. AMP/CAB 1st");
  availablememory(); digitalClockDisplay();
  }


void bankDown_LCD_text()
{ 
  //lcd.clear(); //lcd.setCursor(0, 0); lcd.print("Sel BANK: "); lcd.print(PresetNumb); lcd.print("-"); lcd.print(PresetNumb - 10);
  availablememory(); digitalClockDisplay();
}


void bankUp_LCD_text()
{ 
  //lcd.clear(); //lcd.setCursor(0, 0); lcd.print("Sel BANK: "); lcd.print(PresetNumb); lcd.print("-"); lcd.print(PresetNumb + 10);
  availablememory(); digitalClockDisplay();
}

void auditionmode_LCD_text()
{
  //lcd.clear(); //lcd.clear(); lcd.setCursor(0, 0); lcd.print("AUDITION MODE ON");
  availablememory(); digitalClockDisplay();
  }



/*===========================================================================================================================
       SCREENS BUILT TEXT and COLOR ADD-ONS 
  ===========================================================================================================================*/

void scene_ACTIVEbezel()  // for scenes
{
   tft.drawLine(0, 99, 160, 99, sceneStyle_ACTIVEbezel);  // draw single line looks nice
   tft.drawRect(0, 0, 160, 128, sceneStyle_ACTIVEbezel);  // Draw bezel line
}

void scene_notACTIVEbezel()  // for scenes
{
   tft.drawLine(0, 99, 160, 99, sceneStyle0_fillscreen); // draw single line looks nice
   tft.drawRect(0, 0, 160, 128, sceneStyle0_fillscreen); // Draw bezel line
}


void amp_abcd_GREENbezel() // for amp_abcd settings
{
   tft.drawLine(0, 104, 160, 104, TFT_GREEN);  // draw single line looks nice
   tft.drawRect(0, 0, 160, 128, ST7735_GREEN); // Draw bezel line
}

void amp_abcd_REDbezel()    // for amp_abcd settings
{
   tft.drawLine(0, 104, 160, 104, TFT_RED);   // draw single line looks nice
   tft.drawRect(0, 0, 160, 128, ST7735_RED);     // Draw bezel line 
}

/*================================================================================================================================
      SCREEN TEXT and COLOR styling settings 
  ================================================================================================================================*/

void bootupStyle1()
{
  tft.fillScreen(bootupStyle1_fillscreen);
  tft.setTextColor(bootupStyle1_txt1_color, bootupStyle1_fillscreen);
  tft.setTextSize(20);  tft.setCursor(60, 40);
  }
void bootupStyle2()
{
  tft.fillScreen(bootupStyle2_fillscreen);
  tft.setTextColor(bootupStyle2_txt1_color, bootupStyle2_fillscreen);
  tft.setTextSize(20);  tft.setCursor(60, 40);
}

void bootupStyle3()
{
  tft.fillScreen(bootupStyle3_fillscreen);
  tft.setTextColor(bootupStyle3_txt1_color, bootupStyle3_fillscreen);
  tft.setTextSize(20);  tft.setCursor(60, 40);
}

void bootupStyle4()
{
  tft.fillScreen(bootupStyle4_fillscreen);
  tft.setTextColor(bootupStyle4_txt1_color, bootupStyle4_fillscreen);
  tft.setTextSize(20);  tft.setCursor(60, 40);
}

void bootupStyle5()
{
  tft.fillScreen(bootupStyle5_fillscreen);
  tft.setTextColor(bootupStyle5_txt1_color, bootupStyle5_fillscreen);
  tft.setTextSize(8);  tft.setCursor(40, 40);
}

void tunerscreenStyle1()
{
tft.fillScreen(TFT_ORANGE);
tft.setTextColor(TFT_BLACK);  
tft.setTextSize(20);  tft.setCursor(60, 40);  
}

/*===========================================================================================================================
    SCENE STYLE
  ===========================================================================================================================*/ 

void sceneText() // this one holds space for text...  There whas "SCENES" here
{ tft.println("        "); }

void sceneCursor1()
{ tft.setTextSize(4); tft.setCursor(139, 100); }  

void sceneCursor2()
{ tft.setTextSize(4); tft.setCursor(1, 100); }  


void activesceneStyle1() // buildup for active scene screen
{ tft.setTextColor(activesceneStyle1_txt1_color, activesceneStyle1_txt1_BGcolor);  sceneCursor2();  sceneText();  sceneCursor1(); }


void sceneStyle0() // buildup scenes for all screens
{ tft.setTextWrap(false); tft.fillScreen(sceneStyle0_fillscreen); /*tft.setTextColor(TFT_YELLOW); sceneCursor2();  sceneText();*/}


void sceneStyle1() //buildup scenenumber for all screens
{ sceneCursor1(); 
  tft.setTextColor(sceneStyle1_txt1_color, sceneStyle1_txt1_BGcolor); 
  tft.setTextColor(sceneStyle1_txt2_color, sceneStyle1_txt2_BGcolor);}  

void sceneStyle2()
{ tft.setTextSize(3); tft.setCursor(5, 10); 
  tft.setTextColor(sceneStyle2_txt1_color, sceneStyle2_txt1_BGcolor);
  tft.setTextColor(sceneStyle2_txt2_color, sceneStyle2_txt2_BGcolor);} 

void sceneStyle3()
{  tft.setTextSize(3); tft.setTextColor(sceneStyle3_txt1_color, sceneStyle3_txt1_BGcolor);}       
  
void sceneStyle4()
{  tft.setTextColor(sceneStyle4_txt1_color, sceneStyle4_txt1_BGcolor); sceneCursor2();  sceneText();}   


void screen13Style()
{
  tft.fillScreen(screen13Style_fillscreen);
  tft.setTextColor(screen13Style_txt1_color,screen13Style_fillscreen);
  tft.setTextSize(6); tft.setCursor(Cursor, 0);
  tft.println("         ");
  tft.setTextSize(6); tft.setCursor(Cursor, 0);
  tft.setTextColor(screen13Style_txt1_color,screen13Style_fillscreen); 
  }

/*===========================================================================================================================
    PRESET UP/DOWN STYLE
  ===========================================================================================================================*/ 
void presetDown_Style()
{
  tft.fillScreen(presetDown_screen_fillscreen);
  tft.setTextColor(presetDown_screen_txt1_color,presetDown_screen_txt1_BGcolor);
  if (previousPreset < 10)
  { Cursor = 65;  }
  else if ((previousPreset >= 10) && (previousPreset < 100))
  { Cursor = 50;  }
  else if ((previousPreset >= 100) && (previousPreset < 1000))
  { Cursor = 29;  } 
  tft.setTextSize(6); tft.setCursor(Cursor, 2);
}

void presetDown_Style1()
{ tft.setTextSize(2);  tft.setCursor(2, 60); tft.setTextColor(presetDown_screen_txt2_color,presetDown_screen_txt2_BGcolor);} 


void presetUp_Style()
{
  tft.fillScreen(presetUp_screen_fillscreen);
  tft.setTextColor(presetUp_screen_txt1_color,presetUp_screen_txt1_BGcolor);
  if (nextPreset < 10)
  { Cursor = 65;  }
  else if ((nextPreset >= 10) && (nextPreset < 100))
  { Cursor = 50;  }
  else if ((nextPreset >= 100) && (nextPreset < 1000))
  { Cursor = 29;  }
  tft.setTextSize(6); tft.setCursor(Cursor, 2);
}

void presetUp_Style1()
{ tft.setTextSize(2);  tft.setCursor(2, 60); tft.setTextColor(presetUp_screen_txt2_color,presetUp_screen_txt2_BGcolor);} 

/*===========================================================================================================================
    PRESET STYLE
  ===========================================================================================================================*/ 
void presetStyle1()
{ tft.setTextColor(presetStyle1_txt1_color, presetStyle1_txt1_BGcolor);
  tft.setTextSize(3); tft.setCursor(30, 30);
  tft.println("PRESET");
  tft.setTextSize(3); tft.setCursor(45, 70);
}

void presetNumberStyle1() 
{ tft.setTextSize(3);
  tft.setCursor(PNtxtWidth, PNtxtHeight); tft.setTextColor(presetNumberStyle1_txt1_color, presetNumberStyle1_txt1_BGcolor);}

void presetNameStyle1()  //Not active preset settings
{  tft.setTextSize(2);  tft.setCursor(0, 10); tft.setTextColor(presetNameStyle1_txt1_color, presetNameStyle1_txt1_BGcolor);}

void presetNumberStyle2()
{ tft.setTextSize(3);
  tft.setCursor(PNtxtWidth, PNtxtHeight); tft.setTextColor(presetNumberStyle2_txt1_color, presetNumberStyle2_txt1_BGcolor);}

void presetNameStyle2()
{ tft.setTextSize(2);  tft.setCursor(0, 10); tft.setTextColor(presetNameStyle2_txt1_color, presetNameStyle2_txt1_BGcolor);}


/*===========================================================================================================================
    EFFECT STYLE
  ===========================================================================================================================*/ 
void effectStyle1() { //BYPASS
  tft.fillScreen(effectStyle1_fillscreen);
  tft.setTextSize(4); tft.setCursor(2, 50);
  tft.setTextColor(effectStyle1_txt1_color, effectStyle1_txt1_BGcolor);
}

void effectStyle2() { //ACTIVE
  tft.fillScreen(effectStyle2_fillscreen);
  tft.setTextSize(4);  tft.setCursor(2, 50);
  tft.setTextColor(effectStyle2_txt1_color, effectStyle2_txt1_BGcolor);
}

/*===========================================================================================================================
    AMP_ABCD STYLE
  ===========================================================================================================================*/ 
void ampabcdStyle_blackBezelLine()
{
  tft.drawLine(0, 1, 160, 1, TFT_BLACK);
  tft.drawLine(0, 2, 160, 2, TFT_BLACK);
  tft.drawLine(0, 3, 160, 3, TFT_BLACK);
  tft.drawLine(0, 125, 160, 125, TFT_BLACK);
  tft.drawLine(0, 126, 160, 126, TFT_BLACK);
  tft.drawLine(0, 127, 160, 127, TFT_BLACK);
  tft.drawRect(0, 0, 160, 128, TFT_BLACK); // Draw bezel line
}

void ampabcdStyle_greenBezelLine()
{
  tft.drawLine(0, 1, 160, 1, TFT_GREEN);
  tft.drawLine(0, 2, 160, 2, TFT_GREEN);
  tft.drawLine(0, 3, 160, 3, TFT_GREEN);
  tft.drawLine(0, 125, 160, 125, TFT_GREEN);
  tft.drawLine(0, 126, 160, 126, TFT_GREEN);
  tft.drawLine(0, 127, 160, 127, TFT_GREEN);
  tft.drawRect(0, 0, 160, 128, TFT_GREEN); // Draw bezel line
}

void ampabcdStyle2()
{
  tft.setTextColor(TFT_BLACK, TFT_GREEN);
  tft.setTextSize(3);  tft.setCursor(1, 105);
  tft.println(" CHANNEL  ");
  amp_abcd_GREENbezel();
}

void ampabcdStyle3()
{
  tft.setTextColor(TFT_CYAN, TFT_RED);
  tft.setTextSize(3); tft.setCursor(1, 105);
  tft.println(" CHANNEL  ");
  amp_abcd_REDbezel(); 
}

void ampabcdStyle4()
{
  tft.setTextColor(TFT_YELLOW);
  tft.setTextSize(20); tft.setCursor(64, 25);
}

/*===========================================================================================================================
    EFFECT CHANNEL SWITCH STYLE
  ===========================================================================================================================*/ 
void effectchannelswitchStyle0()
{
   tft.setTextSize(6); tft.setCursor(70, 10);
   tft.setTextColor(TFT_CYAN, TFT_BLACK);
  }  

void effectchannelswitchStyle1()
{
   tft.setTextSize(6); tft.setCursor(70, 10);
   tft.setTextColor(TFT_CYAN, TFT_BLACK);
   tft.println(channel);
  }

void effectchannelswitchStyle2()
{  
  tft.setCursor(40, 70);
  tft.setTextSize(4);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  }

void effectchannelswitchStyle3()
{ 
  tft.setCursor(40, 70);
  tft.setTextSize(4);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
}

/*===========================================================================================================================
    LOOPER STYLE
  ===========================================================================================================================*/ 
void looperStyle1()
{
  tft.setTextColor(looper_screen_txt1_color, looper_screen_txt1_BGcolor);
  tft.setTextSize(3); tft.setCursor(30, 35);
  tft.println("LOOPER");
  tft.setTextSize(3); tft.setCursor(30, 70); 
  }  
void looperStyle2()
{
  tft.setTextColor(looper_screen_txt2_color, looper_screen_txt2_BGcolor);
  tft.setTextSize(3);  tft.setCursor(30, 35);
  tft.println("LOOPER");
  tft.setTextSize(3);  tft.setCursor(30, 70);  
  } 

void numbersStyle1()
{
  tft.setTextSize(20);  tft.setCursor(65, 40);
  tft.setTextColor(numberSelect_screen_txt1_color, numberSelect_screen_fillscreen);
  }

/*===========================================================================================================================
     PRESET SCREENS BUILT UP         
  ===========================================================================================================================*/

void preset_screen()
{
  tft.fillScreen(preset_screen_fillscreen);
  tft.setTextColor(preset_screen_txt1_color, preset_screen_txt1_BGcolor);
  tft.setTextSize(3);  tft.setCursor(35, 35);
  tft.println("PRESET");
  tft.setTextColor(preset_screen_txt2_color, preset_screen_txt2_BGcolor);
  tft.setTextSize(3); tft.setCursor(45, 70);
  tft.println("PAGE");
}

void presetNameNumber_screen()
{ 
  tft.fillScreen(presetNameNumber_screen_fillscreen);
  tft.setTextColor(presetNameNumber_screen_txt1_color, presetNameNumber_screen_txt1_BGcolor);
  tft.setTextSize(4);  tft.setCursor(65, 20);  tft.println("NO");
  tft.setTextColor(presetNameNumber_screen_txt2_color, presetNameNumber_screen_txt2_BGcolor);  
  tft.setTextSize(4);  tft.setCursor(35, 70);  tft.println("INFO");
}

/*===========================================================================================================================
    PRESET UP SCREEN BUILD-UP 
  ===========================================================================================================================*/  
void presetUp_screen()
{
  nextPresetnr = (nextPreset % 10);
  if ((nextPreset) != 0)
      {
       PresetNumb = active_Preset; 
        if ((nextPresetnr % 10) == 0)
        {PresetNumb = (active_Preset + 10);}
      }
    else
    {
      PresetNumb = 0; 
        }
    presetRange(); delay(10); 
    preset_Names(); delay(10);
    
  switch (nextPresetnr)
  {
  case 0:  strcpy(nextPresetName, PresetName0); debugln(); debug(" nextPresetName = "); debug(PresetName0); break;
  case 1:  strcpy(nextPresetName, PresetName1); debugln(); debug(" nextPresetName = "); debug(PresetName1); break;
  case 2:  strcpy(nextPresetName, PresetName2); debugln(); debug(" nextPresetName = "); debug(PresetName2); break;
  case 3:  strcpy(nextPresetName, PresetName3); debugln(); debug(" nextPresetName = "); debug(PresetName3); break;
  case 4:  strcpy(nextPresetName, PresetName4); debugln(); debug(" nextPresetName = "); debug(PresetName4); break;
  case 5:  strcpy(nextPresetName, PresetName5); debugln(); debug(" nextPresetName = "); debug(PresetName5); break;
  case 6:  strcpy(nextPresetName, PresetName6); debugln(); debug(" nextPresetName = "); debug(PresetName6); break;
  case 7:  strcpy(nextPresetName, PresetName7); debugln(); debug(" nextPresetName = "); debug(PresetName7); break;
  case 8:  strcpy(nextPresetName, PresetName8); debugln(); debug(" nextPresetName = "); debug(PresetName8); break;
  case 9:  strcpy(nextPresetName, PresetName9); debugln(); debug(" nextPresetName = "); debug(PresetName9); break;
  }
    debugln(); debug(" nextPresetnr = "); debug(nextPreset);  
    debugln(); debug(" Nextpreset PresetNumb = "); debug(PresetNumb);
      
    tft.setTextWrap(true);
    presetUp_Style();  tft.println(nextPreset);
    presetUp_Style1(); tft.println(nextPresetName);
    tft.setTextWrap(false);
    PresetNumb = active_Preset;
}

/*===========================================================================================================================
    PRESET DOWN SCREEN BUILD-UP 
  ===========================================================================================================================*/ 
void presetDown_screen()
{
  previousPresetnr = (previousPreset % 10);
    if ((previousPreset) != maxPreset)
      {    
    PresetNumb = active_Preset;
    if ((previousPreset % 10) == 9)
    {PresetNumb = (PresetNumb - 10);}
      }
    else
        {
      PresetNumb = maxPreset;
        }
    presetRange(); delay(10);
    preset_Names(); delay(10);
        
  switch (previousPresetnr)
  {
  case 0:  strcpy(previousPresetName, PresetName0); debugln(); debug(" previousPresetName = "); debug(PresetName0); break;
  case 1:  strcpy(previousPresetName, PresetName1); debugln(); debug(" previousPresetName = "); debug(PresetName1); break;
  case 2:  strcpy(previousPresetName, PresetName2); debugln(); debug(" previousPresetName = "); debug(PresetName2); break;
  case 3:  strcpy(previousPresetName, PresetName3); debugln(); debug(" previousPresetName = "); debug(PresetName3); break;
  case 4:  strcpy(previousPresetName, PresetName4); debugln(); debug(" previousPresetName = "); debug(PresetName4); break;
  case 5:  strcpy(previousPresetName, PresetName5); debugln(); debug(" previousPresetName = "); debug(PresetName5); break;
  case 6:  strcpy(previousPresetName, PresetName6); debugln(); debug(" previousPresetName = "); debug(PresetName6); break;
  case 7:  strcpy(previousPresetName, PresetName7); debugln(); debug(" previousPresetName = "); debug(PresetName7); break;
  case 8:  strcpy(previousPresetName, PresetName8); debugln(); debug(" previousPresetName = "); debug(PresetName8); break;
  case 9:  strcpy(previousPresetName, PresetName9); debugln(); debug(" previousPresetName = "); debug(PresetName9); break;
  }
    debugln(); debug(" previousPresetnr = "); debug(previousPreset);
    debugln(); debug(" PreviousPreset PresetNumb = "); debug(PresetNumb); 
    tft.setTextWrap(true);
    presetDown_Style();  tft.println(previousPreset);
    presetDown_Style1(); tft.println(previousPresetName);
    tft.setTextWrap(false);  
    PresetNumb = active_Preset;
}

/*===========================================================================================================================
   EFFECT SCREEN BUILD-UP 
  ===========================================================================================================================*/ 
void effect_screen()
{
  tft.fillScreen(effect_screen_fillscreen);
  tft.setTextColor(effect_screen_txt1_color, effect_screen_txt1_BGcolor);
  tft.setTextSize(3); tft.setCursor(35, 35);
  tft.println("EFFECT");
  tft.setTextColor(effect_screen_txt2_color, effect_screen_txt2_BGcolor);
  tft.setTextSize(3); tft.setCursor(45, 70);
  tft.println("PAGE");
  }

void ampABCD_screen()
{
  tft.fillScreen(ampABCD_screen_fillscreen);
  tft.setTextColor(ampABCD_screen_txt1_color, ampABCD_screen_txt1_BGcolor);
  tft.setTextSize(3); tft.setCursor(0, 35);
  tft.println(" AMP/CAB ");
  tft.setTextColor(ampABCD_screen_txt2_color, ampABCD_screen_txt2_BGcolor);
  tft.setTextSize(3); tft.setCursor(45, 70);  
  tft.println("ABCD");  
  }
  
void NOWAH_screen()
{
  tft.setTextColor(NOWAH_screen_txt1_color, NOWAH_screen_txt1_BGcolor);
  tft.setTextSize(2); tft.setCursor(0, 0);
  tft.println("NO WAH ACTIVE");
  }

void YESWAH_screen()
{  
  tft.setTextColor(YESWAH_screen_txt1_color, YESWAH_screen_txt1_BGcolor);
  tft.setTextSize(2); tft.setCursor(0, 0);
  tft.println("WAH AVAILABLE");
  }


void looper_screen()
{
  tft.fillScreen(looper_screen_fillscreen);
  tft.setTextColor(looper_screen_txt1_color, looper_screen_txt1_BGcolor);
  tft.setTextSize(3); tft.setCursor(30, 35); 
  tft.println("LOOPER");
  }

void NOLOOPER_screen()
{
  tft.setTextColor(NOLOOPER_screen_txt1_color, NOLOOPER_screen_txt1_BGcolor);
  tft.setTextSize(2); tft.setCursor(0, 0);
  tft.println("  NO LOOPER  ");
  }

void YESLOOPER_screen()
{
  tft.setTextColor(YESLOOPER_screen_txt1_color, YESLOOPER_screen_txt1_BGcolor);
  tft.setTextSize(2); tft.setCursor(0, 0);
  tft.println("LOOPER ACTIVE");
  }



void numberSelect_screen()
{
  tft.fillScreen(number_screen_fillscreen);
  tft.setTextColor(number_screen_txt1_color, number_screen_txt1_BGcolor);
  tft.setTextSize(3); tft.setCursor(10, 0);
  tft.println("Axelman8");
  tft.setTextSize(3); tft.setCursor(30, 50);
  tft.setTextColor(number_screen_txt2_color, number_screen_txt2_color);
  tft.println("NUMBER");
  tft.setTextSize(3); tft.setCursor(30, 85);
  tft.setTextColor(number_screen_txt3_color, number_screen_txt3_color);  
  tft.println("SELECT");  
  }

void reset_numberSelect_screen()
{
  lcd.clear(); lcd.setCursor(0, 0); lcd.print("Selected =      ");
  delay(200);
  Counter = 0;
}



void auditionMode_screen()
{
    tft.fillScreen(auditionMode_screen_fillscreen);
    tft.setTextColor(auditionMode_screen_txt1_color, auditionMode_screen_txt1_BGcolor);
    tft.setTextSize(3); tft.setCursor(10, 30);
    tft.println("AUDITION");
    tft.setTextColor(auditionMode_screen_txt2_color, auditionMode_screen_txt2_BGcolor);
    tft.setTextSize(3); tft.setCursor(40, 70);
    tft.println("MODE");
    tft.drawRect(0, 0, 160, 128, auditionMode_screen_txt1_color); // Draw bezel line
    auditionMode = false;
  }

void auditionMode_ON_screen() 
{
            digitalWrite (CS13, LOW);
            tft.fillScreen(TFT_BLACK);
            tft.setTextColor(TFT_RED);
            tft.setTextSize(3); tft.setCursor(10, 30);
            tft.println("AUDITION");
            tft.setTextSize(4); tft.setCursor(60, 80);
            tft.println("ON");
            tft.drawRect(0, 0, 160, 128, TFT_RED); // Draw bezel line
            digitalWrite (CS13, HIGH);
            delay(200);
  }

void tuner_selectionScreen()
{
    digitalWrite (CS12, LOW);
    tft.fillScreen(tuner_screen_fillscreen);
    tft.setTextColor(tuner_screen_txt1_color, tuner_screen_txt1_BGcolor);
    tft.setTextSize(3); tft.setCursor(5, 10);
    tft.println(" TAP FOR");
    tft.setTextColor(tuner_screen_txt1_color, tuner_screen_txt1_BGcolor);
    tft.setTextSize(3); tft.setCursor(15, 45);
    tft.println(" TUNER ");
    tft.setTextColor(tuner_screen_txt2_color, tuner_screen_txt2_BGcolor);
    tft.setTextSize(3); tft.setCursor(5, 80);
    tft.println(tuner_type);
    digitalWrite (CS12, HIGH); 
  }

void tuner_circleSelection()
{
    strcpy(tuner_type, " CIRCLE ");
    tuner_selectionScreen();
    delay(200);    
} 

void tuner_pyramidSelection()
{
    strcpy(tuner_type, " PYRAMID");
    tuner_selectionScreen();
    delay(200); 
} 


/*=========================================================================================================================
      TAP TEMPO SCREEN BUILD-UP 
  ========================================================================================================================*/
void tapTempo_screen()
{
  if (flashScreen14 != true)
  {flashhight_tempo_Text = 15;}
  else
  {flashhight_tempo_Text = 30;}
  
    digitalWrite (CS14, LOW);
    Axe.requestTempo();
    tft.fillScreen(tapTempo_screen_fillscreen);
    tft.setTextColor(tapTempo_screen_txt1_color, tapTempo_screen_txt1_BGcolor);
    tft.setTextSize(5); tft.setCursor(5, flashhight_tempo_Text);
    tft.println("TEMPO");
    tft.setTextColor(tapTempo_screen_txt2_color, tapTempo_screen_txt2_BGcolor);
    tft.setTextSize(4); tft.setCursor(53, 80);
    tft.println(Axe.getTempo());  
    digitalWrite (CS14, HIGH);
}

/* ========== IN AUDITIONMODE - CHANGE FLASH IN SCREEN 14 ===============*/

void tapTempo_flash_selection_screen()
{
    digitalWrite (CS14, LOW);
    Axe.requestTempo();
    tft.fillScreen(tapTempo_screen_fillscreen);
    tft.setTextColor(tapTempo_screen_txt1_color, tapTempo_screen_txt1_BGcolor);
    tft.setTextSize(3); tft.setCursor(5, 30);
    tft.println(" TAP FOR");
    tft.setTextColor(tapTempo_screen_txt1_color, tapTempo_screen_txt1_BGcolor);
    tft.setTextSize(3); tft.setCursor(5, 55);
    tft.println("  OTHER ");
    tft.setTextColor(tapTempo_screen_txt2_color, tapTempo_screen_txt2_BGcolor);
    tft.setTextSize(3); tft.setCursor(5, 80);
    tft.println("  FLASH ");  
    digitalWrite (CS14, HIGH);  
  }

void tapTempo_selectionScreen()
{
  if (flashScreen14 != true)
  {flashhight_tempo_Text = 15;}
  else
  {flashhight_tempo_Text = 30;}
  if (auditionMode == true)
  {tapTempo_flash_selection_screen();}
  else
  {
    digitalWrite (CS14, LOW);
    tft.fillScreen(tapTempo_selectionScreen_fillscreen);
    tft.setTextColor(tapTempo_selectionScreen_txt1_color, tapTempo_selectionScreen_txt1_BGcolor);
    tft.setTextSize(5); tft.setCursor(5, flashhight_tempo_Text);
    tft.println("TEMPO");
    tft.setTextColor(tapTempo_selectionScreen_txt2_color, tapTempo_selectionScreen_txt2_BGcolor);
    tft.setTextSize(4); tft.setCursor(53, 80);
    tft.println(Axe.getTempo());
    digitalWrite (CS14, HIGH);
  }
}


TFT_eSprite tempoflash = TFT_eSprite(&tft);  // Declare Sprite object "spr" with pointer to "tft" object


void tapTempo_sprite() 
{ 
  if (tempoflash_bar == true)
  {
  tempoflash.setColorDepth(1); // 1 = brightest.   choose 8 for 16 colours (all color variations)
  tempoflash.createSprite(160, 20);

  }
  else
  {
  tempoflash.setColorDepth(1); // 1 = brightest.   choose 8 for 16 colours (all color variations)
  tempoflash.createSprite(160, 20);

    }
}

void tapTempo_flash_ON() 
{  
  if (tempoflash_bar == true)
  {
    //(x,y,w,h,lenth,radius)
  tempoflash.drawRoundRect(35, 0, 90, 20, 6, tapTempo_screen_sprite_color);
  tempoflash.fillRoundRect(37, 2, 86, 16, 6, tapTempo_screen_flash_color);
  digitalWrite (CS14, LOW);
  tempoflash.pushSprite(0, 0);
  digitalWrite (CS14, HIGH);
    }
  else
  {
  tempoflash.drawRoundRect(0, 0, 30, 20, 6, tapTempo_screen_sprite_color);
  tempoflash.drawRoundRect(43, 0, 30, 20, 6, tapTempo_screen_sprite_color);
  tempoflash.drawRoundRect(86, 0, 30, 20, 6, tapTempo_screen_sprite_color);
  tempoflash.drawRoundRect(129, 0, 30, 20, 6, tapTempo_screen_sprite_color);
    
    switch (tempo_Counter)
    {
  case 1:
  tempoflash.fillRoundRect(2, 2, 26, 16, 6, tapTempo_screen_flash_color);
  break;

  case 2:  
  tempoflash.fillRoundRect(45, 2, 26, 16, 6, tapTempo_screen_flash_color);
  break;
  
  case 3:
  tempoflash.fillRoundRect(88, 2, 26, 16, 6, tapTempo_screen_flash_color);
  break;
  
  case 4:
  tempoflash.fillRoundRect(131, 2, 26, 16, 6, tapTempo_screen_flash_color);  
  break;
    }
  digitalWrite (CS14, LOW);
  tempoflash.pushSprite(0, 0);
  digitalWrite (CS14, HIGH);    
  }
}


void tapTempo_flash_OFF()
{
  if (tempoflash_bar == true)
  {  
  tempoflash.drawRoundRect(35, 0, 90, 20, 6, tapTempo_screen_sprite_color);
  tempoflash.fillRoundRect(37, 2, 86, 16, 6, tapTempo_screen_fillscreen);
  digitalWrite (CS14, LOW);
  tempoflash.pushSprite(0, 0);
  digitalWrite (CS14, HIGH);
  }
  else
  {
  tempoflash.fillRoundRect(2, 2, 26, 16, 6, tapTempo_screen_fillscreen);
  tempoflash.fillRoundRect(45, 2, 26, 16, 6, tapTempo_screen_fillscreen);
  tempoflash.fillRoundRect(88, 2, 26, 16, 6, tapTempo_screen_fillscreen);
  tempoflash.fillRoundRect(131, 2, 26, 16, 6, tapTempo_screen_fillscreen);  
  }
  digitalWrite (CS14, LOW);
  tempoflash.pushSprite(0, 0);
  digitalWrite (CS14, HIGH);      
}



/*===========================================================================================================================
     ALL SEPATE PAGE'S         
  ===========================================================================================================================*/

void presetMin100_screen()
{ digitalWrite (CS11, LOW);  presetStyle1();  tft.println("-100");  digitalWrite (CS11, HIGH);}
    
void presetMin50_screen()
{ digitalWrite (CS12, LOW);  presetStyle1();  tft.println("-50");   digitalWrite (CS12, HIGH);}
   
void presetPlus50_screen()
{ digitalWrite (CS14, LOW);  presetStyle1(); tft.println("+50");    digitalWrite (CS14, HIGH);}
      
void presetPlus100_screen()
{ digitalWrite (CS15, LOW);  presetStyle1(); tft.println("+100");   digitalWrite (CS15, HIGH);}

void presetUpDownscreens()
{
    digitalWrite (CS5, LOW);  sceneScreen_5;   digitalWrite (CS5, HIGH);
    digitalWrite (CS10, LOW); sceneScreen_10;  digitalWrite (CS10, HIGH);
  }

/*===========================================================================================================================
     TUNER SCREEN 8 BUILT UP        
  ===========================================================================================================================*/

void tuner_startScreens()
{
    digitalWrite(CS1, LOW); digitalWrite(CS2, LOW); digitalWrite(CS3, LOW); digitalWrite(CS4, LOW); digitalWrite(CS5, LOW); 
    digitalWrite(CS8, LOW); digitalWrite(CS11, LOW); digitalWrite(CS12, LOW); digitalWrite(CS14, LOW); digitalWrite(CS15, LOW);
    tft.fillScreen(TFT_BLACK); 
    digitalWrite(CS1, HIGH); digitalWrite(CS2, HIGH); digitalWrite(CS3, HIGH); digitalWrite(CS4, HIGH); digitalWrite(CS5, HIGH); 
    digitalWrite(CS8, HIGH); digitalWrite(CS11, HIGH); digitalWrite(CS12, HIGH); digitalWrite(CS14, HIGH); digitalWrite(CS15, HIGH);
  
    digitalWrite(CS6, LOW); tunerscreenStyle1(); tft.println("T"); digitalWrite(CS6, HIGH);
    digitalWrite(CS7, LOW); tunerscreenStyle1(); tft.println("U"); digitalWrite(CS7, HIGH);
    digitalWrite(CS9, LOW); tunerscreenStyle1(); tft.println("N"); digitalWrite(CS9, HIGH);
    digitalWrite(CS10,LOW); tunerscreenStyle1(); tft.println("E"); digitalWrite(CS10,HIGH);
}
/*===========================================================================================================================
     TOPSCREENS BUILT UP | ALL SEPATE PAGE'S         
  ===========================================================================================================================*/

void sceneTopscreens()
{
    digitalWrite (CS11, LOW); sceneScreen_11;  digitalWrite (CS11, HIGH);
    digitalWrite (CS12, LOW); sceneScreen_12;  digitalWrite (CS12, HIGH);
    digitalWrite (CS14, LOW); sceneScreen_14;  digitalWrite (CS14, HIGH);
    digitalWrite (CS15, LOW); sceneScreen_15;  digitalWrite (CS15, HIGH); 
    strcpy(page, "scene");
    debugln(); debug(" * PAGE is set to: SCENE");
  }


void auditionmodeTopscreens()
{
  strcpy(page, "preset");
  digitalWrite (CS11, LOW); presetScreen_11; digitalWrite (CS11, HIGH);
  digitalWrite (CS15, LOW); presetScreen_15; digitalWrite (CS15, HIGH); 
  tapTempo_flash_selection_screen();
  tuner_selectionScreen();   
  debugln(); debug(" * PAGE is set to: PRESET while in auditionMode");
}

void exit_auditionmodeTopscreens()
{
  strcpy(page, "scene");
  debugln(); debug(" * PAGE is set to: SCENE after exiting auditionMode");
}


void presetTopscreens()
{
//  digitalWrite (CS14, LOW); presetScreen_14; digitalWrite (CS14, HIGH);
//  digitalWrite (CS15, LOW); presetScreen_15; digitalWrite (CS15, HIGH); 
    digitalWrite (CS11, LOW); presetScreen_11; digitalWrite (CS11, HIGH);
    digitalWrite (CS12, LOW); presetScreen_12; digitalWrite (CS12, HIGH);
    strcpy(page, "preset"); //Set the page to PRESET.  If we do not set it to preset, then the presetpage will not function conrrectly with a preset selection.  
    debugln(); debug(" * PAGE is set to: PRESET");     
  }


void effectTopscreens()
{

//  digitalWrite (CS14, LOW); effectScreen_14;  digitalWrite (CS14, HIGH);
//  digitalWrite (CS15, LOW); effectScreen_15;  digitalWrite (CS15, HIGH);
    digitalWrite (CS11, LOW); effectScreen_11;  digitalWrite (CS11, HIGH);
    digitalWrite (CS12, LOW); effectScreen_12;  digitalWrite (CS12, HIGH);
    strcpy(page, "effect");
    debugln(); debug(" * PAGE is set to: EFFECT");
  }


void abcdTopscreens()
{
//  digitalWrite (CS14, LOW); AMP_effectScreen_14;  digitalWrite (CS14, HIGH);
//  digitalWrite (CS15, LOW); AMP_effectScreen_15;  digitalWrite (CS15, HIGH); 
    digitalWrite (CS11, LOW); AMP_effectScreen_11;  digitalWrite (CS11, HIGH);
    digitalWrite (CS12, LOW); AMP_effectScreen_12;  digitalWrite (CS12, HIGH);
    strcpy(page, "AMP_effect");
    debugln(); debug(" * PAGE is set to: AMP_EFFECT");
  }
  

//    tft.fillScreen(TFT_BLACK); // additional not used screens goto black
void looperTopscreens()
{
//  digitalWrite(CS14, LOW); looperScreen_14; digitalWrite(CS14, HIGH);
//  digitalWrite(CS15, LOW); looperScreen_15; digitalWrite(CS15, HIGH);
    digitalWrite(CS11, LOW); looperScreen_11; digitalWrite(CS11, HIGH);
    digitalWrite(CS12, LOW); looperScreen_12; digitalWrite(CS12, HIGH);
    strcpy(page, "looper");
    debugln(); debug(" * PAGE is set to: LOOPER");
  }


void numberTopscreens()
{
//  digitalWrite(CS14, LOW); numberScreen_14; digitalWrite(CS14, HIGH);
//  digitalWrite(CS15, LOW); numberScreen_15; digitalWrite(CS15, HIGH);
    digitalWrite(CS11, LOW); numberScreen_11; digitalWrite(CS11, HIGH);
    digitalWrite(CS12, LOW); numberScreen_12; digitalWrite(CS12, HIGH);
    strcpy(page, "numbers");
    debugln(); debug(" * PAGE is set to: NUMBERS");
 } 
  
/*===================================================================================*/
/*Axelman8*/  

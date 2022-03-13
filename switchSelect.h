#pragma once


/*===========================================   -  Include library's  -  ================================================*/

#include <AxeFxControl.h>
#include <SD_ini.h>

#include "Screenstyle.h"
#include "axe_handler.h"
#include "Preset_range.h"
#include "screenSetup.h"


/*================================================================================================================================*/
/*   +++++    SCREEN SELECT      +++++     DO NOT EDIT THESE CODES   +++++     
/*================================================================================================================================*/

void scenePage_selection()
{
  debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);  
  debugln(); debugln(); debug(" * function scenePage_selection started on switchSelect.h");

  if (auditionMode == true)
  {exit_auditionmodeTopscreens();}
  else
  {sceneTopscreens();}
  if (strcmp(page, "effect") != 0)
  {
  auditionMode = false;
  debugln();debug(" -> auditionmode set to: false");
  getScenes = true;
  effectCycle = true;
  debugln(); debug(" -> effectcycle set to:  true");
  debugln(); debug(" -> getScenes set to:  true");       
  currentEffect = 0;
  Counter = 0;
  ini_scenes();
  }
  else
  {
    strcpy(page, "preset");
    ini_preset();
    }
  delay(200);
}

/*==================   OR  ========================*/
void presetPage_selection()
{
  debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);  
  debugln(); debugln(); debug(" * function presetPage_selection started on switchSelect.h");
 
  presetTopscreens();
  auditionMode = false;
  debugln(); debug (" -> auditionmode set to: false");
  getScenes = false;
  effectCycle = true;
  debugln(); debug(" -> effectcycle set to:  true");
  debugln(); debug(" -> getScenes set to:  true");     
  presetRange();
  ini_preset();
  Axe.refresh();
  delay(200);
}


/*==================   OR  ========================*/
void looperPage_selection() 
{
  debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);  
  debugln(); debugln(); debug(" * function looperPage_selection started on switchSelect.h"); 

  looperTopscreens();
  ini_looper();
  delay(200);
}

/*==================   OR  ========================*/
void numberPage_selection() 
{
  debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1); 
  debugln();debugln();  debug(" * function numberPage_selection started on switchSelect.h");   

  numberTopscreens();  
  Counter = 0;
  ini_numbers();
  delay(200);
 }

/*==================   OR  ========================*/
void ampabcdPage_selection() 
{
  if (auditionMode == true)
  {
    if (tunerScreen8_Circle == false)
    {tunerScreen8_Circle = true;
     tuner_pyramidSelection();    
    }
    else
    {
      tunerScreen8_Circle = false;
      tuner_circleSelection();      
      }
  }
  else
  {
  debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1); 
  debugln(); debugln(); debug(" * function ampabcdPage_selection started on switchSelect.h");
  
  digitalWrite(CS1, LOW); digitalWrite(CS2, LOW);  digitalWrite(CS3, LOW);  digitalWrite(CS4, LOW);  digitalWrite(CS5, LOW); 
  digitalWrite(CS6, LOW); digitalWrite(CS7, LOW);  digitalWrite(CS8, LOW);  digitalWrite(CS9, LOW);  digitalWrite(CS10, LOW);  
  tft.fillScreen(TFT_BLACK);
  digitalWrite(CS1, HIGH); digitalWrite(CS2, HIGH);  digitalWrite(CS3, HIGH);  digitalWrite(CS4, HIGH);  digitalWrite(CS5, HIGH);  
  digitalWrite(CS6, HIGH); digitalWrite(CS7, HIGH);  digitalWrite(CS8, HIGH);  digitalWrite(CS9, HIGH);  digitalWrite(CS10, HIGH);  

    if (strcmp(page,"AMP_effect") !=0)  {abcdTopscreens();}
    getScenes = false;
    effectCycle = true;
    debugln(); debug(" -> getScenes set to:  false");
    debugln(); debug(" -> effectcycle set to:  true");
    auditionMode = false;
    debugln(); debug(" -> auditionmode set to:  false");
    delay(500);
    currentEffect = 0;
    debugln(); debug(" currenteffect = 0");
    AMP_ABCD();
    Axe.refresh(); 
  }

  
}

/*==================   OR  ========================*/
void effectPage_selection() 
{
  debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1); 
  debugln(); debugln(); debug(" * function effectPage_selection started on switchSelect.h");
  
  effectTopscreens();
  getScenes = false;
  debugln(); debug(" -> getScenes set to:  false");
  effectCycle = true;
  debugln(); debug(" -> effectcycle set to:  true");
  auditionMode = false;
  debugln(); debug(" -> auditionmode set to:  false");
  ini_effect();
  Axe.refresh();

}

/*==================   OR  ========================*/
void taptempoPage_selection() 
{
  debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);  
  debugln(); debugln(); debugln(" * function taptempoPage_selection started on switchSelect.h");   

 if (auditionMode == true)
 {  if (tempoflash_bar == false)
  {tempoflash_bar = true;}
    else
  {tempoflash_bar = false;}
  tempoflash.deleteSprite();
  tapTempo_flash_selection_screen();}
  else
  if (tapSwitch == false) 
  {
    Axe.sendTap();
    tapSwitch = true;
    digitalWrite (CS14, LOW);
    tapTempo_selectionScreen();
    digitalWrite (CS14, HIGH);
  }
  else
  {
    Axe.sendTap();
    tapSwitch = false;
    digitalWrite (CS14, LOW);
    tapTempo_screen();
    digitalWrite (CS14, HIGH);
  }
}


/*==================   OR  ========================*/

void tunerPage_selection()
{
  debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1); 
  debugln(); debugln(); debug(" * function tunerPage_selection started on switchSelect.h");
  debugln(); debug(" -> TUNER started");

  if (tunerScreen8 == true)
  {
    tuner_startScreens();
  }
  Axe.toggleTuner();
  
  delay(300);
}

/*================================================================================================================================*/
/*   Build-up SCENE selection Screen  
/*================================================================================================================================*/
void sceneSelection()
{
  switch (currentSwitch) {
    case 0: CS = CS1; sceneNumber = 1; SWITCH = SWITCH1; break;
    case 1: CS = CS2; sceneNumber = 2; SWITCH = SWITCH2; break;
    case 2: CS = CS3; sceneNumber = 3; SWITCH = SWITCH3; break;
    case 3: CS = CS4; sceneNumber = 4; SWITCH = SWITCH4; break;
    case 5: CS = CS6; sceneNumber = 5; SWITCH = SWITCH6; break;
    case 6: CS = CS7; sceneNumber = 6; SWITCH = SWITCH7; break;
    case 7: CS = CS8; sceneNumber = 7; SWITCH = SWITCH8; break;
    case 8: CS = CS9; sceneNumber = 8; SWITCH = SWITCH9; break;
  }

  MIDI.sendControlChange(SceneSelect_CC, sceneNumber - 1, MIDICHAN);

  debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1); debug(" | Buttonpin = "); debug(SWITCH);
  debugln(); debug(" -> Screenpin = "); debug(CS);
  debugln(); debug(" -> Active Scene = "); debug(sceneNumber);

  digitalWrite (CS, LOW);
  activesceneStyle1();
  tft.println(sceneNumber);
  scene_GREENbezel();
  digitalWrite (CS, HIGH);
  delay(200);
}

/*================================================================================================================================*/
/*   Build-up PRESET selection Screens  
/*================================================================================================================================*/

void presetSelection()
{
   if (auditionMode == true)
   {
            CurPreset = (PresetNumb + currentSwitch);
            debugln(); debug(" Auditionmode ON CurPreset = "); debug(CurPreset);
            if (CurPreset > maxPreset) 
            {
              CurPreset = 0;
              PresetNumb = 0;
            debugln(); debug(" Auditionmode ON CurPreset = "); debug(CurPreset);
            debugln(); debug(" Auditionmode ON PresetNumb = "); debug(PresetNumb);
            }
            Axe.sendPresetChange(CurPreset);
            effectCycle = true;
            getScenes = true;
            debugln(); debug(" -> effectcycle set to:  true");
            debugln(); debug(" -> getScenes set to:  false");        
            presetRange();
            tapTempo_flash_selection_screen();
            tuner_selectionScreen();
            debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);
            delay(200);
            }
            else
            {
            CurPreset = (PresetNumb + currentSwitch);
            debugln(); debug(" PresetSelection CurPreset = "); debug(CurPreset);
            if (CurPreset > maxPreset)
            {CurPreset = currentSwitch;} 
            debugln(); debug(" PresetSelection CurPreset = "); debug(CurPreset);            
            Axe.sendPresetChange(CurPreset);
            sceneTopscreens();
            getScenes = true;
            effectCycle = true;
            debugln(); debug(" -> getScenes set to:  true");
            debugln(); debug(" -> effectcycle set to:  true");
            tapTempo_screen();
            debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);
            delay(200);
            }
}

void auditionmodeEnd_Selection()
{
            sceneTopscreens();
            getScenes = true;
            effectCycle = true;
            debugln(); debug(" -> getScenes set to:  true");
            debugln(); debug(" -> effectcycle set to:  true");
            //Axe.sendPresetChange(active_Preset);
            CurPreset = (active_Preset);
            ini_scenes();            
            debugln(); debug(" Auditionmode OFF CurPreset = "); debug(CurPreset);            
            debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);
            delay(200);

}

/*================================================================================================================================*/
/*   Build-up EFFECT selection Screens 
/*================================================================================================================================*/
void effectSelection()
{
  switch (currentSwitch) {
    case 0: CS = CS1; thisEffect = effect1; break;
    case 1: CS = CS2; thisEffect = effect2; break;
    case 2: CS = CS3; thisEffect = effect3; break;
    case 3: CS = CS4; thisEffect = effect4; break;
    case 4: CS = CS5; thisEffect = effect5; break;
    case 5: CS = CS6; thisEffect = effect6; break;    
    case 6: CS = CS7; thisEffect = effect7; break;
    case 7: CS = CS8; thisEffect = effect8; break;
    case 8: CS = CS9; thisEffect = effect9; break;
    case 9: CS = CS10; thisEffect = effect10; break;
  }            
            
    debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);
    AxeEffect *effect = Axe.getCurrentPreset().getEffectById(thisEffect);
    if (thisEffect > 0)
    {
    effect->toggle();
    digitalWrite (CS, LOW);
      if (effect->isBypassed()) {
          effectStyle1();     //on axe_handler.h
          effect->printEffectName(tft);
          }
           else {
              effectStyle2(); //on axe_handler.h
              effect->printEffectName(tft);
               }
    digitalWrite (CS, HIGH);
    }
    delay(200);
}

/*================================================================================================================================*/
/*   +++++++     END SCREEN SELECT     +++++++++        
/*================================================================================================================================*/

void bankDown_selection()
{
  if (strcmp(page, "preset") != 0)  // -->>  NOT on presetpage
        { 
          PresetNumb = (PresetNumb - 10);     
          if (PresetNumb < 0) PresetNumb = ((maxPreset-1) + PresetNumb); else (PresetNumb = PresetNumb);
          CurPreset = PresetNumb;
          debugln(); debug(" page != preset bankDown CurPreset = "); debug(CurPreset);          
          bankDown_LCD_text();
          getScenes = true;
          effectCycle = true;
          Axe.sendPresetChange(PresetNumb);

          debugln(); debug(" -> getScenes set to:  true");
          debugln(); debug(" -> effectcycle set to:  true");
          debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch - 10);  
  
  if (strcmp(page, "scene") != 0) // -->> NOT on scenepage
  {
          sceneTopscreens();
  }
          presetUpDownscreens(); 
          delay(200);
 }
          else // -->> ON presetpage
  {  
           if (auditionMode == true)
          {
          CurPreset = (CurPreset - 10);
          debugln(); debug(" page == preset bankDown CurPreset = "); debug(CurPreset);   
          auditionmode_LCD_text();
          }
          else
          {
          PresetNumb = (PresetNumb - 10);
          if (PresetNumb < 0) PresetNumb = ((maxPreset - 1) + PresetNumb); else (PresetNumb = PresetNumb);
          CurPreset = PresetNumb;
          debugln(); debug(" page == preset bankDown CurPreset = "); debug(CurPreset);          
         
          bankDown_LCD_text();
          debugln(); debugln(" Switch-6");
          presetRange();
          }
          ini_preset();
          delay(200);
  }
          serialprint_memory_info();
}

/*==================   OR  ========================*/   //  +10 

void bankUp_selection()
{
if (strcmp(page, "preset") != 0) // NOT on presetpage
 {
          PresetNumb = (PresetNumb + 10);  
          if (PresetNumb > maxPreset) PresetNumb = (PresetNumb - (maxPreset - 1)); else (PresetNumb = PresetNumb);
          CurPreset = PresetNumb;
          debugln(); debug(" page != preset bankUp CurPreset = "); debug(CurPreset); 
          bankUp_LCD_text();
          getScenes = true;
          effectCycle = true;
          Axe.sendPresetChange(PresetNumb);

          debugln(); debug(" -> getScenes set to:  true");
          debugln(); debug(" -> effectcycle set to:  true");
          debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 10);

  if (strcmp(page, "scene") != 0) // NOT on scenepage
  {
          sceneTopscreens();
    }
          presetUpDownscreens();
          delay(200);
   }
          else  // ON presetpage
  {  
          if (auditionMode == true)
          {
          CurPreset = (CurPreset + 10);
          debugln(); debug(" page == preset bankUp CurPreset = "); debug(CurPreset);  
          auditionmode_LCD_text();
          }
          else
          {
          PresetNumb = (PresetNumb + 10);
          if (PresetNumb > maxPreset) PresetNumb = (PresetNumb - (maxPreset - 1)); else if (PresetNumb = PresetNumb);
          CurPreset = PresetNumb;
          debugln(); debug(" page == preset bankUp CurPreset = "); debug(CurPreset); 

            bankUp_LCD_text();
            debugln(); debug(" Switch-12 ");
          presetRange();
          }
          ini_preset();
          delay(200);
   } 
          serialprint_memory_info();
}

/*==================   OR  ========================*/   //  -1
void presetDown_selection()
{
          if ((CurPreset != 0) || (previousPreset != maxPreset) || active_Preset != 0)
          {
            PresetNumb = PresetNumb - 1;
          }
          else 
          {
            CurPreset = maxPreset;
          debugln(); debug(" presetDown CurPreset = "); debug(CurPreset);             
            PresetNumb = maxPreset;
          }
          getScenes = true;
          debugln(); debug(" -> getScenes set to:  true");
          effectCycle = true;
          auditionMode = false;
          debugln(); debug(" -> effectcycle set to:  true");
          Axe.sendPresetChange(PresetNumb);
          scene_LCD_text();
          debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);
          delay(200);

}

/*==================   OR  ========================*/   //  +1
void presetUp_selection()
{
          if ((CurPreset != maxPreset) || (nextPreset != 0) || active_Preset != maxPreset)
          {
            PresetNumb = PresetNumb + 1;
          }
          else 
          {
            CurPreset = 0;
          debugln(); debug(" presetUp CurPreset = "); debug(CurPreset); 
            PresetNumb = 0;
          }
          getScenes = true;
          debugln(); debug(" -> getScenes set to:  true");
          effectCycle = true;
          auditionMode = false;
          debugln(); debug(" -> effectcycle set to:  true");
          Axe.sendPresetChange(PresetNumb);
          scene_LCD_text();
          debugln(); debug(" -> Pressed Switch = "); debug(currentSwitch + 1);
          delay(200);

}

void auditionmodePage_selection()
{
  if (auditionMode == false)
          {
            auditionMode = true;
            debugln(); debug (" -> auditionmode set to: true");
            auditionmode_LCD_text();
            effectCycle = true;
            debugln(); debug(" -> effectcycle set to:  true");            
            auditionMode_ON_screen();
            auditionmodeTopscreens();
          }
                    else
          {
           auditionMode = false;
           auditionmodeEnd_Selection();
          }
}

void auditionmodePage_tuner_OFF_selection()
          {
            debugln(); debug (" -> auditionmode set to: true");
            auditionmodeTopscreens();
            ini_preset();
            auditionmode_LCD_text();
            effectCycle = true;
            debugln(); debug(" -> effectcycle set to:  true");            
            auditionMode_ON_screen();
          }

/*===================================================================================*/
/*Axelman8*/

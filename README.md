# Pari_V7.0_MKI
 Fractal Audio axeFxIII midi controller MK1 
 ===========================================================================
 
 This is the first version that has a user .ini file to make personal configuration settings.
 
 C:\Users\[your_name]\Documents\Arduino\libraries\PARI_INI
 
 
 ===========================================================================
 
 library file: SD_ini.h
 
 -> Define the function on the screens 5, 10, 11, 12, 13, 14, 15
 
 -> Boot-up TFT screen background color and text color
 
 -> TFT screen background color (all function screens) and  text color row 1, row 2, row 3
    -> This can be set for the Scenes screen, presets screen, effects screen, AMP ABCD screen, Tuner screen, Number screen, Tempo screen, preset up / down screen.
 
 -> Border color settings for active screen (default is green)
 
 ===========================================================================
 
 library file:  variables_ini.h 
 
  -> placeholder for all used variables
  
 =========================================================================== 
 
 library file: preset_ini.h for the user presets  
 
  -> Your preset names 0-511
  
 ===========================================================================  
 
 
 What is the benefit?
 
 With this file separated from the .ino files,  you can flash new software versions, without effecting your own settings.


================

Future plans:

-> having all user config settings in the ini file's, so updates would only be about flashing a .HEX file.  No arduino IDE needed

================


Axelman8

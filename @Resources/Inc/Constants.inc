[Variables]
;Start
OpenStart=[!RainmeterActivateConfig "LCARS_Control" "Start.ini"]
CloseStart=[!RainmeterDeActivateConfig "LCARS_Control" "Start.ini"]
OpenSettings=[!RainmeterActivateConfig "LCARS_Control" "Settings.ini"]
CloseSettings=[!RainmeterDeActivateConfig "LCARS_Control" "Settings.ini"]
Open1280x768=[!RainmeterActivateConfig "LCARS_Control\1280x768" "LCARS.ini"]
Close1280x768=[!RainmeterDeActivateConfig "LCARS_Control\1280x768" "LCARS.ini"]
Open1366x768=[!RainmeterActivateConfig "LCARS_Control\1366x768" "LCARS.ini"]
Close1366x768=[!RainmeterDeActivateConfig "LCARS_Control\1366x768" "LCARS.ini"]





QLU=110
QLD=150
QLL=950
QLR=1060

LMY1=155
LMY2=195
LMY3=235
LMY4=275
LMY5=315
LMY6=355
LMY7=395
LMY8=435
LMY9=475
LMY10=515
LMY11=555
LMY12=595

;=================================================!Bangs============================================
;============================================
;Sounds========================================
SoundBeep1=[PLAY "#@#Sounds\Computer\Beep1.wav"]

;==============================================
;Commands1======================================
CoIn_On=[!SetVariable "CompInfo" "0"][!RainmeterWriteKeyValue Variables "CompInfo" "0" "#@#\Inc\Settings.inc"]
CoIn_Off=[!SetVariable "CompInfo" "1"][!RainmeterWriteKeyValue Variables "CompInfo" "1" "#@#\Inc\Settings.inc"]

CPU_MEM_On=[!SetVariable "CPU_MEM" "0"][!RainmeterWriteKeyValue Variables "CPU_MEM" "0" "#@#\Inc\Settings.inc"]
CPU_MEM_Off=[!SetVariable "CPU_MEM" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM" "1" "#@#\Inc\Settings.inc"]
CPU_MEM|N_On=[!SetVariable "CPU_MEM#GR|IND#" "0"][!RainmeterWriteKeyValue Variables "CPU_MEM#GR|IND#" "0" "#@#\Inc\Settings.inc"] [!SetVariable "CPU_MEM#IND|GR#" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM#IND|GR#" "1" "#@#\Inc\Settings.inc"]
CPU_MEM|N_Off=[!SetVariable "CPU_MEM#GR|IND#" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM#GR|IND#" "1" "#@#\Inc\Settings.inc"][!SetVariable "CPU_MEM#IND|GR#" "0"][!RainmeterWriteKeyValue Variables "CPU_MEM#IND|GR#" "0" "#@#\Inc\Settings.inc"]
GR|IND_On=[!SetVariable "GR|IND" "0"][!RainmeterWriteKeyValue Variables "GR|IND" "0" "#@#\Inc\Settings.inc"]
GR_IND_Off=[!SetVariable "GR|IND" "1"][!RainmeterWriteKeyValue Variables "GR|IND" "1" "#@#\Inc\Settings.inc"]

;CPU stands
CPU_On=[!SetVariable "CP0" "#CP0_#"][!RainmeterWriteKeyValue Variables "CP0" "#CP0_#" "#@#\Inc\Settings.inc"][!SetVariable CP1 "#CP1_#"][!RainmeterWriteKeyValue Variables "CP1" "#CP1_#" "#@#\Inc\Settings.inc"][!SetVariable "CP2" "#CP2_#"][!RainmeterWriteKeyValue Variables "CP2" "#CP2_#" "#@#\Inc\Settings.inc"][!SetVariable "CP3" "#CP3_#"][!RainmeterWriteKeyValue Variables "CP3" "#CP3_#" "#@#\Inc\Settings.inc"][!SetVariable "CP4" "#CP4_#"][!RainmeterWriteKeyValue Variables "CP4" "#CP4_#" "#@#\Inc\Settings.inc"][!SetVariable "CP5" "#CP5_#"][!RainmeterWriteKeyValue Variables "CP5" "#CP5_#" "#@#\Inc\Settings.inc"][!SetVariable "CP6" "#CP6_#"][!RainmeterWriteKeyValue Variables "CP6" "#CP6_#" "#@#\Inc\Settings.inc"][!SetVariable "CP7" "#CP7_#"][!RainmeterWriteKeyValue Variables "CP7" "#CP7_#" "#@#\Inc\Settings.inc"][!SetVariable "CP8" "#CP8_#"][!RainmeterWriteKeyValue Variables "CP8" "#CP8_#" "#@#\Inc\Settings.inc"][!SetVariable "CP9" "#CP9_#"][!RainmeterWriteKeyValue Variables "CP9" "#CP9_#" "#@#\Inc\Settings.inc"][!SetVariable "CP10" "#CP10_#"][!RainmeterWriteKeyValue Variables "CP10" "#CP10_#" "#@#\Inc\Settings.inc"][!SetVariable "CP11" "#CP11_#"][!RainmeterWriteKeyValue Variables "CP11" "#CP11_#" "#@#\Inc\Settings.inc"][!SetVariable "CP12" "#CP12_#"][!RainmeterWriteKeyValue Variables "CP12" "#CP12_#" "#@#\Inc\Settings.inc"]

CPU_Off=[!SetVariable "CP0" "1"][!RainmeterWriteKeyValue Variables "CP0" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP1" "1"][!RainmeterWriteKeyValue Variables "CP1" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP2" "1"][!RainmeterWriteKeyValue Variables "CP2" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP3" "1"][!RainmeterWriteKeyValue Variables "CP3" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP4" "1"][!RainmeterWriteKeyValue Variables "CP4" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP5" "1"][!RainmeterWriteKeyValue Variables "CP5" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP6" "1"][!RainmeterWriteKeyValue Variables "CP6" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP7" "1"][!RainmeterWriteKeyValue Variables "CP7" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP8" "1"][!RainmeterWriteKeyValue Variables "CP8" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP9" "1"][!RainmeterWriteKeyValue Variables "CP9" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP10" "1"][!RainmeterWriteKeyValue Variables "CP10" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP11" "1"][!RainmeterWriteKeyValue Variables "CP11" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP12" "1"][!RainmeterWriteKeyValue Variables "CP12" "1" "#@#\Inc\Settings.inc"]

Rate1=5
;===============================================
FONX=530
FONY=270
FONH=440
FONW=750

;Computer====================
;Head
CX1=540
CX2=810
CHeY=280
CH1=40
CH2=30
CW1=260
CW2=460

;Lines
CY1=345
CY2=385
CY3=425
CY4=475
CY5=515
CY6=555
CY7=605
CY8=645
CY9=685
;============================
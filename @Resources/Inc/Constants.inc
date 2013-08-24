[Variables]
;Start
OpenStart=[!RainmeterActivateConfig "LCARS_Control" "Start.ini"]
CloseStart=[!RainmeterDeActivateConfig "LCARS_Control" "Start.ini"]
OpenSettings=[!RainmeterActivateConfig "LCARS_Control" "Settings.ini"]
CloseSettings=[!RainmeterDeActivateConfig "LCARS_Control" "Settings.ini"]
Open1280x768=[!RainmeterActivateConfig "LCARS_Control\1280x768" "LCARS.ini"]
Close1280x768=[!RainmeterDeActivateConfig "LCARS_Control\1280x768" "LCARS.ini"]
CloseHide1280x768=[!RainmeterDeActivateConfig "LCARS_Control\1280x768" "LCARS_Hidden.ini"]
OpenHide1280x768=[!RainmeterActivateConfig "LCARS_Control\1280x768" "LCARS_Hidden.ini"]
Open1366x768=[!RainmeterActivateConfig "LCARS_Control\1366x768" "LCARS.ini"]
Close1366x768=[!RainmeterDeActivateConfig "LCARS_Control\1366x768" "LCARS.ini"]





QLU=110
QLD=150
QLL=950
QLR=1060
QLRR=1170

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
SoundScreenUp=[PLAY "#@#Sounds\Computer\ScreenUp.wav"]
;==============================================
;Commands1======================================
CoIn_On=[!SetVariable "CompInfo" "0"][!RainmeterWriteKeyValue Variables "CompInfo" "0" "#@#\Inc\Settings.inc"]
CoIn_Off=[!SetVariable "CompInfo" "1"][!RainmeterWriteKeyValue Variables "CompInfo" "1" "#@#\Inc\Settings.inc"]

CPU_MEM_On=[!SetVariable "CPU_MEM" "0"][!RainmeterWriteKeyValue Variables "CPU_MEM" "0" "#@#\Inc\Settings.inc"]
CPU_MEM_Off=[!SetVariable "CPU_MEM" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM" "1" "#@#\Inc\Settings.inc"]
CPU_MEM|N_On=[!SetVariable "CPU_MEM#GR|IND#" "0"][!RainmeterWriteKeyValue Variables "CPU_MEM#GR|IND#" "0" "#@#\Inc\Settings.inc"] [!SetVariable "CPU_MEM#IND|GR#" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM#IND|GR#" "1" "#@#\Inc\Settings.inc"]
CPU_MEM|N_Off=[!SetVariable "CPU_MEM0" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM0" "1" "#@#\Inc\Settings.inc"][!SetVariable "CPU_MEM1" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM1" "1" "#@#\Inc\Settings.inc"]
GR|IND_On=[!SetVariable "GR|IND" "0"][!SetVariable "IND|GR" "1"][!RainmeterWriteKeyValue Variables "GR|IND" "0" "#@#\Inc\Settings.inc"][!RainmeterWriteKeyValue Variables "IND|GR" "1" "#@#\Inc\Settings.inc"]
GR|IND_Off=[!SetVariable "GR|IND" "1"][!SetVariable "IND|GR" "0"][!RainmeterWriteKeyValue Variables "GR|IND" "1" "#@#\Inc\Settings.inc"][!RainmeterWriteKeyValue Variables "IND|GR" "0" "#@#\Inc\Settings.inc"]
DATABASE_On=[!SetVariable "DATABASE" "0"][!RainmeterWriteKeyValue Variables "DATABASE" "0" "#@#\Inc\Settings.inc"]#Fon2#
DATABASE_Off=[!SetVariable "DATABASE" "1"][!RainmeterWriteKeyValue Variables "DATABASE" "1" "#@#\Inc\Settings.inc"]#Fon1#
Fon1=[!SetVariable "FONW" "750"][!RainmeterWriteKeyValue Variables "FONW" "750" "#@#\Inc\Settings.inc"]
Fon2=[!SetVariable "FONW" "520"][!RainmeterWriteKeyValue Variables "FONW" "520" "#@#\Inc\Settings.inc"]


;CPU stands
CPU_On=[!SetVariable CP1 "#CP1_#"][!RainmeterWriteKeyValue Variables "CP1" "#CP1_#" "#@#\Inc\Settings.inc"][!SetVariable "CP2" "#CP2_#"][!RainmeterWriteKeyValue Variables "CP2" "#CP2_#" "#@#\Inc\Settings.inc"][!SetVariable "CP3" "#CP3_#"][!RainmeterWriteKeyValue Variables "CP3" "#CP3_#" "#@#\Inc\Settings.inc"][!SetVariable "CP4" "#CP4_#"][!RainmeterWriteKeyValue Variables "CP4" "#CP4_#" "#@#\Inc\Settings.inc"][!SetVariable "CP5" "#CP5_#"][!RainmeterWriteKeyValue Variables "CP5" "#CP5_#" "#@#\Inc\Settings.inc"][!SetVariable "CP6" "#CP6_#"][!RainmeterWriteKeyValue Variables "CP6" "#CP6_#" "#@#\Inc\Settings.inc"][!SetVariable "CP7" "#CP7_#"][!RainmeterWriteKeyValue Variables "CP7" "#CP7_#" "#@#\Inc\Settings.inc"][!SetVariable "CP8" "#CP8_#"][!RainmeterWriteKeyValue Variables "CP8" "#CP8_#" "#@#\Inc\Settings.inc"][!SetVariable "CP9" "#CP9_#"][!RainmeterWriteKeyValue Variables "CP9" "#CP9_#" "#@#\Inc\Settings.inc"][!SetVariable "CP10" "#CP10_#"][!RainmeterWriteKeyValue Variables "CP10" "#CP10_#" "#@#\Inc\Settings.inc"][!SetVariable "CP11" "#CP11_#"][!RainmeterWriteKeyValue Variables "CP11" "#CP11_#" "#@#\Inc\Settings.inc"][!SetVariable "CP12" "#CP12_#"][!RainmeterWriteKeyValue Variables "CP12" "#CP12_#" "#@#\Inc\Settings.inc"]
CPU_Off=[!SetVariable "CP1" "1"][!RainmeterWriteKeyValue Variables "CP1" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP2" "1"][!RainmeterWriteKeyValue Variables "CP2" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP3" "1"][!RainmeterWriteKeyValue Variables "CP3" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP4" "1"][!RainmeterWriteKeyValue Variables "CP4" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP5" "1"][!RainmeterWriteKeyValue Variables "CP5" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP6" "1"][!RainmeterWriteKeyValue Variables "CP6" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP7" "1"][!RainmeterWriteKeyValue Variables "CP7" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP8" "1"][!RainmeterWriteKeyValue Variables "CP8" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP9" "1"][!RainmeterWriteKeyValue Variables "CP9" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP10" "1"][!RainmeterWriteKeyValue Variables "CP10" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP11" "1"][!RainmeterWriteKeyValue Variables "CP11" "1" "#@#\Inc\Settings.inc"][!SetVariable "CP12" "1"][!RainmeterWriteKeyValue Variables "CP12" "1" "#@#\Inc\Settings.inc"]

Rate1=5
;===============================================

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

;Database=================
IcSize=60
NameH=40

IcX1=550
IcX2=620
IcX3=690
IcX4=760
IcX5=830
IcX6=900
IcX7=970

IcY1=340
IcY2=460
IcY3=580

;Index commands
LevelUp=[!CommandMeasure MeasurePath "PreviousFolder"] [!CommandMeasure MeasurePath Update]

Ind1ComL=[!CommandMeasure MeasureIndex1Name "FollowPath"]
Ind1ComR=
Ind2ComL=[!CommandMeasure MeasureIndex2Name "FollowPath"]
Ind2ComR=
Ind3ComL=[!CommandMeasure MeasureIndex3Name "FollowPath"]
Ind3ComR=
Ind4ComL=[!CommandMeasure MeasureIndex4Name "FollowPath"]
Ind4ComR=
Ind5ComL=[!CommandMeasure MeasureIndex5Name "FollowPath"]
Ind5ComR=
Ind6ComL=[!CommandMeasure MeasureIndex6Name "FollowPath"]
Ind6ComR=
Ind7ComL=[!CommandMeasure MeasureIndex7Name "FollowPath"]
Ind7ComR=

Ind8ComL=[!CommandMeasure MeasureIndex8Name "FollowPath"]
Ind8ComR=
Ind9ComL=[!CommandMeasure MeasureIndex9Name "FollowPath"]
Ind9ComR=
Ind10ComL=[!CommandMeasure MeasureIndex10Name "FollowPath"]
Ind10ComR=
Ind11ComL=[!CommandMeasure MeasureIndex11Name "FollowPath"]
Ind11ComR=
Ind12ComL=[!CommandMeasure MeasureIndex12Name "FollowPath"]
Ind12ComR=
Ind13ComL=[!CommandMeasure MeasureIndex13Name "FollowPath"]
Ind13ComR=
Ind14ComL=[!CommandMeasure MeasureIndex14Name "FollowPath"]
Ind14ComR=

Ind15ComL=[!CommandMeasure MeasureIndex15Name "FollowPath"]
Ind15ComR=
Ind16ComL=[!CommandMeasure MeasureIndex16Name "FollowPath"]
Ind16ComR=
Ind17ComL=[!CommandMeasure MeasureIndex17Name "FollowPath"]
Ind17ComR=
Ind18ComL=[!CommandMeasure MeasureIndex18Name "FollowPath"]
Ind18ComR=
Ind19ComL=[!CommandMeasure MeasureIndex19Name "FollowPath"]
Ind19ComR=
Ind20ComL=[!CommandMeasure MeasureIndex20Name "FollowPath"]
Ind20ComR=
Ind21ComL=[!CommandMeasure MeasureIndex21Name "FollowPath"]
Ind21ComR=
;=========================

DynamicVariables=1
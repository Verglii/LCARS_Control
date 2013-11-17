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

LMY1=145
LMYO=10R

;=================================================!Bangs============================================
;============================================
;Sounds========================================
SoundBeep1=[PLAY "#@#Sounds\Computer\Beep1.wav"]
SoundScreenUp=[PLAY "#@#Sounds\Computer\ScreenUp.wav"]
;==============================================
;Commands1======================================
CoIn_On=[!SetVariable "CompInfo" "0"][!RainmeterWriteKeyValue Variables "CompInfo" "0" "#@#\Inc\Settings.inc"][!EnableMeasureGroup CompInfo]#Fon1##DATABASELinksBorder_On#
CoIn_Off=[!SetVariable "CompInfo" "1"][!RainmeterWriteKeyValue Variables "CompInfo" "1" "#@#\Inc\Settings.inc"][!DisableMeasureGroup CompInfo]
CPU_MEM_On=[!SetVariable "CPU_MEM" "0"][!RainmeterWriteKeyValue Variables "CPU_MEM" "0" "#@#\Inc\Settings.inc"]#Fon1##DATABASELinksBorder_On#
CPU_MEM_Off=[!SetVariable "CPU_MEM" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM" "1" "#@#\Inc\Settings.inc"]
CPU_MEM|N_On=[!SetVariable "CPU_MEM#GR|IND#" "0"][!RainmeterWriteKeyValue Variables "CPU_MEM#GR|IND#" "0" "#@#\Inc\Settings.inc"] [!SetVariable "CPU_MEM#IND|GR#" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM#IND|GR#" "1" "#@#\Inc\Settings.inc"]
CPU_MEM|N_Off=[!SetVariable "CPU_MEM0" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM0" "1" "#@#\Inc\Settings.inc"][!SetVariable "CPU_MEM1" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM1" "1" "#@#\Inc\Settings.inc"]
GR|IND_On=[!SetVariable "GR|IND" "0"][!SetVariable "IND|GR" "1"][!RainmeterWriteKeyValue Variables "GR|IND" "0" "#@#\Inc\Settings.inc"][!RainmeterWriteKeyValue Variables "IND|GR" "1" "#@#\Inc\Settings.inc"]
GR|IND_Off=[!SetVariable "GR|IND" "1"][!SetVariable "IND|GR" "0"][!RainmeterWriteKeyValue Variables "GR|IND" "1" "#@#\Inc\Settings.inc"][!RainmeterWriteKeyValue Variables "IND|GR" "0" "#@#\Inc\Settings.inc"]
DATABASE_On=[!SetVariable "DATABASE" "0"][!RainmeterWriteKeyValue Variables "DATABASE" "0" "#@#\Inc\Settings.inc"]#Fon2##DATABASELinksBorder_Off#
DATABASE_Off=[!SetVariable "DATABASE" "1"][!RainmeterWriteKeyValue Variables "DATABASE" "1" "#@#\Inc\Settings.inc"]
PowerSource_On=[!SetVariable "PowerSource" "0"][!RainmeterWriteKeyValue Variables "PowerSource" "0" "#@#\Inc\Settings.inc"]#Fon3##DATABASELinksBorder_Off#
PowerSource_Off=[!SetVariable "PowerSource" "1"][!RainmeterWriteKeyValue Variables "PowerSource" "1" "#@#\Inc\Settings.inc"]
STEAM_On=[!SetVariable "STEAM_" "0"][!RainmeterWriteKeyValue Variables "STEAM_" "0" "#@#\Inc\Settings.inc"][!CommandMeasure MeasureGamesIcons Update]#Fon2##DATABASELinksBorder_Off#
STEAM_Off=[!SetVariable "STEAM_" "1"][!RainmeterWriteKeyValue Variables "STEAM_" "1" "#@#\Inc\Settings.inc"]
Weather_On=[!SetVariable "Weather_" "0"][!RainmeterWriteKeyValue Variables "Weather_" "0" "#@#\Inc\Settings.inc"]#Fon2##DATABASELinksBorder_Off#
Weather_Off=[!SetVariable "Weather_" "1"][!RainmeterWriteKeyValue Variables "Weather_" "1" "#@#\Inc\Settings.inc"]
Schedule_On=[!SetVariable "Schedule_" "0"][!RainmeterWriteKeyValue Variables "Schedule_" "0" "#@#\Inc\Settings.inc"]#Fon1##DATABASELinksBorder_On#
Schedule_Off=[!SetVariable "Schedule_" "1"][!RainmeterWriteKeyValue Variables "Schedule_" "1" "#@#\Inc\Settings.inc"]
MediaPl_On=[!SetVariable "MediaPl" "0"][!RainmeterWriteKeyValue Variables "MediaPl" "0" "#@#\Inc\Settings.inc"]#Fon1##DATABASELinksBorder_On#
MediaPl_Off=[!SetVariable "MediaPl" "1"][!RainmeterWriteKeyValue Variables "MediaPl" "1" "#@#\Inc\Settings.inc"]


Fon1=[!SetVariable "FONH" "440"][!RainmeterWriteKeyValue Variables "FONH" "440" "#@#\Inc\Settings.inc"][!SetVariable "FONW" "750"][!RainmeterWriteKeyValue Variables "FONW" "750" "#@#\Inc\Settings.inc"][!SetVariable "FONX" "530"][!RainmeterWriteKeyValue Variables "FONX" "530" "#@#\Inc\Settings.inc"][!SetVariable "FONY" "270"][!RainmeterWriteKeyValue Variables "FONY" "270" "#@#\Inc\Settings.inc"]
Fon2=[!SetVariable "FONH" "440"][!RainmeterWriteKeyValue Variables "FONH" "440" "#@#\Inc\Settings.inc"][!SetVariable "FONW" "640"][!RainmeterWriteKeyValue Variables "FONW" "640" "#@#\Inc\Settings.inc"][!SetVariable "FONX" "530"][!RainmeterWriteKeyValue Variables "FONX" "530" "#@#\Inc\Settings.inc"][!SetVariable "FONY" "270"][!RainmeterWriteKeyValue Variables "FONY" "270" "#@#\Inc\Settings.inc"]
Fon3=[!SetVariable "FONH" "185"][!RainmeterWriteKeyValue Variables "FONH" "185" "#@#\Inc\Settings.inc"][!SetVariable "FONW" "490"][!RainmeterWriteKeyValue Variables "FONW" "490" "#@#\Inc\Settings.inc"][!SetVariable "FONX" "680"][!RainmeterWriteKeyValue Variables "FONX" "680" "#@#\Inc\Settings.inc"][!SetVariable "FONY" "270"][!RainmeterWriteKeyValue Variables "FONY" "270" "#@#\Inc\Settings.inc"]
DATABASELinksBorder_On=[!SetVariable "DATABASELinksBorder" "0"][!RainmeterWriteKeyValue Variables "DATABASELinksBorder" "0" "#@#\Inc\Settings.inc"]
DATABASELinksBorder_Off=[!SetVariable "DATABASELinksBorder" "1"][!RainmeterWriteKeyValue Variables "DATABASELinksBorder" "1" "#@#\Inc\Settings.inc"]

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
IcSize=40
NameH=40
NameW=550
IcW=600

IcX1=550
IcX2=600

IcY1=340
IcY2=(#IcY1#+#IcSize#+#IcYD#)
IcY3=(#IcY2#+#IcSize#+#IcYD#)
IcY4=(#IcY3#+#IcSize#+#IcYD#)
IcY5=(#IcY4#+#IcSize#+#IcYD#)
IcY6=(#IcY5#+#IcSize#+#IcYD#)
IcYD=10

;Index commands
LevelUp=[!CommandMeasure MeasurePath "PreviousFolder"] [!CommandMeasure MeasurePath Update]
UpToListCom=[!CommandMeasure MeasurePath "PageUp"]
UpToStringCom=[!CommandMeasure MeasurePath "IndexUp"]
DownToListCom=[!CommandMeasure MeasurePath "PageDown"]
DownToStringCom=[!CommandMeasure MeasurePath "IndexDown"]

Ind1ComL=[!CommandMeasure MeasureIndex1Name "FollowPath"]
Ind1ComR=[!CommandMeasure MeasureIndex1Name "Open"]
Ind2ComL=[!CommandMeasure MeasureIndex2Name "FollowPath"]
Ind2ComR=[!CommandMeasure MeasureIndex2Name "Open"]
Ind3ComL=[!CommandMeasure MeasureIndex3Name "FollowPath"]
Ind3ComR=[!CommandMeasure MeasureIndex3Name "Open"]
Ind4ComL=[!CommandMeasure MeasureIndex4Name "FollowPath"]
Ind4ComR=[!CommandMeasure MeasureIndex4Name "Open"]
Ind5ComL=[!CommandMeasure MeasureIndex5Name "FollowPath"]
Ind5ComR=[!CommandMeasure MeasureIndex5Name "Open"]
Ind6ComL=[!CommandMeasure MeasureIndex6Name "FollowPath"]
Ind6ComR=[!CommandMeasure MeasureIndex6Name "Open"]


RemWay=[!SetVariable "LastPlace" "[MeasurePath]"][!RainmeterWriteKeyValue Variables "LastPlace" "[MeasurePath]" "#@#\Inc\Settings.inc"]
;=========================

;=================================Steam
GameIconX=550
GameIcon1Y=290
GameIcon2Y=410
GameIcon3Y=530
GameIconH=70
GameIconW=100
GameNameH=40

Game1ComL=[!CommandMeasure MeasureGameIndex1Name "Open"]
Game2ComL=[!CommandMeasure MeasureGameIndex2Name "Open"]
Game3ComL=[!CommandMeasure MeasureGameIndex3Name "Open"]
Game4ComL=[!CommandMeasure MeasureGameIndex4Name "Open"]
Game5ComL=[!CommandMeasure MeasureGameIndex5Name "Open"]
Game6ComL=[!CommandMeasure MeasureGameIndex6Name "Open"]
Game7ComL=[!CommandMeasure MeasureGameIndex7Name "Open"]
Game8ComL=[!CommandMeasure MeasureGameIndex8Name "Open"]
Game9ComL=[!CommandMeasure MeasureGameIndex9Name "Open"]

SteamIconX=900
SteamIconY=370

UpListGames=[!CommandMeasure MeasureGamesIcons "PageUp"]
DownListGames=[!CommandMeasure MeasureGamesIcons "PageDown"]

SteamPath=
SteamGame1=
SteamGame2=
SteamGame3=
SteamGame4=
SteamGame5=
SteamGame6=
SteamGame7=
SteamGame8=

IcUpd1=[!CommandMeasure SteamIconView_1 Update]
IcUpd2=[!CommandMeasure SteamIconView_2 Update]
IcUpd3=[!CommandMeasure SteamIconView_3 Update]
IcUpd4=[!CommandMeasure SteamIconView_4 Update]
IcUpd5=[!CommandMeasure SteamIconView_5 Update]
IcUpd6=[!CommandMeasure SteamIconView_6 Update]
IcUpd7=[!CommandMeasure SteamIconView_7 Update]
IcUpd8=[!CommandMeasure SteamIconView_8 Update]

UpListGamesSteam=[!CommandMeasure SteamPathFV "PageUp"]
DownListGamesSteam=[!CommandMeasure SteamPathFV "PageDown"]

SLGames=[steam://open/games]
SLDownl=[steam://open/downloads]
SLFr=[steam://open/friends]
SLSett=[steam://open/settings]
SLInv=[steam://open/inventory]
SLN=[steam://open/news]
;======================Player


;======================Weather
WCity1=[!SetVariable "URL" "http://www.foreca.ru/#Country1#/#City1#"][!RainmeterWriteKeyValue Variables "URL" "http://www.foreca.ru/#Country1#/#City1#" "#@#\Inc\Settings.inc"]
WCity2=[!SetVariable "URL" "http://www.foreca.ru/#Country2#/#City2#"][!RainmeterWriteKeyValue Variables "URL" "http://www.foreca.ru/#Country2#/#City2#" "#@#\Inc\Settings.inc"]
WCity3=[!SetVariable "URL" "http://www.foreca.ru/#Country3#/#City3#"][!RainmeterWriteKeyValue Variables "URL" "http://www.foreca.ru/#Country3#/#City3#" "#@#\Inc\Settings.inc"]
;======================Schedule
Week1=[!SetVariable "WeekNumber" "1"][!RainmeterWriteKeyValue Variables "WeekNumber" "1" "#@#\Inc\Settings.inc"]
Week2=[!SetVariable "WeekNumber" "2"][!RainmeterWriteKeyValue Variables "WeekNumber" "2" "#@#\Inc\Settings.inc"]
HWeek1=[!SetVariable "WeekHNumber" "1"][!RainmeterWriteKeyValue Variables "WeekHNumber" "1" "#@#\Inc\Settings.inc"]
HWeek2=[!SetVariable "WeekHNumber" "2"][!RainmeterWriteKeyValue Variables "WeekHNumber" "2" "#@#\Inc\Settings.inc"]
SchReload=[!CommandMeasure "ScheduleLua" "SpawnText()"]

;======================Settings
LSettings0=[!RainmeterWriteKeyValue Variables "Settings_Stage" "0" "#@#\Inc\Settings.inc"]
LSettings1=[!RainmeterWriteKeyValue Variables "Settings_Stage" "1" "#@#\Inc\Settings.inc"]
LSettings2=[!RainmeterWriteKeyValue Variables "Settings_Stage" "2" "#@#\Inc\Settings.inc"]
LSettings3=[!RainmeterWriteKeyValue Variables "Settings_Stage" "3" "#@#\Inc\Settings.inc"]
LSettings4=[!RainmeterWriteKeyValue Variables "Settings_Stage" "4" "#@#\Inc\Settings.inc"]
LSettings5=[!RainmeterWriteKeyValue Variables "Settings_Stage" "5" "#@#\Inc\Settings.inc"]
LSettings6=[!RainmeterWriteKeyValue Variables "Settings_Stage" "6" "#@#\Inc\Settings.inc"]
LSettings7=[!RainmeterWriteKeyValue Variables "Settings_Stage" "7" "#@#\Inc\Settings.inc"]
LSettings8=[!RainmeterWriteKeyValue Variables "Settings_Stage" "8" "#@#\Inc\Settings.inc"]

TextRus=[!SetVariable "Lang" "RUS"][!RainmeterWriteKeyValue Variables "Lang" "RUS" "#@#\Inc\Settings.inc"]
TextEng=[!SetVariable "Lang" "ENG"][!RainmeterWriteKeyValue Variables "Lang" "ENG" "#@#\Inc\Settings.inc"]

SStLoad=[!CommandMeasure "SettingsLua" "Control()"]

SStage0=[!SetVariable "Settings_Stage" "0"][!RainmeterWriteKeyValue Variables "Settings_Stage" "0" "#@#\Inc\Settings.inc"]
SStage1=[!SetVariable "Settings_Stage" "1"][!RainmeterWriteKeyValue Variables "Settings_Stage" "1" "#@#\Inc\Settings.inc"]
SStage2=[!SetVariable "Settings_Stage" "2"][!RainmeterWriteKeyValue Variables "Settings_Stage" "2" "#@#\Inc\Settings.inc"]
SStage3=[!SetVariable "Settings_Stage" "3"][!RainmeterWriteKeyValue Variables "Settings_Stage" "3" "#@#\Inc\Settings.inc"]
SStage4=[!SetVariable "Settings_Stage" "4"][!RainmeterWriteKeyValue Variables "Settings_Stage" "4" "#@#\Inc\Settings.inc"]
SStage5=[!SetVariable "Settings_Stage" "5"][!RainmeterWriteKeyValue Variables "Settings_Stage" "5" "#@#\Inc\Settings.inc"]
SStage6=[!SetVariable "Settings_Stage" "6"][!RainmeterWriteKeyValue Variables "Settings_Stage" "6" "#@#\Inc\Settings.inc"]
SStage7=[!SetVariable "Settings_Stage" "7"][!RainmeterWriteKeyValue Variables "Settings_Stage" "7" "#@#\Inc\Settings.inc"]
SStage8=[!SetVariable "Settings_Stage" "8"][!RainmeterWriteKeyValue Variables "Settings_Stage" "8" "#@#\Inc\Settings.inc"]
[LMBSet]
Measure=Script
ScriptFile=#@#Inc/LeftMenuButtonsSet.lua

;[LMBUpdater]
;	Meter=Image
;	X=0
;	Y=0
;	H=1
;	W=1
;	SolidColor=00000000
;	DynamicVariables=1
;	OnUpdateAction=!Execute 

[MenuButtonStyle]
	X=5
	H=50
	W=225
	FontFace=#F#
	FontSize=#F3#
	StringAlign=LeftCenter
	SolidColor=#PRI#
	AntiAlias=1
	ClipString=1


[Menu1Button1]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMY1#
	Text=#LMB1_1#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #All_Off# #CoIn_On# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #PRI#]
	DynamicVariables=1
	Hidden=#LMC1#


[Menu1Button2]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_2#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #All_Off# #CPU_MEM_On# #CPU_MEM|N_On# #CPU_On# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #PRI#]
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button3]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_3#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #All_Off# #DATABASE_On# #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#]
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button4]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_4#
	SolidColor=[MeasureBatteryButton]
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #All_Off# #PowerSource_On# #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor [MeasureBatteryButton]]
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button5]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_5#
	SolidColor=[MeasureSteamProcessButton]
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #All_Off# #STEAM_On# #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor [MeasureSteamProcessButton]][!RainmeterRedraw]
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button6]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_6#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #All_Off# #Weather_On# #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!RainmeterRedraw]
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button7]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_7#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #All_Off# #Schedule_On# #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!RainmeterRedraw]
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button8]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_8#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #All_Off# #Sun_On# #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!RainmeterRedraw]
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button9]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_9#
	LeftMouseDownAction=!Execute #LSettings0# [!SetOption #CURRENTSECTION# SolidColor #COL2#]
;	LeftMouseUpAction=!Execute #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #PRI#]#Close1280x768##OpenSettings#
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button10]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_10#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #ControlPanelWin# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #PRI#][!RainmeterRedraw]
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button11]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_11#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #PRI#][!RainmeterRefresh]
	DynamicVariables=1
	Hidden=#LMC1#

[Menu1Button12]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMB1_12#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
;	LeftMouseUpAction=!Execute #Close1280x768# #OpenHide1280x768# #SoundBeep1#
	DynamicVariables=1
	Hidden=#LMC1#



[Menu2Button1]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMY1#
	Text=#LMCT1#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL1#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button2]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT2#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL2#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button3]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT3#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL3#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button4]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT4#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL4#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button5]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT5#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL5#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button6]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT6#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL6#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button7]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT7#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL7#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button8]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT8#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL8#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button9]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT9#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL9#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button10]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT10#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL10#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button11]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT11#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL11#"]
	DynamicVariables=1
	Hidden=#LMC2#

[Menu2Button12]
	Meter=String
	MeterStyle=MenuButtonStyle
	Y=#LMYO#
	Text=#LMCT12#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#]#SoundBeep1#[!RainmeterRedraw]["#LMCL12#"]
	DynamicVariables=1
	Hidden=#LMC2#
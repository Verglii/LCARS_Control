[Elbos6PW]						;Power source
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3#CS#.png
	X=420
	Y=465
	AntiAlias=1
	DynamicVariables=1
	Hidden=#PowerSource#

[Elbos6PWBlock1]
	Meter=Image
	X=420
	Y=525
	W=100
	H=85
	SolidColor=#ELBOS#
	Hidden=#PowerSource#
	DynamicVariables=1

[Elbos7PW]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3#CS#.png
	X=1150
	Y=230
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#PowerSource#

[Elbos7PWBlock1]
	Meter=Image
	X=1180
	Y=290
	W=100
	H=145
	SolidColor=#ELBOS#
	Hidden=#PowerSource#
	DynamicVariables=1

[Elbos8PW]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos5#CS#.png
	X=420
	Y=355
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#PowerSource#

[Elbos8PWBlock1]
	Meter=Image
	X=420
	Y=320
	W=100
	H=35
	SolidColor=#ELBOS#
	Hidden=#PowerSource#
	DynamicVariables=1

[Elbos9PW]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3#CS#.png
	X=1150
	Y=435
	AntiAlias=1
	ImageFlip=Both
	DynamicVariables=1
	Hidden=#PowerSource#


[PowerCoreMeter]
	Meter=Image
	X=550
	Y=270
	ImageName=#@#\Anim\Power\[PowerCoreMeasure]_PRI.png
	Hidden=#PowerSource#
	DynamicVariables=1


[BTNameFunct]
	Meter=String
	Text=#PowerState_#
	X=690
	Y=280
	H=30
	W=230
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	FontColor=#COL2#
	SolidColor=#COL3##Tr_BT#
	Hidden=#PowerSource#
	DynamicVariables=1

[BTState]
	Meter=String
	MeasureName=MeasurePowerStatus
	MeasureName2=MeasurePercent
	Text=%2%  %1
	X=745
	Y=335
	H=30
	W=165
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	FontColor=#PRI#
	Hidden=#PowerSource#
	DynamicVariables=1

[BTLifeTimeName]
	Meter=String
	Text=#PowerTime#
	X=930
	Y=280
	H=30
	W=230
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	FontColor=#COL2#
	SolidColor=#COL3##Tr_BT#
	Hidden=#PowerSource#
	DynamicVariables=1

[BTLifeTime]
	Meter=String
	MeasureName=MeasureLifetime
	X=1000
	Y=335
	H=30
	W=150
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	FontColor=#PRI#
	Hidden=#PowerSource#
	DynamicVariables=1

[ChargeIndicator]
	MeasureName=MeasurePercent
	Meter=Bar
	X=694
	Y=330
	H=46
	W=32
	AntiAlias=1
	BarOrientation=Vertical
	Hidden=#PowerSource#
	DynamicVariables=1

[BatteryImage]
	Meter=Image
	X=690
	Y=320
	ImageName=#@#\Static\BT[MeasurePowerSource]_PRI.png
	Hidden=#PowerSource#
	DynamicVariables=1

[ClockImage]
	Meter=Image
	X=930
	Y=320
	ImageName=#@#\Static\Clock_PRI.png
	Hidden=#PowerSource#
	DynamicVariables=1

[Shotdown]
	Meter=String
	Text=#Shotdown#
	X=745
	Y=465
	H=30
	W=150
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	StringAlign=Center
	SolidColor=#ELBOS#
	Hidden=#PowerSource#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [%windir%\System32\shutdown.exe -s -t 00] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[Reload]
	Meter=String
	MeterStyle=Shotdown
	Text=#Reload#
	X=905
	LeftMouseUpAction=!Execute [%windir%\System32\shutdown.exe -r -t 00] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[Sleep]
	Meter=String
	MeterStyle=Shotdown
	Text=#Hibernation#
	X=1065
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [rundll32.exe powrprof.dll,SetSuspendState] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

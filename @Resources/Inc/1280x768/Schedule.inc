[ScheduleLua]
Measure=Script
ScriptFile=#@#Inc/1280x768/LuaSchedule.lua

[FonGames]
	Meter=Image
	X=0
	Y=0
	H=1
	W=1
	SolidColor=00000000
	Hidden=#Schedule_#
	DynamicVariables=1
	OnUpdateAction=!Execute #SchReload#

[Week1]
	Meter=String
	Text=#Week1Text#
	X=520
	Y=420
	W=100
	H=90
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	SolidColor=#ELBOS#
	Hidden=#Schedule_#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #Week1# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[Week2]
	Meter=String
	MeterStyle=Week1
	Text=#Week2Text#
	Y=510
	H=80
	SolidColor=#ELBOS#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #Week2# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[WeatherSettings]
	Meter=String
	MeterStyle=Week1
	Text=#ScheduleSettings#
	Y=600
	H=80
	SolidColor=#ELBOS#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[IndexDay1Name]
	Meter=String
	X=655
	Y=280
	W=230
	H=50
	FontColor=#COL2#
	FontFace=#F#
	AntiAlias=1
	ClipString=1
	StringAlign=Center
	FontSize=#F5#
	Prefix=‡
	Postfix=‰
	SolidColor=#FONSchedule#
	Hidden=#Schedule_#
	DynamicVariables=1

[IndexDay1Text]
	Meter=String
	X=655
	Y=340
	W=230
	H=310
	FontColor=#COL2#
	FontFace=#F#
	AntiAlias=1
	ClipString=1
	StringAlign=Center
	FontSize=#F3#
	SolidColor=#FONSchedule#
	Hidden=#Schedule_#
	DynamicVariables=1

[IndexDay2Name]
	Meter=String
	MeterStyle=IndexDay1Name
	X=905

[IndexDay2Text]
	Meter=String
	MeterStyle=IndexDay1Text
	X=905

[IndexDay3Name]
	Meter=String
	MeterStyle=IndexDay1Name
	X=1155

[IndexDay3Text]
	Meter=String
	MeterStyle=IndexDay1Text
	X=1155







































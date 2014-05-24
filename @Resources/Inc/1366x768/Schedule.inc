[ScheduleLua]
Measure=Script
ScriptFile=#@#Inc/LuaSchedule.lua

[FonSchedule]
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
	X=606
	Y=370
	W=100
	H=40
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
	Y=10R
	H=40
	SolidColor=#ELBOS#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #Week2# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[WeatherSettings]
	Meter=String
	MeterStyle=Week1
	Text=#ScheduleSettings#
	Y=40R
	H=70
	SolidColor=#ELBOS#
	LeftMouseDownAction=!Execute #LSettings7# [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#]#Close1366x768##OpenSettings#

[HWeek1]
	Meter=String
	Text=#HWeek1Text#
	X=506
	Y=-20R
	W=100
	H=40
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	StringAlign=LeftBottom
	SolidColor=#ELBOS#
	Hidden=#Schedule_#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #HWeek1# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[HWeek2]
	Meter=String
	MeterStyle=Week1
	Text=#HWeek2Text#
	Y=10R
	H=40
	SolidColor=#ELBOS#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #HWeek2# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]


[IndexDay1Name]
	Meter=String
	X=741
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

[IndexDay1Text1]
	Meter=String
	X=r
	Y=60r
	W=230
	H=60
	FontColor=#COL2#
	FontFace=#F#
	AntiAlias=1
	ClipString=1
	StringAlign=Center
	FontSize=#F3#
	SolidColor=#FONSchedule1#
	Hidden=#Schedule_#
	DynamicVariables=1

[IndexDay1Text2]
	Meter=String
	MeterStyle=IndexDay1Text1
	X=r
	Y=R
	SolidColor=#FONSchedule2#

[IndexDay1Text3]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule1#

[IndexDay1Text4]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule2#

[IndexDay1Text5]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule1#

[IndexDay1Text6]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule2#

[IndexDay2Name]
	Meter=String
	MeterStyle=IndexDay1Name
	X=991

[IndexDay2Text1]
	Meter=String
	MeterStyle=IndexDay1Text1
	X=r
	Y=340
	SolidColor=#FONSchedule1#

[IndexDay2Text2]
	Meter=String
	MeterStyle=IndexDay1Text1
	X=r
	Y=R
	SolidColor=#FONSchedule2#

[IndexDay2Text3]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule1#

[IndexDay2Text4]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule2#

[IndexDay2Text5]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule1#

[IndexDay2Text6]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule2#

[IndexDay3Name]
	Meter=String
	MeterStyle=IndexDay1Name
	X=1241

[IndexDay3Text1]
	Meter=String
	MeterStyle=IndexDay1Text1
	X=r
	Y=340
	SolidColor=#FONSchedule1#

[IndexDay3Text2]
	Meter=String
	MeterStyle=IndexDay1Text1
	X=r
	Y=R
	SolidColor=#FONSchedule2#

[IndexDay3Text3]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule1#

[IndexDay3Text4]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule2#

[IndexDay3Text5]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule1#

[IndexDay3Text6]
	MeterStyle=IndexDay1Text1
	Meter=String
	X=r
	Y=R
	SolidColor=#FONSchedule2#


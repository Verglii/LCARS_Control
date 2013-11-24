[Elbos1]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos1#CS#.png
	X=0
	Y=0
	AntiAlias=1
	DynamicVariables=1

[Elbos1Block1]
	Meter=Image
	X=230
	Y=0
	W=10
	H=50
	SolidColor=#ELBOS#
	DynamicVariables=1

[Elbos1Block2]
	Meter=Image
	X=250
	Y=0
	W=260
	H=50
	SolidColor=#ELBOS#
	DynamicVariables=1

[Elbos1End]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos1End#CS#.png
	X=765
	Y=0
	AntiAlias=1
	DynamicVariables=1

[Elbos1OverlayText]
	Meter=STRING
	Text="LCARS-897524"
	X=r
	Y=-5
	FontFace=#F#
	FontSize=#F6#
	FontColor=#COL2#
	StringAlign=Right
	AntiAlias=1
	DynamicVariables=1

[Elbos1Block3]
	Meter=Image
	X=0
	Y=90
	W=200
	H=50
	SolidColor=#ELBOS#
	DynamicVariables=1

[Elbos1Block4]
	Meter=Image
	X=210
	Y=90
	W=110
	H=50
	SolidColor=#ELBOS#
	DynamicVariables=1

[Elbos2]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos2#CS#.png
	X=0
	Y=510r
	AntiAlias=1
	DynamicVariables=1

[Elbos2Block2]
	Meter=Image
	X=230
	Y=30r
	W=10
	H=30
	SolidColor=#ELBOS#
	DynamicVariables=1

[DoneButton]
	Meter=String
	X=455
	Y=R
	H=60
	W=130
	Text=#Done#
	FontFace=#F#
	FontSize=#F4#
	StringAlign=CenterBottom
	SolidColor=#SPEC#
	AntiAlias=1
	ClipString=1
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #SPEC#]#CloseSettings##OpenStart#
	DynamicVariables=1

[Elbos2Block3]
	Meter=Image
	X=250
	Y=-30r
	W=130
	H=30
	SolidColor=#ELBOS#
	DynamicVariables=1

[Elbos3]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3#CS#.png
	X=670
	Y=-30r
	AntiAlias=1
	ImageFlip=Both
	DynamicVariables=1

[Elbos3Block1]
	Meter=Image
	X=530
	Y=30r
	W=130
	H=30
	SolidColor=#ELBOS#
	DynamicVariables=1

[Elbos4]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3_2#CS#.png
	X=670
	Y=90
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1

[Elbos4Block1]
	Meter=Image
	X=550
	Y=90
	W=110
	H=50
	SolidColor=#ELBOS#
	DynamicVariables=1

;=================================ButtonsLeft

[SettingsLua]
Measure=Script
ScriptFile=#@#Inc/Settings.lua

[BLFT0]
	Meter=Button
	ButtonImage=#@#/Buttons/Button2#CS#.png
	X=0
	Y=150
	AntiAlias=1
	ButtonCommand=!Execute #SStage0# #SStLoad# #SoundBeep1#
	DynamicVariables=1

[BLFT0T]
	Meter=String
	X=r
	Y=20r
	H=40
	W=200
	Text=#LMB1_0#
	FontFace=#F#
	FontSize=#F4#
	Group=LeftMenu1
	StringAlign=LeftCenter
	AntiAlias=1
	ClipString=1
	DynamicVariables=1

[BLFT1]
	Meter=Button
	MeterStyle=BLFT0
	Y=30r
	ButtonCommand=!Execute #SStage1# #SStLoad# #SoundBeep1#

[BLFT1T]
	Meter=String
	MeterStyle=BLFT0T
	Y=20r
	Text=#LMB1_1#

[BLFT2]
	Meter=Button
	MeterStyle=BLFT0
	Y=30r
	ButtonCommand=!Execute #SStage2# #SStLoad# #SoundBeep1#

[BLFT2T]
	Meter=String
	MeterStyle=BLFT0T
	Y=20r
	Text=#LMB1_2#

[BLFT3]
	Meter=Button
	MeterStyle=BLFT0
	Y=30r
	ButtonCommand=!Execute #SStage3# #SStLoad# #SoundBeep1#

[BLFT3T]
	Meter=String
	MeterStyle=BLFT0T
	Y=20r
	Text=#LMB1_3#

[BLFT4]
	Meter=Button
	MeterStyle=BLFT0
	Y=30r
	ButtonCommand=!Execute #SStage4# #SStLoad# #SoundBeep1#

[BLFT4T]
	Meter=String
	MeterStyle=BLFT0T
	Y=20r
	Text=#LMB1_4#

[BLFT5]
	Meter=Button
	MeterStyle=BLFT0
	Y=30r
	ButtonCommand=!Execute #SStage5# #SStLoad# #SoundBeep1#

[BLFT5T]
	Meter=String
	MeterStyle=BLFT0T
	Y=20r
	Text=#LMB1_5#

[BLFT6]
	Meter=Button
	MeterStyle=BLFT0
	Y=30r
	ButtonCommand=!Execute #SStage6# #SStLoad# #SoundBeep1#

[BLFT6T]
	Meter=String
	MeterStyle=BLFT0T
	Y=20r
	Text=#LMB1_6#

[BLFT7]
	Meter=Button
	MeterStyle=BLFT0
	Y=30r
	ButtonCommand=!Execute #SStage7# #SStLoad# #SoundBeep1#

[BLFT7T]
	Meter=String
	MeterStyle=BLFT0T
	Y=20r
	Text=#LMB1_7#

[BLFT8]
	Meter=Button
	MeterStyle=BLFT0
	Y=30r
	ButtonCommand=!Execute #SStage8# #SStLoad# #SoundBeep1#

[BLFT8T]
	Meter=String
	MeterStyle=BLFT0T
	Y=20r
	Text=#LMB1_10#

;Lang changers
[English]
	Meter=Button
	ButtonImage=#@#/Buttons/Button1#CS#.png
	X=330
	Y=100
	AntiAlias=1
	ButtonCommand=!Execute #SoundBeep1# #TextEng# [!Refresh]
	DynamicVariables=1

[EnglishT]
	Meter=String
	X=-10R
	Y=15r
	H=30
	W=80
	Text=English
	FontFace=#F#
	FontSize=#F3#
	Group=LeftMenu1
	StringAlign=RightCenter
	AntiAlias=1
	ClipString=1
	DynamicVariables=1

[Russian]
	Meter=Button
	MeterStyle=English
	X=440
	ButtonCommand=!Execute #SoundBeep1# #TextRus# [!Refresh]

[RussianT]
	Meter=String
	MeterStyle=EnglishT
	X=-10R
	Y=15r
	Text=�������
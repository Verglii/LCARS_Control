[Elbos1]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos1#CS#.png
	X=0
	Y=0
	AntiAlias=1

[Elbos1Block1]
	Meter=Image
	X=230
	Y=0
	W=750
	H=50
	SolidColor=#ELBOS#

[Elbos1End]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos1End#CS#.png
	X=1245
	Y=0
	AntiAlias=1

[Elbos1OverlayText]
	Meter=STRING
	Text="LCARS-8923741"
	X=10r
	Y=-5
	FontFace=#F#
	FontSize=#F6#
	FontColor=#COL2#
	StringAlign=Right
	AntiAlias=1

[Elbos2]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos2#CS#.png
	X=0
	Y=650
	AntiAlias=1

[Elbos2Block1]
	Meter=Image
	X=0
	Y=610
	W=200
	H=40
	SolidColor=#ELBOS#

[Elbos3]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3#CS#.png
	X=390
	Y=650
	AntiAlias=1
	ImageFlip=Both

[Elbos3Block1]
	Meter=Image
	X=420
	Y=610
	W=100
	H=40
	SolidColor=#ELBOS#

[Elbos4]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3#CS#.png
	X=420
	Y=230
	AntiAlias=1

[Elbos4Block1]
	Meter=Image
	X=420
	Y=290
	W=100
	H=30
	SolidColor=#ELBOS#

[Elbos5]
	Meter=Image
	ImageName=#@#/Static/Elbos/Elbos3#CS#.png
	X=420
	Y=160
	AntiAlias=1
	ImageFlip=Vertical

[Elbos5Block1]
	Meter=Image
	X=420
	Y=130
	W=100
	H=30
	SolidColor=#ELBOS#

[Elbos5Block2]
	Meter=Image
	X=560
	Y=190
	W=720
	H=30
	SolidColor=#ELBOS#



[LeftMenuAcPan1]
	Meter=String
	X=200
	Y=120
	W=200
	H=30
	Text=#AccessPanel1#
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	AntiAlias=1
	SolidColor=#ELBOS#
	Hidden=#LMC1#
	DynamicVariables=1

[LeftMenuAcPan2]
	Meter=String
	MeterStyle=LeftMenuAcPan1
	Text=#AccessPanel2#
	Hidden=#LMC2#

[LeftMenuChanger1]
	Meter=String
	Text=#AccessPanel2#
	X=380
	Y=710
	W=140
	H=30
	FontFace=#F#
	FontSize=#F3#
	SolidColor=#ELBOS#
	StringAlign=RightBottom
	AntiAlias=1
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #SoundScreenUp# [!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!SetVariable "LMC1" "1"] [!SetVariable "LMC2" "0"][!RainmeterWriteKeyValue Variables "LMC1" "1" "#@#\Inc\Settings.inc"] [!RainmeterWriteKeyValue Variables "LMC2" "0" "#@#\Inc\Settings.inc"][!RainmeterRedraw]
	DynamicVariables=1
	Hidden=#LMC1#

[LeftMenuChanger2]
	Meter=String
	MeterStyle=LeftMenuChanger1
	Text=#AccessPanel1#
	LeftMouseUpAction=!Execute #SoundScreenUp# [!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!SetVariable "LMC1" "0"] [!SetVariable "LMC2" "1"][!RainmeterWriteKeyValue Variables "LMC1" "0" "#@#\Inc\Settings.inc"] [!RainmeterWriteKeyValue Variables "LMC2" "1" "#@#\Inc\Settings.inc"][PLAY "#@#Sounds\Computer\ScreenUp.wav"][!RainmeterRedraw]
	Hidden=#LMC2#
[CompInfoFon]
	Meter=Image
	X=250
	Y=150
	W=440
	H=90
	SolidColor=101010AA
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon1]
	Meter=String
	X=260
	Y=160
	W=160
	H=30
	Text=#LCARSCI_Head_Fon#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon1Button]
	Meter=String
	X=430
	Y=160
	W=80
	H=30
	Text=#CompInfoHeadFon#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt1#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CI_Fon1Input ExecuteBatch 1"] #SoundBeep1#
	DynamicVariables=1

[CI_Fon1Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=160
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CompInfoHeadFon#
	Command1=!Execute [!WriteKeyValue Variables CompInfoHeadFon "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CI_Fon1Test1]
	Meter=Image
	X=5R
	Y=r
	ImageName=#@#/Static/ColorTester1.png
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon1Test1Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoHeadFon#
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon1Test2]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester2.png
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon1Test2Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoHeadFon#
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon1Test3]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester3.png
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon1Test3Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoHeadFon#
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon1Test4]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester4.png
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon1Test4Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoHeadFon#
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon2]
	Meter=String
	X=260
	Y=200
	W=160
	H=30
	Text=#LCARSCI_Normal_Fon#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon2Button]
	Meter=String
	X=430
	Y=200
	W=80
	H=30
	Text=#CompInfoNormalFon#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt1#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CI_Fon2Input ExecuteBatch 1"] #SoundBeep1#
	DynamicVariables=1

[CI_Fon2Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=200
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CompInfoNormalFon#
	Command1=!Execute [!WriteKeyValue Variables CompInfoNormalFon "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CI_Fon2Test1]
	Meter=Image
	X=5R
	Y=r
	ImageName=#@#/Static/ColorTester1.png
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon2Test1Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoNormalFon#
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon2Test2]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester2.png
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon2Test2Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoNormalFon#
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon2Test3]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester3.png
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon2Test3Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoNormalFon#
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon2Test4]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester4.png
	Hidden=#SSt1#
	DynamicVariables=1

[CI_Fon2Test4Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoNormalFon#
	Hidden=#SSt1#
	DynamicVariables=1
[GlobalFon]
	Meter=Image
	X=250
	Y=150
	W=440
	H=440
	SolidColor=15151599
	Hidden=#SSt0#
	DynamicVariables=1

[SidePanelGlobal]
	Meter=Image
	X=700
	Y=170
	W=100
	H=430
	SolidColor=#ELBOS#
	Hidden=#SSt0#
	DynamicVariables=1

[GlobalName]
	Meter=String
	X=260
	Y=160
	W=160
	H=30
	Text=#LCARSUserName#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt0#
	DynamicVariables=1

[GlobalNameChange]
	Meter=String
	X=430
	Y=160
	W=250
	H=30
	Text=#LCARSUserNameVar#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt0#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "ChangeNameVal ExecuteBatch 1"] #SoundBeep1#
	DynamicVariables=1

[ChangeNameVal]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	x=430
	y=160
	W=250
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#LCARSUserNameVar#
	Command1=!Execute[!WriteKeyValue Variables LCARSUserNameVar "$UserInput$" #@#inc/Settings.inc][!Refresh]

[GlobalRank]
	Meter=String
	X=260
	Y=200
	W=160
	H=30
	Text=#LCARSUserRank#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt0#
	DynamicVariables=1

[GlobalRankChange]
	Meter=String
	X=430
	Y=200
	W=250
	H=30
	Text=#LCARSUserRankVar#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt0#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "ChangeRankVal ExecuteBatch 1"] #SoundBeep1#
	DynamicVariables=1

[ChangeRankVal]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	x=430
	y=200
	W=250
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#LCARSUserRankVar#
	Command1=!Execute [!WriteKeyValue Variables LCARSUserRankVar "$UserInput$" #@#inc/Settings.inc][!Refresh]

[GlobalCS]
	Meter=String
	X=260
	Y=275
	W=160
	H=70
	Text=#LCARSColorScheme#
	FontFace=#F#
	FontSize=#F3#
	StringAlign=LeftCenter
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt0#
	DynamicVariables=1

[CSPRI]
	Meter=Image
	X=10R
	Y=-35r
	W=80
	H=30
	SolidColor=#CorrectColorPRI#
	Hidden=#SSt0#
	LeftMouseDownAction=!Execute [!SetVariable "CS" "PRI"][!RainmeterWriteKeyValue Variables "CS" "PRI" "#@#\Inc\Settings.inc"] [!Refresh]
	DynamicVariables=1

[CSSEC]
	Meter=Image
	X=5R
	Y=r
	W=80
	H=30
	SolidColor=#CorrectColorSEC#
	Hidden=#SSt0#
	LeftMouseDownAction=!Execute [!SetVariable "CS" "SEC"][!RainmeterWriteKeyValue Variables "CS" "SEC" "#@#\Inc\Settings.inc"] [!Refresh]
	DynamicVariables=1

[CSANC]
	Meter=Image
	X=5R
	Y=r
	W=80
	H=30
	SolidColor=#CorrectColorANC#
	Hidden=#SSt0#
	DynamicVariables=1

[CSDAT]
	Meter=Image
	X=-250R
	Y=10R
	W=80
	H=30
	SolidColor=#CorrectColorDAT#
	Hidden=#SSt0#
	DynamicVariables=1

[CSRED]
	Meter=Image
	X=5R
	Y=r
	W=80
	H=30
	SolidColor=#CorrectColorRED#
	Hidden=#SSt0#
	DynamicVariables=1

[CSMUL]
	Meter=Image
	X=5R
	Y=r
	W=80
	H=30
	SolidColor=#CorrectColorMUL#
	Hidden=#SSt0#
	DynamicVariables=1

[Global_Fon]
	Meter=String
	X=260
	Y=320
	W=160
	H=30
	Text=#LCARSFon#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt0#
	DynamicVariables=1

[Global_FonChange]
	Meter=String
	X=430
	Y=320
	W=80
	H=30
	Text=#FON#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt0#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "Change_FonChangeVal ExecuteBatch 1"] #SoundBeep1#
	DynamicVariables=1

[Change_FonChangeVal]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=320
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#FON#
	Command1=!Execute [!WriteKeyValue Variables FON "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[FonColorTestFon1]
	Meter=Image
	X=5R
	Y=r
	ImageName=#@#/Static/ColorTester1.png

[FonColorTestCenter1]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#FON#
	DynamicVariables=1

[FonColorTestFon2]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester2.png

[FonColorTestCenter2]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#FON#
	DynamicVariables=1

[FonColorTestFon3]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester3.png

[FonColorTestCenter3]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#FON#
	DynamicVariables=1

[FonColorTestFon4]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester4.png

[FonColorTestCenter4]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#FON#
	DynamicVariables=1































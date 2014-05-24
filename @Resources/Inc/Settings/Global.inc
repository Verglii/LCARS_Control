[GlobalFon]
	Meter=Image
	X=250
	Y=150
	W=440
	H=460
	SolidColor=101010AA
	Hidden=#SSt0#
	DynamicVariables=1

[SidePanelGlobal1]
	Meter=Image
	X=700
	Y=170
	W=100
	H=60
	SolidColor=#ELBOS#
	Hidden=#SSt0#
	DynamicVariables=1

[SidePanelGlobal2]
	Meter=Image
	X=700
	Y=540
	W=100
	H=60
	SolidColor=#ELBOS#
	Hidden=#SSt0#
	DynamicVariables=1

[GlobalQL1]
	Meter=String
	X=700
	Y=260
	W=100
	H=40
	Text=#QL1N#
	FontFace=#F#
	FontSize=#F3#
	StringAlign=LeftCenter
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt0#
	DynamicVariables=1
	LeftMouseDownAction=!Execute [!ShowMeter "ChangeQLButton"] [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "QL" "1"][!SetVariable "QLN" "#QL1N#"][!SetVariable "QLL" "#QL1L#"] #SoundBeep1#

[GlobalQL2]
	Meter=String
	MeterStyle=GlobalQL1
	Y=10R
	Text=#QL2N#
	SolidColor=#PRI#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "QL" "2"][!SetVariable "QLN" "#QL2N#"][!SetVariable "QLL" "#QL2L#"] #SoundBeep1#

[GlobalQL3]
	Meter=String
	MeterStyle=GlobalQL1
	Y=10R
	Text=#QL3N#
	SolidColor=#PRI#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "QL" "3"][!SetVariable "QLN" "#QL3N#"][!SetVariable "QLL" "#QL3L#"] #SoundBeep1#

[GlobalQL4]
	Meter=String
	MeterStyle=GlobalQL1
	Y=10R
	Text=#QL4N#
	SolidColor=#PRI#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "QL" "4"][!SetVariable "QLN" "#QL4N#"][!SetVariable "QLL" "#QL4L#"] #SoundBeep1#

[GlobalQL5]
	Meter=String
	MeterStyle=GlobalQL1
	Y=10R
	Text=#QL5N#
	SolidColor=#PRI#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "QL" "5"][!SetVariable "QLN" "#QL5N#"][!SetVariable "QLL" "#QL5L#"] #SoundBeep1#

[GlobalQL6]
	Meter=String
	MeterStyle=GlobalQL1
	Y=10R
	Text=#QL6N#
	SolidColor=#PRI#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "QL" "6"][!SetVariable "QLN" "#QL6N#"][!SetVariable "QLL" "#QL6L#"] #SoundBeep1#

[ChangeQLButton]
	Meter=String
	X=260
	Y=360
	W=420
	H=30
	Text=#QLAdress# #QL#:  #QLL#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Group=Panel2Set
	Hidden=1
	DynamicVariables=1
	LeftMouseUpAction=!Execute [!PluginBang "Change_QLN ExecuteBatch 1"]

[Change_QLN]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=260
	Y=360
	W=420
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#QLN#
	DynamicVariables=1
	Command1=!Execute [!WriteKeyValue Variables "QL#QL#N" "$UserInput$" #@#inc/Settings.inc][!PluginBang "Change_QLL ExecuteBatch 1"]

[Change_QLL]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=260
	Y=360
	W=420
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#QLL#
	DynamicVariables=1
	Command1=!Execute [!WriteKeyValue Variables "QL#QL#L" "$UserInput$" #@#inc/Settings.inc][!Refresh]

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
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
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
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
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

[CS1]
	Meter=Image
	X=10R
	Y=-35r
	W=80
	H=30
	SolidColor=#CorrectColor1#
	Hidden=#SSt0#
	LeftMouseDownAction=!Execute [!SetVariable "CS" "1"][!RainmeterWriteKeyValue Variables "CS" "1" "#@#\Inc\Settings.inc"] [!Refresh]
	DynamicVariables=1

[CS2]
	Meter=Image
	X=5R
	Y=r
	W=80
	H=30
	SolidColor=#CorrectColor2#
	Hidden=#SSt0#
	LeftMouseDownAction=!Execute [!SetVariable "CS" "2"][!RainmeterWriteKeyValue Variables "CS" "2" "#@#\Inc\Settings.inc"] [!Refresh]
	DynamicVariables=1

[CSANC]
	Meter=Image
	X=5R
	Y=r
	W=80
	H=30
	SolidColor=#CorrectColor3#
	Hidden=#SSt0#
	DynamicVariables=1

[CSDAT]
	Meter=Image
	X=-250R
	Y=10R
	W=80
	H=30
	SolidColor=#CorrectColor4#
	Hidden=#SSt0#
	DynamicVariables=1

[CSRED]
	Meter=Image
	X=5R
	Y=r
	W=80
	H=30
	SolidColor=#CorrectColor5#
	Hidden=#SSt0#
	DynamicVariables=1

[CSMUL]
	Meter=Image
	X=5R
	Y=r
	W=80
	H=30
	SolidColor=#CorrectColor6#
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
	Hidden=#SSt0#
	DynamicVariables=1

[FonColorTestCenter1]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#FON#
	Hidden=#SSt0#
	DynamicVariables=1

[FonColorTestFon2]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester2.png
	Hidden=#SSt0#
	DynamicVariables=1

[FonColorTestCenter2]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#FON#
	Hidden=#SSt0#
	DynamicVariables=1

[FonColorTestFon3]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester3.png
	Hidden=#SSt0#
	DynamicVariables=1

[FonColorTestCenter3]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#FON#
	Hidden=#SSt0#
	DynamicVariables=1

[FonColorTestFon4]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester4.png
	Hidden=#SSt0#
	DynamicVariables=1

[FonColorTestCenter4]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#FON#
	Hidden=#SSt0#
	DynamicVariables=1

[FonLinks]
	Meter=Image
	X=260
	Y=400
	W=420
	H=200
	SolidColor=202020AA
	Hidden=#SSt0#
	DynamicVariables=1

[SettLink1]
	Meter=String
	X=265
	Y=405
	W=95
	H=30
	Text=#SettLink1#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt0#
	DynamicVariables=1
	LeftMouseDownAction=!Execute [!ShowMeter "ChangeNameButton"] [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "1"][!SetVariable "LMCT" "#LMCT1#"][!SetVariable "LMCL" "#LMCL1#"] #SoundBeep1#

[SettLink2]
	Meter=String
	MeterStyle=SettLink1
	X=10R
	SolidColor=#PRI#
	Text=#SettLink2#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "2"][!SetVariable "LMCT" "#LMCT2#"][!SetVariable "LMCL" "#LMCL2#"] #SoundBeep1#

[SettLink3]
	Meter=String
	MeterStyle=SettLink1
	X=10R
	SolidColor=#PRI#
	Text=#SettLink3#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "3"][!SetVariable "LMCT" "#LMCT3#"][!SetVariable "LMCL" "#LMCL3#"] #SoundBeep1#

[SettLink4]
	Meter=String
	MeterStyle=SettLink1
	X=10R
	SolidColor=#PRI#
	Text=#SettLink4#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "4"][!SetVariable "LMCT" "#LMCT4#"][!SetVariable "LMCL" "#LMCL4#"] #SoundBeep1#

[SettLink5]
	Meter=String
	MeterStyle=SettLink1
	Y=5R
	SolidColor=#PRI#
	Text=#SettLink5#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "5"][!SetVariable "LMCT" "#LMCT5#"][!SetVariable "LMCL" "#LMCL5#"] #SoundBeep1#

[SettLink6]
	Meter=String
	MeterStyle=SettLink1
	X=10R
	Y=r
	SolidColor=#PRI#
	Text=#SettLink6#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "6"][!SetVariable "LMCT" "#LMCT6#"][!SetVariable "LMCL" "#LMCL6#"] #SoundBeep1#

[SettLink7]
	Meter=String
	MeterStyle=SettLink1
	X=10R
	Y=r
	SolidColor=#PRI#
	Text=#SettLink7#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "7"][!SetVariable "LMCT" "#LMCT7#"][!SetVariable "LMCL" "#LMCL7#"] #SoundBeep1#

[SettLink8]
	Meter=String
	MeterStyle=SettLink1
	X=10R
	Y=r
	SolidColor=#PRI#
	Text=#SettLink8#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "8"][!SetVariable "LMCT" "#LMCT8#"][!SetVariable "LMCL" "#LMCL8#"] #SoundBeep1#

[SettLink9]
	Meter=String
	MeterStyle=SettLink1
	Y=5R
	SolidColor=#PRI#
	Text=#SettLink9#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "9"][!SetVariable "LMCT" "#LMCT9#"][!SetVariable "LMCL" "#LMCL9#"] #SoundBeep1#

[SettLink10]
	Meter=String
	MeterStyle=SettLink1
	X=10R
	Y=r
	SolidColor=#PRI#
	Text=#SettLink10#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "10"][!SetVariable "LMCT" "#LMCT10#"][!SetVariable "LMCL" "#LMCL10#"] #SoundBeep1#

[SettLink11]
	Meter=String
	MeterStyle=SettLink1
	X=10R
	Y=r
	SolidColor=#PRI#
	Text=#SettLink11#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "11"][!SetVariable "LMCT" "#LMCT11#"][!SetVariable "LMCL" "#LMCL11#"] #SoundBeep1#

[SettLink12]
	Meter=String
	MeterStyle=SettLink1
	X=10R
	Y=r
	SolidColor=#PRI#
	Text=#SettLink12#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "LinkNum" "12"][!SetVariable "LMCT" "#LMCT12#"][!SetVariable "LMCL" "#LMCL12#"] #SoundBeep1#


[ChangeNameButton]
	Meter=String
	X=265
	Y=510
	W=410
	H=85
	Text=#SettingsLinkName# #LinkNum#:  #LMCT##CRLF##SettingsLinkCom# #LinkNum#:  #LMCL#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Group=Panel2Set
	Hidden=1
	DynamicVariables=1
	LeftMouseUpAction=!Execute [!PluginBang "Change_LinkNameVal ExecuteBatch 1"]

[Change_LinkNameVal]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=265
	Y=510
	W=410
	H=85
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#LMCT#
	DynamicVariables=1
	Command1=!Execute [!WriteKeyValue Variables "LMCT#LinkNum#" "$UserInput$" #@#inc/Settings.inc][!PluginBang "Change_LinkComVal ExecuteBatch 1"]

[Change_LinkComVal]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=265
	Y=510
	W=410
	H=85
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#LMCL#
	DynamicVariables=1
	Command1=!Execute [!WriteKeyValue Variables "LMCL#LinkNum#" "$UserInput$" #@#inc/Settings.inc][!Refresh]












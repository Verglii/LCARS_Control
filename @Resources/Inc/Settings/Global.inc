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
	Plugin=InputText.dll
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	x=430
	y=160
	W=250
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue="#LCARSUserNameVar#"
	Command1=!Execute [!SetVariable "LCARSUserNameVar" "$UserInput$"][!RainmeterWriteKeyValue Variables "LCARSUserNameVar" "$UserInput$" "#@#\Inc\Settings.inc"]
	DynamicVariables=1

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
	Plugin=InputText.dll
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	x=430
	y=200
	W=250
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue="#LCARSUserRankVar#"
	Command1=!Execute [!CommandMeasure "SettingsLua" "SetValue(); Value = $UserInput$; Var = LCARSUserRankVar"; Place = #@#Inc/Settings.inc] [!SetVariable "LCARSUserRankVar" "$UserInput$"]
	DynamicVariables=1

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
	W=250
	H=30
	Text=
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
	Plugin=InputText.dll
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	x=430
	y=320
	W=250
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=""
	Command1=!Execute [!RainmeterWriteKeyValue Variables "LCARSUserNameVar" "$UserInput$" "#@#Inc\Settings.inc"]
	DynamicVariables=1


















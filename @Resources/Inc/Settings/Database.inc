[DatabaseFon]
	Meter=Image
	X=250
	Y=150
	W=440
	H=240
	SolidColor=101010AA
	Hidden=#SSt4#
	DynamicVariables=1




[DB_Fon1]
	Meter=String
	X=260
	Y=160
	W=160
	H=30
	Text=#LCARSDB_Head_Fon#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon1Button]
	Meter=String
	X=430
	Y=160
	W=80
	H=30
	Text=#Color_DB_B#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt4#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "DB_Fon1Input ExecuteBatch 1"] #SoundBeep1#
	DynamicVariables=1

[DB_Fon1Input]
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
	DefaultValue=#Color_DB_B#
	Command1=!Execute [!WriteKeyValue Variables Color_DB_B "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[DB_Fon1Test1]
	Meter=Image
	X=5R
	Y=r
	ImageName=#@#/Static/ColorTester1.png
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon1Test1Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#Color_DB_B#
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon1Test2]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester2.png
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon1Test2Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#Color_DB_B#
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon1Test3]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester3.png
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon1Test3Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#Color_DB_B#
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon1Test4]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester4.png
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon1Test4Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#Color_DB_B#
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon2]
	Meter=String
	X=260
	Y=13R
	W=160
	H=30
	Text=#LCARSDB_Normal_Fon#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon2Button]
	Meter=String
	X=430
	Y=200
	W=80
	H=30
	Text=#Color_DB_A#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt4#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "DB_Fon2Input ExecuteBatch 1"] #SoundBeep1#
	DynamicVariables=1

[DB_Fon2Input]
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
	DefaultValue=#Color_DB_A#
	Command1=!Execute [!WriteKeyValue Variables Color_DB_A "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[DB_Fon2Test1]
	Meter=Image
	X=5R
	Y=r
	ImageName=#@#/Static/ColorTester1.png
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon2Test1Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#Color_DB_A#
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon2Test2]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester2.png
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon2Test2Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#Color_DB_A#
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon2Test3]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester3.png
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon2Test3Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#Color_DB_A#
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon2Test4]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester4.png
	Hidden=#SSt4#
	DynamicVariables=1

[DB_Fon2Test4Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#Color_DB_A#
	Hidden=#SSt4#
	DynamicVariables=1

[DatabaseAdressFon]
	Meter=Image
	X=260
	Y=13R
	W=420
	H=140
	SolidColor=202020AA
	Hidden=#SSt4#
	DynamicVariables=1

[DatabaseAdress1]
	Meter=String
	X=5r
	Y=5r
	W=200
	H=30
	Text=#FBLB1Name#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt4#
	DynamicVariables=1
	LeftMouseDownAction=!Execute [!ShowMeter "ChangeAdress"] [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "AdrNum" "1"][!SetVariable "AdrName" "#FBLB1Name#"][!SetVariable "AdrVal" "#FBLB1Path#"] #SoundBeep1#

[DatabaseAdress2]
	Meter=String
	MeterStyle=DatabaseAdress1
	Y=r
	X=10R
	Text=#FBLB2Name#
	SolidColor=#PRI#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "AdrNum" "2"][!SetVariable "AdrName" "#FBLB2Name#"][!SetVariable "AdrVal" "#FBLB2Path#"] #SoundBeep1#

[DatabaseAdress3]
	Meter=String
	MeterStyle=DatabaseAdress1
	X=-210r
	Y=5R
	Text=#FBLB3Name#
	SolidColor=#PRI#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "AdrNum" "3"][!SetVariable "AdrName" "#FBLB3Name#"][!SetVariable "AdrVal" "#FBLB3Path#"] #SoundBeep1#

[DatabaseAdress4]
	Meter=String
	MeterStyle=DatabaseAdress1
	Y=r
	X=10R
	Text=#FBLB4Name#
	SolidColor=#PRI#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#][!SetVariable "AdrNum" "4"][!SetVariable "AdrName" "#FBLB4Name#"][!SetVariable "AdrVal" "#FBLB4Path#"] #SoundBeep1#

[ChangeAdress]
	Meter=String
	X=-410R
	Y=10R
	W=410
	H=55
	Text=#SettingsAdressName# #AdrNum#:  #AdrName##CRLF##SettingsAdressVal# #AdrNum#:  #AdrVal#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Group=Panel2Set
	Hidden=1
	DynamicVariables=1
	LeftMouseUpAction=!Execute [!PluginBang "Change_AdressName ExecuteBatch 1"]

[Change_AdressName]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=265
	Y=320
	W=410
	H=55
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#AdrName#
	DynamicVariables=1
	Command1=!Execute [!WriteKeyValue Variables "FBLB#AdrNum#Name" "$UserInput$" #@#inc/Settings.inc][!PluginBang "Change_AdressVal ExecuteBatch 1"]

[Change_AdressVal]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=265
	Y=320
	W=410
	H=55
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#AdrVal#
	DynamicVariables=1
	Command1=!Execute [!WriteKeyValue Variables "FBLB#AdrNum#Path" "$UserInput$" #@#inc/Settings.inc][!Refresh]

[PowerFon]
	Meter=Image
	X=250
	Y=150
	W=440
	H=90
	SolidColor=101010AA
	Hidden=#SSt5#
	DynamicVariables=1

[PW_Fon1]
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
	Hidden=#SSt5#
	DynamicVariables=1

[PW_Fon1Button]
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
	Hidden=#SSt5#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CI_Fon1Input ExecuteBatch 1"] #SoundBeep1#
	DynamicVariables=1

[PW_Fon1Input]
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

[PW_Fon1Test1]
	Meter=Image
	X=5R
	Y=r
	ImageName=#@#/Static/ColorTester1.png
	Hidden=#SSt5#
	DynamicVariables=1

[PW_Fon1Test1Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoHeadFon#
	Hidden=#SSt5#
	DynamicVariables=1

[PW_Fon1Test2]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester2.png
	Hidden=#SSt5#
	DynamicVariables=1

[PW_Fon1Test2Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoHeadFon#
	Hidden=#SSt5#
	DynamicVariables=1

[PW_Fon1Test3]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester3.png
	Hidden=#SSt5#
	DynamicVariables=1

[PW_Fon1Test3Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoHeadFon#
	Hidden=#SSt5#
	DynamicVariables=1

[PW_Fon1Test4]
	Meter=Image
	X=8R
	Y=-3r
	ImageName=#@#/Static/ColorTester4.png
	Hidden=#SSt5#
	DynamicVariables=1

[PW_Fon1Test4Center]
	Meter=Image
	X=3r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	SolidColor=#CompInfoHeadFon#
	Hidden=#SSt5#
	DynamicVariables=1






; [PW_Font]
	; Meter=String
	; X=260
	; Y=160
	; W=160
	; H=30
	; Text=#LCARSCI_Head_Fon#
	; FontFace=#F#
	; FontSize=#F3#
	; AntiAlias=1
	; ClipString=1
	; SolidColor=#PRI#
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontButton]
	; Meter=String
	; X=430
	; Y=160
	; W=80
	; H=30
	; Text=#CompInfoHeadFon#
	; FontFace=#F#
	; FontSize=#F3#
	; AntiAlias=1
	; ClipString=1
	; SolidColor=#PRI#
	; Hidden=#SSt5#
	; LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	; LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CI_Fon1Input ExecuteBatch 1"] #SoundBeep1#
	; DynamicVariables=1

; [PW_FontInput]
	; Measure=Plugin
	; Plugin=InputText
	; SolidColor=#PRI#
	; FontFace=#F#
	; FontSize=#F3#
	; X=430
	; Y=160
	; W=80
	; H=30
	; AntiAlias=1
	; FocusDismiss=0
	; DefaultValue=#CompInfoHeadFon#
	; Command1=!Execute [!WriteKeyValue Variables CompInfoHeadFon "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

; [PW_FontTest1]
	; Meter=Image
	; X=5R
	; Y=r
	; ImageName=#@#/Static/ColorTester1.png
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest1Center]
	; Meter=Image
	; X=3r
	; Y=3r
	; W=#CTestSize#
	; H=#CTestSize#
	; SolidColor=#CompInfoHeadFon#
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest2]
	; Meter=Image
	; X=8R
	; Y=-3r
	; ImageName=#@#/Static/ColorTester2.png
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest2Center]
	; Meter=Image
	; X=3r
	; Y=3r
	; W=#CTestSize#
	; H=#CTestSize#
	; SolidColor=#CompInfoHeadFon#
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest3]
	; Meter=Image
	; X=8R
	; Y=-3r
	; ImageName=#@#/Static/ColorTester3.png
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest3Center]
	; Meter=Image
	; X=3r
	; Y=3r
	; W=#CTestSize#
	; H=#CTestSize#
	; SolidColor=#CompInfoHeadFon#
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest4]
	; Meter=Image
	; X=8R
	; Y=-3r
	; ImageName=#@#/Static/ColorTester4.png
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest4Center]
	; Meter=Image
	; X=3r
	; Y=3r
	; W=#CTestSize#
	; H=#CTestSize#
	; SolidColor=#CompInfoHeadFon#
	; Hidden=#SSt5#
	; DynamicVariables=1








; [PW_Font]
	; Meter=String
	; X=260
	; Y=160
	; W=160
	; H=30
	; Text=#LCARSCI_Head_Fon#
	; FontFace=#F#
	; FontSize=#F3#
	; AntiAlias=1
	; ClipString=1
	; SolidColor=#PRI#
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontButton]
	; Meter=String
	; X=430
	; Y=160
	; W=80
	; H=30
	; Text=#CompInfoHeadFon#
	; FontFace=#F#
	; FontSize=#F3#
	; AntiAlias=1
	; ClipString=1
	; SolidColor=#PRI#
	; Hidden=#SSt5#
	; LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	; LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CI_Fon1Input ExecuteBatch 1"] #SoundBeep1#
	; DynamicVariables=1

; [PW_FontInput]
	; Measure=Plugin
	; Plugin=InputText
	; SolidColor=#PRI#
	; FontFace=#F#
	; FontSize=#F3#
	; X=430
	; Y=160
	; W=80
	; H=30
	; AntiAlias=1
	; FocusDismiss=0
	; DefaultValue=#CompInfoHeadFon#
	; Command1=!Execute [!WriteKeyValue Variables CompInfoHeadFon "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

; [PW_FontTest1]
	; Meter=Image
	; X=5R
	; Y=r
	; ImageName=#@#/Static/ColorTester1.png
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest1Center]
	; Meter=Image
	; X=3r
	; Y=3r
	; W=#CTestSize#
	; H=#CTestSize#
	; SolidColor=#CompInfoHeadFon#
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest2]
	; Meter=Image
	; X=8R
	; Y=-3r
	; ImageName=#@#/Static/ColorTester2.png
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest2Center]
	; Meter=Image
	; X=3r
	; Y=3r
	; W=#CTestSize#
	; H=#CTestSize#
	; SolidColor=#CompInfoHeadFon#
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest3]
	; Meter=Image
	; X=8R
	; Y=-3r
	; ImageName=#@#/Static/ColorTester3.png
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest3Center]
	; Meter=Image
	; X=3r
	; Y=3r
	; W=#CTestSize#
	; H=#CTestSize#
	; SolidColor=#CompInfoHeadFon#
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest4]
	; Meter=Image
	; X=8R
	; Y=-3r
	; ImageName=#@#/Static/ColorTester4.png
	; Hidden=#SSt5#
	; DynamicVariables=1

; [PW_FontTest4Center]
	; Meter=Image
	; X=3r
	; Y=3r
	; W=#CTestSize#
	; H=#CTestSize#
	; SolidColor=#CompInfoHeadFon#
	; Hidden=#SSt5#
	; DynamicVariables=1
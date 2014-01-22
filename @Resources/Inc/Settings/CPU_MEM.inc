[CM_CoreSet1]
	Meter=String
	X=700
	Y=180
	W=100
	H=25
	Text=1  #LitCore#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#ELBOS#
	Hidden=#SSt2#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "1" #@#inc/Settings.inc] #SoundBeep1#
	DynamicVariables=1

[CM_CoreSet2]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=2  #Lit234Cores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "2" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet3]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=3  #Lit234Cores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "3" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet4]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=4  #Lit234Cores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "4" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet5]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=5  #LitMoreCores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "5" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet6]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=6  #LitMoreCores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "6" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet7]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=7  #LitMoreCores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "7" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet8]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=8  #LitMoreCores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "8" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet9]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=9  #LitMoreCores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "9" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet10]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=10 #LitMoreCores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "10" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet11]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=11 #LitMoreCores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "11" #@#inc/Settings.inc] #SoundBeep1#

[CM_CoreSet12]
	Meter=String
	MeterStyle=CM_CoreSet1
	Y=10R
	Text=12 #LitMoreCores#
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #ELBOS#] [!WriteKeyValue Variables "CPULCount" "12" #@#inc/Settings.inc] #SoundBeep1#

[CPU_MEMFon]
	Meter=Image
	X=250
	Y=150
	W=440
	H=515
	SolidColor=101010AA
	Hidden=#SSt2#
	DynamicVariables=1

[CM_Fon]
	Meter=String
	X=260
	Y=160
	W=160
	H=30
	Text=#LCARSCM_A_Fon#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt2#
	DynamicVariables=1

[CM_FonButton]
	Meter=String
	X=430
	Y=r
	W=80
	H=30
	Text=#CPU_COL_A#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt2#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_FonInput ExecuteBatch 1"] #SoundBeep1#
	DynamicVariables=1

[CM_FonInput]
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
	DefaultValue=#CPU_COL_A#
	Command1=!Execute [!WriteKeyValue Variables CPU_COL_A "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_FonTest1]
	Meter=Image
	X=5R
	Y=r
	ImageName=#@#/Static/ColorTester1.png
	Hidden=#SSt2#
	DynamicVariables=1

[CM_FonTest1Center]
	Meter=String
	X=(3+#CTestSize#/2)r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	Text=A
	StringAlign=Center
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#SSt2#
	DynamicVariables=1

[CM_FonTest2]
	Meter=Image
	X=-4R
	Y=-3r
	ImageName=#@#/Static/ColorTester2.png
	Hidden=#SSt2#
	DynamicVariables=1

[CM_FonTest2Center]
	Meter=String
	X=(3+#CTestSize#/2)r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	Text=A
	StringAlign=Center
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#SSt2#
	DynamicVariables=1

[CM_FonTest3]
	Meter=Image
	X=-4R
	Y=-3r
	ImageName=#@#/Static/ColorTester3.png
	Hidden=#SSt2#
	DynamicVariables=1

[CM_FonTest3Center]
	Meter=String
	X=(3+#CTestSize#/2)r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	Text=A
	StringAlign=Center
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#SSt2#
	DynamicVariables=1

[CM_FonTest4]
	Meter=Image
	X=-4R
	Y=-3r
	ImageName=#@#/Static/ColorTester4.png
	Hidden=#SSt2#
	DynamicVariables=1

[CM_FonTest4Center]
	Meter=String
	X=(3+#CTestSize#/2)r
	Y=3r
	W=#CTestSize#
	H=#CTestSize#
	Text=A
	StringAlign=Center
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#SSt2#
	DynamicVariables=1




[CM_Core1]
	Meter=String
	MeterStyle=CM_Fon
	Y=200
	Text=#LCARSCM_A_Core1#

[CM_Core1Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL1#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core1Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core1Input]
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
	DefaultValue=#CPUCL1#
	Command1=!Execute [!WriteKeyValue Variables CPUCL1 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core1Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core1Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL1#

[CM_Core1Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core1Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL1#

[CM_Core1Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core1Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL1#

[CM_Core1Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core1Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL1#



[CM_Core2]
	Meter=String
	MeterStyle=CM_Fon
	Y=235
	Text=#LCARSCM_A_Core2#

[CM_Core2Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL2#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core2Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core2Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=235
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL2#
	Command1=!Execute [!WriteKeyValue Variables CPUCL2 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core2Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core2Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL2#

[CM_Core2Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core2Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL2#

[CM_Core2Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core2Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL2#

[CM_Core2Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core2Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL2#


[CM_Core3]
	Meter=String
	MeterStyle=CM_Fon
	Y=270
	Text=#LCARSCM_A_Core3#

[CM_Core3Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL3#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core3Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core3Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=270
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL3#
	Command1=!Execute [!WriteKeyValue Variables CPUCL3 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core3Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core3Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL3#

[CM_Core3Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core3Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL3#

[CM_Core3Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core3Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL3#

[CM_Core3Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core3Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL3#


[CM_Core4]
	Meter=String
	MeterStyle=CM_Fon
	Y=305
	Text=#LCARSCM_A_Core4#

[CM_Core4Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL4#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core4Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core4Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=305
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL4#
	Command1=!Execute [!WriteKeyValue Variables CPUCL4 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core4Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core4Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL4#

[CM_Core4Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core4Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL4#

[CM_Core4Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core4Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL4#

[CM_Core4Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core4Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL4#


[CM_Core5]
	Meter=String
	MeterStyle=CM_Fon
	Y=340
	Text=#LCARSCM_A_Core5#

[CM_Core5Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL5#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core5Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core5Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=340
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL5#
	Command1=!Execute [!WriteKeyValue Variables CPUCL5 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core5Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core5Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL5#

[CM_Core5Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core5Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL5#

[CM_Core5Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core5Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL5#

[CM_Core5Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core5Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL5#


[CM_Core6]
	Meter=String
	MeterStyle=CM_Fon
	Y=375
	Text=#LCARSCM_A_Core6#

[CM_Core6Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL6#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core6Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core6Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=375
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL6#
	Command1=!Execute [!WriteKeyValue Variables CPUCL6 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core6Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core6Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL6#

[CM_Core6Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core6Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL6#

[CM_Core6Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core6Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL6#

[CM_Core6Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core6Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL6#


[CM_Core7]
	Meter=String
	MeterStyle=CM_Fon
	Y=410
	Text=#LCARSCM_A_Core7#

[CM_Core7Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL7#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core7Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core7Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=410
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL7#
	Command1=!Execute [!WriteKeyValue Variables CPUCL7 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core7Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core7Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL7#

[CM_Core7Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core7Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL7#

[CM_Core7Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core7Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL7#

[CM_Core7Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core7Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL7#



[CM_Core8]
	Meter=String
	MeterStyle=CM_Fon
	Y=445
	Text=#LCARSCM_A_Core8#

[CM_Core8Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL8#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core8Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core8Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=445
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL8#
	Command1=!Execute [!WriteKeyValue Variables CPUCL8 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core8Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core8Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL8#

[CM_Core8Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core8Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL8#

[CM_Core8Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core8Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL8#

[CM_Core8Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core8Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL8#


[CM_Core9]
	Meter=String
	MeterStyle=CM_Fon
	Y=480
	Text=#LCARSCM_A_Core9#

[CM_Core9Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL9#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core9Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core9Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=480
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL9#
	Command1=!Execute [!WriteKeyValue Variables CPUCL9 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core9Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core9Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL9#

[CM_Core9Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core9Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL9#

[CM_Core9Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core9Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL9#

[CM_Core9Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core9Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL9#


[CM_Core10]
	Meter=String
	MeterStyle=CM_Fon
	Y=515
	Text=#LCARSCM_A_Core10#

[CM_Core10Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL10#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core10Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core10Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=515
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL10#
	Command1=!Execute [!WriteKeyValue Variables CPUCL10 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core10Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core10Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL10#

[CM_Core10Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core10Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL10#

[CM_Core10Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core10Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL10#

[CM_Core10Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core10Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL10#


[CM_Core11]
	Meter=String
	MeterStyle=CM_Fon
	Y=550
	Text=#LCARSCM_A_Core11#

[CM_Core11Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL11#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core11Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core11Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=550
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL11#
	Command1=!Execute [!WriteKeyValue Variables CPUCL11 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core11Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core11Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL11#

[CM_Core11Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core11Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL11#

[CM_Core11Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core11Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL11#

[CM_Core11Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core11Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL11#


[CM_Core12]
	Meter=String
	MeterStyle=CM_Fon
	Y=585
	Text=#LCARSCM_A_Core12#

[CM_Core12Button]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#CPUCL12#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_Core12Input ExecuteBatch 1"] #SoundBeep1#

[CM_Core12Input]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=585
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#CPUCL12#
	Command1=!Execute [!WriteKeyValue Variables CPUCL12 "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_Core12Test1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_Core12Test1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL12#

[CM_Core12Test2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_Core12Test2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL12#

[CM_Core12Test3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_Core12Test3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL12#

[CM_Core12Test4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_Core12Test4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#CPUCL12#

[CM_PhyMem]
	Meter=String
	MeterStyle=CM_Fon
	Y=625
	Text=#LCARSCM_A_PhyMem#

[CM_PhyMemButton]
	Meter=String
	MeterStyle=CM_FonButton
	Y=r
	Text=#RAMCOL#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #PRI#] [!PluginBang "CM_PhyMemInput ExecuteBatch 1"] #SoundBeep1#

[CM_PhyMemInput]
	Measure=Plugin
	Plugin=InputText
	SolidColor=#PRI#
	FontFace=#F#
	FontSize=#F3#
	X=430
	Y=625
	W=80
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue=#RAMCOL#
	Command1=!Execute [!WriteKeyValue Variables RAMCOL "$UserInput$" #@#inc/Colours#CS#.inc][!Refresh]

[CM_PhyMemTest1]
	Meter=Image
	MeterStyle=CM_FonTest1
	X=5R
	Y=r

[CM_PhyMemTest1Center]
	Meter=String
	MeterStyle=CM_FonTest1Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#RAMCOL#

[CM_PhyMemTest2]
	Meter=Image
	MeterStyle=CM_FonTest2
	X=-4R
	Y=-3r

[CM_PhyMemTest2Center]
	Meter=String
	MeterStyle=CM_FonTest2Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#RAMCOL#

[CM_PhyMemTest3]
	Meter=Image
	MeterStyle=CM_FonTest3
	X=-4R
	Y=-3r

[CM_PhyMemTest3Center]
	Meter=String
	MeterStyle=CM_FonTest3Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#RAMCOL#

[CM_PhyMemTest4]
	Meter=Image
	MeterStyle=CM_FonTest4
	X=-4R
	Y=-3r

[CM_PhyMemTest4Center]
	Meter=String
	MeterStyle=CM_FonTest4Center
	X=(3+#CTestSize#/2)r
	Y=3r
	SolidColor=#RAMCOL#
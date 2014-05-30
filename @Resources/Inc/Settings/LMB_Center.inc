[LMBSetProp]
Measure=Script
ScriptFile=#@#Inc/LMBSetProp.lua

[LMB_Center_Fon]
	Meter=Image
	X=250
	Y=140
	W=440
	H=375
	SolidColor=101010AA
	Hidden=#SSt1#
	DynamicVariables=1

[LMButtonSetStyle]
;	Meter=String
	W=140
	H=25
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Hidden=#SSt1#
	DynamicVariables=1
	LeftMouseDownAction=!Execute [!ShowMeterGroup LMButtonSet] #LMBSelToPRI# [!SetOption #CURRENTSECTION# SolidColor #COL2#]

[LMButtonSet1]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=260
	Y=150
	SolidColor=#PRI#
	Text=#LMBF_1#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "1"] #SoundBeep1#

[LMButtonSet2]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_2#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "2"] #SoundBeep1#

[LMButtonSet3]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_3#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "3"] #SoundBeep1#

[LMButtonSet4]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_4#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "4"] #SoundBeep1#

[LMButtonSet5]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_5#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "5"] #SoundBeep1#

[LMButtonSet6]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_6#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "6"] #SoundBeep1#

[LMButtonSet7]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_7#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "7"] #SoundBeep1#

[LMButtonSet8]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_8#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "8"] #SoundBeep1#

[LMButtonSet9]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_9#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "9"] #SoundBeep1#

[LMButtonSet10]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_10#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "10"] #SoundBeep1#

[LMButtonSet11]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_11#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "11"] #SoundBeep1#

[LMButtonSet12]
	Meter=String
	MeterStyle=LMButtonSetStyle
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMBF_12#
	LeftMouseUpAction=!Execute [!SetVariable "LMBSetV" "12"] #SoundBeep1#

[LMButtonSetList_Fon]
	Meter=Image
	X=10R
	Y=145
	W=175
	H=365
	SolidColor=101010AA
	Group=LMButtonSet
	Hidden=1
	DynamicVariables=1

	[LMButtonSetList1]
	Meter=String
	X=5r
	Y=5r
	W=140
	H=25
	Text=#LMB1_1#
	FontFace=#F#
	FontSize=#F3#
	AntiAlias=1
	ClipString=1
	SolidColor=#PRI#
	Group=LMButtonSet
	Hidden=1
	DynamicVariables=1
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "1"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "1" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList2]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_2#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "2"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "2" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList3]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_3#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "3"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "3" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList4]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_4#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "4"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "4" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList5]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_5#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "5"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "5" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList6]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_6#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "6"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "6" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList7]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_7#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "7"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "7" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList8]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_8#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "8"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "8" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList9]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_9#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "9"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "9" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList10]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_10#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "10"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "10" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList11]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_11#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "11"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "11" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetList12]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=r
	Y=5R
	SolidColor=#PRI#
	Text=#LMB1_12#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "12"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "12" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]

[LMButtonSetListOFF]
	Meter=String
	MeterStyle=LMButtonSetList1
	X=15R
	Y=-178R
	W=20
	H=355
	SolidColor=#PRI#
	StringAlign=CenterCenter
	Text=#LMB1_OFF#
	LeftMouseUpAction=!Execute [!SetVariable "LMB#LMBSetV#" "0"][!RainmeterWriteKeyValue Variables "LMB#LMBSetV#" "0" "#@#\Inc\Settings.inc"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #PRI#][!CommandMeasure "LMBSetProp" "Initialize()"]
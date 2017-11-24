[LeftMenuAcPan1]
	Meter=String
	X=230
	Y=155
	W=225
	H=50
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
	X=390
	Y=(#ResY#-45)
	W=120
	H=50
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
	LeftMouseUpAction=!Execute #SoundScreenUp# [!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!SetVariable "LMC1" "0"] [!SetVariable "LMC2" "1"][!RainmeterWriteKeyValue Variables "LMC1" "0" "#@#\Inc\Settings.inc"] [!RainmeterWriteKeyValue Variables "LMC2" "1" "#@#\Inc\Settings.inc"][!RainmeterRedraw]
	Hidden=#LMC2#
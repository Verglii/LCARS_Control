[FBLButton1]					;Browser links
	Meter=String
	X=700
	Y=245
	Text=#FBLB1Name#
	W=140
	H=30
	FontFace=#F#
	FontSize=#F2#
	StringAlign=RightCenter
	SolidColor=#ELBOS#
	AntiAlias=1
	ClipString=1
	DynamicVariables=1
	LeftMouseDownAction=!Execute #MediaPl_Off# #Schedule_Off# #Weather_Off# #STEAM_Off# #PowerSource_Off# #DATABASE_On# #CoIn_Off# #CPU_MEM_Off# #CPU_MEM|N_Off# #CPU_Off# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #PRI#]
	LeftMouseUpAction=!Execute #FBLCom1# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]


[FBLButton2]
	Meter=String
	MeterStyle=FBLButton1
	SolidColor=#ELBOS#
	X=150r
	Text=#FBLB2Name#
	LeftMouseUpAction=!Execute #FBLCom2# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]


[FBLButton3]
	Meter=String
	MeterStyle=FBLButton1
	SolidColor=#ELBOS#
	X=150r
	Text=#FBLB3Name#
	LeftMouseUpAction=!Execute #FBLCom3# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]


[FBLButton4]
	Meter=String
	MeterStyle=FBLButton1
	SolidColor=#ELBOS#
	X=140r
	W=130
	Text=#FBLB4Name#
	LeftMouseUpAction=!Execute #FBLCom4# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[FBLBlock]
	Meter=IMAGE
	X=10r
	Y=230
	W=130
	H=30
	SolidColor=#ELBOS#
	DynamicVariables=1
	Hidden=#DATABASELinksBorder#


[Elbos6DB]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3_#CS#.png
	X=1150
	Y=230
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#DATABASE#

[Elbos6DBBlock1]
	Meter=Image
	X=30r
	Y=290
	W=100
	H=30
	SolidColor=#ELBOS#
	Hidden=#DATABASE#
	DynamicVariables=1

[Elbos7DB]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos5_#CS#.png
	X=r
	Y=610
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#DATABASE#


[DatabaseFind]					;Database control
	Meter=String
	Text=#Search#
	X=520
	Y=420
	W=100
	H=90
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	SolidColor=#ELBOS#
	Hidden=#DATABASE#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!PluginBang "FolderSearchSet ExecuteBatch 1"] #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[DatabaseSettings]
	Meter=String
	Text=#Settings#
	X=r
	Y=90r
	W=100
	H=80
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	SolidColor=#ELBOS#
	Hidden=#DATABASE#
	LeftMouseDownAction=!Execute #LSettings3# [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#]#Close1280x768##OpenSettings#
	DynamicVariables=1

[RemembPath]
	Meter=String
	Text=#Remember#
	X=r
	Y=90r
	W=100
	H=80
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	SolidColor=#ELBOS#
	Hidden=#DATABASE#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #RemWay# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1




[Bin]
	Meter=String
	Text=#RecycleBin#
	X=1180
	Y=460
	W=100
	H=30
	AntiAlias=1
	FontFace=#F#
	FontSize=#F2#
	StringAlign=LeftBottom
	SolidColor=#ELBOS#
	Hidden=#DATABASE#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!RainmeterPluginBang "MeasureBin OpenBin"] #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[Clear]
	Meter=String
	Text=#ClearBin#
	MeterStyle=Bin
	Y=40r
	LeftMouseUpAction=!Execute [!RainmeterPluginBang "MeasureKorz EmptyBin"] #SoundBeep1# [!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[FonFolder]
	Meter=Image
	X=540
	Y=330
	H=310
	W=620
	SolidColor=#FONF#
	Hidden=#DATABASE#
	DynamicVariables=1

[UpToList]
	Meter=Image
	ImageName=#@#\Static\Arrow2.png
	X=1235
	Y=330
	SolidColor=#ELBOS#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #UpToListCom# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[UpToString]
	Meter=Image
	ImageName=#@#\Static\Arrow1.png
	X=1180
	Y=330
	SolidColor=#ELBOS#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #UpToStringCom# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[DownToString]
	Meter=Image
	ImageName=#@#\Static\Arrow1.png
	X=r
	Y=510
	ImageFlip=Vertical
	SolidColor=#ELBOS#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #DownToStringCom# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[DownToList]
	Meter=Image
	ImageName=#@#\Static\Arrow2.png
	X=1235
	Y=r
	ImageFlip=Vertical
	SolidColor=#ELBOS#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #DownToListCom# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[Index1]						;Database links
	Meter=Image
	X=#IcX1#
	Y=#IcY1#
	W=#IcW#
	H=#IcSize#
	Hidden=#DATABASE#
	SolidColor=#Color_DB_A#
	Group=LCARS-PData
	LeftMouseUpAction=!Execute #Ind1ComL#[!RainmeterRedraw]
	RightMouseUpAction=!Execute #Ind1ComR#[!RainmeterRedraw]
	DynamicVariables=1

[Index1Icon]
	Meter=Image
	MeasureName=MeasureIndex1Icon
	X=r
	Y=r
	h=#IcSize#
	w=#IcSize#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1

[Index1Name]
	Meter=String
	MeasureName=MeasureIndex1Name
	X=#IcX2#
	Y=(#IcY1#+#NameH#/2)
	Text="%1"
	W=#NameW#
	H=#NameH#
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F1_#
	StringAlign=LeftCenter
	AntiAlias=1
	ClipString=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1


[Index2]
	Meter=Image
	X=#IcX1#
	Y=#IcY2#
	W=#IcW#
	H=#IcSize#
	Hidden=#DATABASE#
	SolidColor=#Color_DB_A#
	Group=LCARS-PData
	LeftMouseUpAction=!Execute #Ind2ComL#[!RainmeterRedraw]
	RightMouseUpAction=!Execute #Ind2ComR#[!RainmeterRedraw]
	DynamicVariables=1

[Index2Icon]
	Meter=Image
	MeasureName=MeasureIndex2Icon
	X=r
	Y=r
	h=#IcSize#
	w=#IcSize#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1

[Index2Name]
	Meter=String
	MeasureName=MeasureIndex2Name
	X=#IcX2#
	Y=(#IcY2#+#NameH#/2)
	Text="%1"
	W=#NameW#
	H=#NameH#
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F1_#
	StringAlign=LeftCenter
	AntiAlias=1
	ClipString=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1


[Index3]
	Meter=Image
	X=#IcX1#
	Y=#IcY3#
	W=#IcW#
	H=#IcSize#
	Hidden=#DATABASE#
	SolidColor=#Color_DB_A#
	Group=LCARS-PData
	LeftMouseUpAction=!Execute #Ind3ComL#[!RainmeterRedraw]
	RightMouseUpAction=!Execute #Ind3ComR#[!RainmeterRedraw]
	DynamicVariables=1

[Index3Icon]
	Meter=Image
	MeasureName=MeasureIndex3Icon
	X=r
	Y=r
	h=#IcSize#
	w=#IcSize#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1

[Index3Name]
	Meter=String
	MeasureName=MeasureIndex3Name
	X=#IcX2#
	Y=(#IcY3#+#NameH#/2)
	Text="%1"
	W=#NameW#
	H=#NameH#
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F1_#
	StringAlign=LeftCenter
	AntiAlias=1
	ClipString=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1


[Index4]
	Meter=Image
	X=#IcX1#
	Y=#IcY4#
	W=#IcW#
	H=#IcSize#
	Hidden=#DATABASE#
	SolidColor=#Color_DB_A#
	Group=LCARS-PData
	LeftMouseUpAction=!Execute #Ind4ComL#[!RainmeterRedraw]
	RightMouseUpAction=!Execute #Ind4ComR#[!RainmeterRedraw]
	DynamicVariables=1

[Index4Icon]
	Meter=Image
	MeasureName=MeasureIndex4Icon
	X=r
	Y=r
	h=#IcSize#
	w=#IcSize#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1

[Index4Name]
	Meter=String
	MeasureName=MeasureIndex4Name
	X=#IcX2#
	Y=(#IcY4#+#NameH#/2)
	Text="%1"
	W=#NameW#
	H=#NameH#
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F1_#
	StringAlign=LeftCenter
	AntiAlias=1
	ClipString=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1


[Index5]
	Meter=Image
	X=#IcX1#
	Y=#IcY5#
	W=#IcW#
	H=#IcSize#
	Hidden=#DATABASE#
	SolidColor=#Color_DB_A#
	Group=LCARS-PData
	LeftMouseUpAction=!Execute #Ind5ComL#[!RainmeterRedraw]
	RightMouseUpAction=!Execute #Ind5ComR#[!RainmeterRedraw]
	DynamicVariables=1

[Index5Icon]
	Meter=Image
	MeasureName=MeasureIndex5Icon
	X=r
	Y=r
	h=#IcSize#
	w=#IcSize#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1

[Index5Name]
	Meter=String
	MeasureName=MeasureIndex5Name
	X=#IcX2#
	Y=(#IcY5#+#NameH#/2)
	Text="%1"
	W=#NameW#
	H=#NameH#
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F1_#
	StringAlign=LeftCenter
	AntiAlias=1
	ClipString=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1


[Index6]
	Meter=Image
	X=#IcX1#
	Y=#IcY6#
	W=#IcW#
	H=#IcSize#
	Hidden=#DATABASE#
	SolidColor=#Color_DB_A#
	Group=LCARS-PData
	LeftMouseUpAction=!Execute #Ind6ComL#[!RainmeterRedraw]
	RightMouseUpAction=!Execute #Ind6ComR#[!RainmeterRedraw]
	DynamicVariables=1

[Index6Icon]
	Meter=Image
	MeasureName=MeasureIndex6Icon
	X=r
	Y=r
	h=#IcSize#
	w=#IcSize#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1

[Index6Name]
	Meter=String
	MeasureName=MeasureIndex6Name
	X=#IcX2#
	Y=(#IcY6#+#NameH#/2)
	Text="%1"
	W=#NameW#
	H=#NameH#
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F1_#
	StringAlign=LeftCenter
	AntiAlias=1
	ClipString=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	DynamicVariables=1


[FonText]
	Meter=Image
	X=540
	Y=280
	H=40
	W=620
	SolidColor=#FONF#
	Hidden=#DATABASE#
	DynamicVariables=1

[UpLevelFolder]
	Meter=Image
	ImageName=#@#\Static\UpLevel.png
	X=1125
	Y=285
	SolidColor=#Color_DB_B#
	AntiAlias=1
	Hidden=#DATABASE#
	Group=LCARS-PData
	LeftMouseUpAction=!Execute #LevelUp#[!RainmeterRedraw]
	DynamicVariables=1

[FrameText]
	Meter=String
	MeasureName=MeasureFrameworkText
	X=545
	Y=r
	Text="%1"
	AutoScale=1
	W=575
	H=30
	FontFace=#F#
	FontSize=#F3#
	FontColor=#COL2#
	SolidColor=#Color_DB_B#
	StringAlign=Left
	AntiAlias=1
	Clipstring=1
	Hidden=#DATABASE#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!PluginBang "FolderPathSet ExecuteBatch 1"] #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #COL3#99][!RainmeterRedraw]
	DynamicVariables=1


[FrameTextDiscriptionFolder]
	Meter=String
	X=540
	Y=650
	Text=#LeftMouseInfo##CRLF##RightMouseInfo#
	W=620
	H=50
	FontFace=#F#
	FontColor=#COL2#
	FontSize=#F2#
	SolidColor=#FONF#
	StringAlign=Left
	AntiAlias=1
	Clipstring=1
	Hidden=#DATABASE#
	DynamicVariables=1


[FolderPathSet]
	Measure=Plugin
	Plugin=InputText.dll
	SolidColor=#FONPATH#
	StringAlign=Left
	FontFace=#F#
	FontSize=#F3#
	FontColor=#COL2#
	x=545
	y=285
	W=575
	H=30
	AntiAlias=1
	FocusDismiss=0
	DefaultValue="[MeasurePath]"
	Command1=!Execute [!SetOption MeasurePath Path "$UserInput$"] [!CommandMeasure MeasurePath Update]
	DynamicVariables=1

[FolderSearchSet]
	Measure=Plugin
	Plugin=InputText.dll
	SolidColor=#FONPATH#
	StringAlign=Left
	FontFace=#F#
	FontSize=#F3#
	FontColor=#COL2#
	x=545
	y=285
	W=575
	H=30
	AntiAlias=1
	FocusDismiss=1
	DefaultValue=""
	Command1=!Execute [!SetOption MeasurePath WildcardSearch "*$UserInput$*"] [!CommandMeasure MeasurePath Update]
	DynamicVariables=1
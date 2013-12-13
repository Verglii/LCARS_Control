[CPU_MEMSwitchHisto]			;CPU control
	Meter=String
	X=520
	Y=420
	H=90
	W=100
	Text=#Graph#
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	SolidColor=#ELBOS#
	AntiAlias=1
	LeftMouseDownAction=!Execute #GR|IND_On# [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute [!SetVariable "CPU_MEM#GR|IND#" "0"][!RainmeterWriteKeyValue Variables "CPU_MEM#GR|IND#" "0" "#@#\Inc\Settings.inc"] [!SetVariable "CPU_MEM#IND|GR#" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM#IND|GR#" "1" "#@#\Inc\Settings.inc"] #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#]
	DynamicVariables=1
	Hidden=#CPU_MEM#

[CPU_MEMSwitchSettings]
	Meter=String
	X=520
	Y=510
	H=80
	W=100
	Text=#Settings#
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	SolidColor=#ELBOS#
	AntiAlias=1
	ClipString=1
	LeftMouseDownAction=!Execute #LSettings2# [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#]#Close1280x768##OpenSettings#
	DynamicVariables=1
	Hidden=#CPU_MEM#

[CPU_MEMSwitchInd]
	Meter=String
	X=520
	Y=600
	H=80
	W=100
	Text=#Indicators#
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	SolidColor=#ELBOS#
	AntiAlias=1
	ClipString=1
	LeftMouseDownAction=!Execute #GR|IND_Off# [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetVariable "CPU_MEM#GR|IND#" "0"][!RainmeterWriteKeyValue Variables "CPU_MEM#GR|IND#" "0" "#@#\Inc\Settings.inc"] [!SetVariable "CPU_MEM#IND|GR#" "1"][!RainmeterWriteKeyValue Variables "CPU_MEM#IND|GR#" "1" "#@#\Inc\Settings.inc"] #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#]
	DynamicVariables=1
	Hidden=#CPU_MEM#


[CPUHeadName0]
	Meter=String
	X=540
	Y=280
	H=40
	W=500
	Text=#CP_Chrono#
	FontFace=#F#
	FontSize=#F4#
	StringAlign=Left
	SolidColor=#CPU_COL_A#
	AntiAlias=1
	DynamicVariables=1
	Hidden=#CPU_MEM0#

[CPUHeadName1]
	Meter=String
	MeterStyle=CPUHeadName0
	Text=#CP_Ind#
	Hidden=#CPU_MEM1#

[MeterCPUGrid]
	Meter=Image
	MeterStyle=MeterCPUFon
	ImageName=#@#\Static\GridCPU1.png
	Hidden=#CPU_MEM0#

[MeterCPUFon]
	Meter=Image
	x=540
	y=330
	h=250
	w=500
	SolidColor=#CPU_COL_A#
	DynamicVariables=1
	Hidden=#CPU_MEM1#


[MeterCPULine]
	Meter=Line
	MeasureName=MeasureCPU1
	MeasureName2=MeasureCPU2
	MeasureName3=MeasureCPU3
	MeasureName4=MeasureCPU4
	MeasureName5=MeasureCPU5
	MeasureName6=MeasureCPU6
	MeasureName7=MeasureCPU7
	MeasureName8=MeasureCPU8
	MeasureName9=MeasureCPU9
	MeasureName10=MeasureCPU10
	MeasureName11=MeasureCPU11
	MeasureName12=MeasureCPU12
	x=540
	y=330
	w=500
	h=250
	LineColor=#CPUCL1#
	LineColor2=#CPUCL2#
	LineColor3=#CPUCL3#
	LineColor4=#CPUCL4#
	LineColor5=#CPUCL5#
	LineColor6=#CPUCL6#
	LineColor7=#CPUCL7#
	LineColor8=#CPUCL8#
	LineColor9=#CPUCL9#
	LineColor10=#CPUCL10#
	LineColor11=#CPUCL11#
	LineColor12=#CPUCL12#
	LineWidth=2
	LineCount=#CPULCount#
	AntiAlias=1
	DynamicVariables=1
	Hidden=#CPU_MEM0#

[CPU1Value]						;CPU value
	Meter=String
	MeasureName=MeasureCPU1
	Text=#Core1N#  %1%
	X=540
	Y=590
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL1#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU2Value]
	Meter=String
	MeasureName=MeasureCPU2
	Text=#Core2N#  %1%
	X=540
	Y=630
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL2#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU3Value]
	Meter=String
	MeasureName=MeasureCPU3
	Text=#Core3N#  %1%
	X=540
	Y=670
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL3#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU4Value]
	Meter=String
	MeasureName=MeasureCPU4
	Text=#Core4N#  %1%
	X=670
	Y=590
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL4#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU5Value]
	Meter=String
	MeasureName=MeasureCPU5
	Text=#Core5N#  %1%
	X=670
	Y=630
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL5#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU6Value]
	Meter=String
	MeasureName=MeasureCPU6
	Text=#Core6N#  %1%
	X=670
	Y=670
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL6#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU7Value]
	Meter=String
	MeasureName=MeasureCPU7
	Text=#Core7N#  %1%
	X=800
	Y=590
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL7#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU8Value]
	Meter=String
	MeasureName=MeasureCPU8
	Text=#Core8N#  %1%
	X=800
	Y=630
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL8#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU9Value]
	Meter=String
	MeasureName=MeasureCPU9
	Text=#Core9N#  %1%
	X=800
	Y=670
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL9#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU10Value]
	Meter=String
	MeasureName=MeasureCPU10
	Text=#Core10N#  %1%
	X=930
	Y=590
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL10#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU11Value]
	Meter=String
	MeasureName=MeasureCPU11
	Text=#Core11N#  %1%
	X=930
	Y=630
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL11#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[CPU12Value]
	Meter=String
	MeasureName=MeasureCPU12
	Text=#Core12N#  %1%
	X=930
	Y=670
	H=30
	W=110
	FontFace=#F#
	FontSize=#F3#
	FontColor=#CPUCL12#
	AntiAlias=1
	SolidColor=#CPU_COL_A#
	Hidden=#CPU_MEM#
	DynamicVariables=1

[MeterCPUInd1]					;CPU indicator
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=565
	y=(560-[MeasureCPU1]*2.3)
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd2]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=15r
	y=(560-[MeasureCPU2]*2.3)
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd3]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=650
	y=(560-[MeasureCPU3]*2.3)
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd4]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=15r
	y=(560-[MeasureCPU4]*2.3)
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd5]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=735
	y=(560-[MeasureCPU5]*2.3)
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd6]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=15r
	y=(560-[MeasureCPU6]*2.3)
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd7]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=820
	y=(560-[MeasureCPU7]*2.3)
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd8]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=15r
	y=(560-[MeasureCPU8]*2.3)
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd9]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=905
	y=(560-[MeasureCPU9]*2.3)
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd10]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=15r
	y=(560-[MeasureCPU10]*2.3)
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd11]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=990
	y=(560-[MeasureCPU11]*2.3)
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd12]
	Meter=Image
	ImageName=#@#\Static\Indicator1.png
	x=15r
	y=(560-[MeasureCPU12]*2.3)
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd1Line]				;CPU line
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=540
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd2Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=590
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd3Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=625
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd4Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=675
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd5Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=710
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd6Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=760
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd7Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=795
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd8Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=845
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd9Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=880
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd10Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=930
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd11Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=965
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

[MeterCPUInd12Line]
	Meter=Image
	ImageName=#@#\Static\GRIDCPU2.png
	x=1015
	y=340
	DynamicVariables=1
	Hidden=#CPU_MEM1#

;RAM
[RAMHeadName]
	Meter=String
	MeterStyle=CPUHeadName0
	X=1050
	W=220
	Text=#PHY_Chrono#
	Hidden=#CPU_MEM#

[MeterRAMGrid]
	Meter=Image
	MeterStyle=MeterCPUFon
	ImageName=#@#\Static\GRIDRAM1.png
	x=1050
	y=330
	w=220
	Hidden=#CPU_MEM#

[MeterRAMLine]
	Meter=Line
	MeasureName=MeasurePhyMemory
	x=1050
	y=330
	w=220
	h=250
	LineColor=#RAMCOL#
	LineWidth=2
	AntiAlias=1
	DynamicVariables=1
	Hidden=#CPU_MEM#

[RAMBKG]
	Meter=Image
	ImageName=#@#\Static\Isochip.png
	x=1050
	y=590
	SolidColor=#CPU_COL_A#
	DynamicVariables=1
	Hidden=#CPU_MEM#

[RAMValue]
	Meter=String
	MeasureName=MeasurePhyMemory
	MeasureName2=MeasurePhyMemoryTotal
	Text=#Memory#   %1#Byte#/%2#Byte#
	X=1150
	Y=615
	H=35
	W=200
	FontFace=#F#
	FontSize=#F3#
	StringAlign=CenterCenter
	AutoScale=1
	AntiAlias=1
	Hidden=#CPU_MEM#
	DynamicVariables=1
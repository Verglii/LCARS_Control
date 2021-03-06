[ELBOS_block_computer1]
	Meter=Image
	X=430
	Y=340
	H=200
	W=225
	SolidColor=#ELBOS#
	Hidden=#CompInfo#
	DynamicVariables=1

[ELBOS_Settings]
	Meter=String
	Text=#Settings#
	X=R
	Y=110R
	H=100
	W=225
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	AntiAlias=1
	SolidColor=#ELBOS#
	ClipString=1
	Hidden=#CompInfo#
	LeftMouseDownAction=!Execute #LSettings1# [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#]#Close1920x1080##OpenSettings#
	DynamicVariables=1

[ELBOS_block_computer2]
	Meter=Image
	X=-225r
	Y=10r
	H=250
	W=225
	SolidColor=#ELBOS#
	Hidden=#CompInfo#
	DynamicVariables=1
;=============================================================Computer
;Head
[Computer_DiskSpace]			;Computer info
	Meter=String
	Text=#Computer_Disk#
	X=#CX0#
	Y=#CHeY#
	H=#CH1#
	W=#CW0#
	FontFace=#F#
	FontSize=#F5#
	FontColor=#COL2#
	AntiAlias=1
	SolidColor=#CompInfoHeadFon#
	ClipString=1
	Hidden=#CompInfo#
	DynamicVariables=1

[MeterDriveInfo_1]
	Meter=String
	MeasureName=MeasureDiskLabel_1
	MeasureName2=MeasureDiskTotal_1
	MeasureName3=MeasureDiskFree_1
	MeasureName4=MeasureDiskUsed_1
	X=0
	Y=0
	FontSize=10
	FontColor=255,255,255,255
	SolidColor=0,0,0,255
	AntiAlias=1
	AutoScale=1
	Text="#Disk_1#:\(%1): [Total: %2#Byte#][Free: %3#Byte#][Used: %4#Byte#]"
	
[Computer_Head_Name]
	Meter=String
	Text=#Name#
	X=#CX1#
	Y=#CHeY#
	H=#CH1#
	W=#CW1#
	FontFace=#F#
	FontSize=#F5#
	FontColor=#COL2#
	AntiAlias=1
	SolidColor=#CompInfoHeadFon#
	ClipString=1
	Hidden=#CompInfo#
	DynamicVariables=1

[Computer_Head_Value]
	Meter=String
	Text=#Value#
	X=#CX2#
	Y=#CHeY#
	H=#CH1#
	W=#CW2#
	FontFace=#F#
	FontSize=#F5#
	FontColor=#COL2#
	AntiAlias=1
	SolidColor=#CompInfoHeadFon#
	ClipString=1
	Hidden=#CompInfo#
	DynamicVariables=1

;Name
[Computer_PCInfo_Name]
	Meter=String
	Text=#CompName#
	X=#CX1#
	Y=#CY1#
	H=#CH2#
	W=#CW1#
	FontFace=#F#
	FontSize=#F3#
	FontColor=#COL2#
	AntiAlias=1
	StringAlign=LeftCenter
	SolidColor=#CompInfoNormalFon#
	ClipString=1
	Hidden=#CompInfo#
	DynamicVariables=1

[Computer_UserName_Name]
	Meter=String
	Text=#UserName#
	MeterStyle=Computer_PCInfo_Name
	Y=#CY2#

[Computer_Uptime_Name]
	Meter=String
	Text=#Uptime#
	MeterStyle=Computer_PCInfo_Name
	Y=#CY3#

[Computer_OS_Name]
	Meter=String
	Text=#OS#
	MeterStyle=Computer_PCInfo_Name
	Y=#CY4#

[Computer_Proc_Name]
	Meter=String
	Text=#Processes#
	MeterStyle=Computer_PCInfo_Name
	Y=#CY5#

[Computer_TopProc_Name]
	Meter=String
	Text=#Tprocess#
	MeterStyle=Computer_PCInfo_Name
	Y=#CY6#

	
[Computer_CPUName_Name]
	Meter=String
	Text=#CPUName#
	MeterStyle=Computer_PCInfo_Name
	Y=#CY7#

[Computer_GPU_Name]
	Meter=String
	Text=#PriGPU#
	MeterStyle=Computer_PCInfo_Name
	Y=#CY8#

[Computer_PhyMemoryTotal_Name]
	Meter=String
	Text=#RAMT#
	MeterStyle=Computer_PCInfo_Name
	Y=#CY9#


;Value

[Computer_PCInfo_Value]
	Meter=String
	Text=[MeasurePCName]
	X=#CX2#
	Y=#CY1#
	H=#CH2#
	W=#CW2#
	FontFace=#F#
	FontSize=#F3#
	FontColor=#COL2#
	AntiAlias=1
	StringAlign=LeftCenter
	SolidColor=#CompInfoNormalFon#
	ClipString=1
	Hidden=#CompInfo#
	DynamicVariables=1


[Computer_UserName_Value]
	Meter=String
	Text=[MeasureUserName]
	MeterStyle=Computer_PCInfo_Value
	Y=#CY2#


[Computer_Uptime_Value]
	Meter=String
	MeasureName=MeasureUpTime
	Text=%1
	MeterStyle=Computer_PCInfo_Value
	Y=#CY3#
	Postfix=" #Minutes#"


[Computer_OS_Value]
	Meter=String
	MeasureName=MeasureOS
	MeasureName2=MeasureBIT
	Text="%1 %2x"
	MeterStyle=Computer_PCInfo_Value
	Y=#CY4#


[Computer_Proc_Value]
	Meter=String
	MeasureName=MeasureProcesses
	Text=%1
	MeterStyle=Computer_PCInfo_Value
	Y=#CY5#


[Computer_TopProc_Value]
	Meter=String
	MeasureName=MeasureTopProcessName
	MeasureName2=MeasureTopProcessUsage
	Text="%1 (%2%)"
	MeterStyle=Computer_PCInfo_Value
	Y=#CY6#
	Scale=200000


[Computer_CPUName_Value]
	Meter=String
	MeasureName=MeasureCPUName
	Text=%1
	MeterStyle=Computer_PCInfo_Value
	Y=#CY7#


[Computer_GPU_Value]
	Meter=String
	MeasureName=MeasurePrimaryGPU
	Text=%1
	MeterStyle=Computer_PCInfo_Value
	Y=#CY8#


[Computer_PhyMemoryTotal_Value]
	Meter=String
	MeasureName=MeasurePhyMemoryTotal
	Text=%1#Byte#
	MeterStyle=Computer_PCInfo_Value
	Y=#CY9#
	AutoScale=1
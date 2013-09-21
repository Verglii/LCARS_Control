[ELBOS_block_computer]
	Meter=Image
	X=420
	Y=320
	H=290
	W=100
	SolidColor=#ELBOS#
	Hidden=#CompInfo#
	DynamicVariables=1


;=============================================================Computer
;Head
[Computer_Head_Name]			;Computer info
	Meter=String
	Text=#Name#
	X=#CX1#
	Y=#CHeY#
	H=#CH1#
	W=#CW1#
	FontFace=#F#
	FontSize=#F4#
	FontColor=#COL2#
	AntiAlias=1
	SolidColor=#COL3#99
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
	FontSize=#F4#
	FontColor=#COL2#
	AntiAlias=1
	SolidColor=#COL3#99
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
	SolidColor=#PRI#99
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
	SolidColor=#PRI#99
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
	Postfix=" Ã»Õ”“"


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
	Text=%1¡
	MeterStyle=Computer_PCInfo_Value
	Y=#CY9#
	AutoScale=1
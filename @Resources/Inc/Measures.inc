[MeasureTime]
	Measure=Time
	Format="%H:%M:%S"

[MeasureDay]
	Measure=Time
	Format="%A"
	Substitute=#SubstDay#

[MeasureMonth]
	Measure=Time
	Format="%d %B"
	Substitute=#SubstMonth#

[MeasureYear]
	Measure=Time
	Format="%Y"


[MeasurePCName]
	Measure=Plugin
	Plugin=Plugins\SysInfo.dll
	SysInfoType=COMPUTER_NAME
	SysInfoData=1
	Disabled=#CompInfo#

[MeasureUserName]
	Measure=Plugin
	Plugin=Plugins\SysInfo.dll
	SysInfoType=User_NAME
	SysInfoData=1
	Disabled=#CompInfo#

[MeasureUpTime]
	Measure=Uptime
	Substitute="d":" ÄÍÅÉ,",":":" ×ÀÑÎÂ, "
	Disabled=#CompInfo#

[MeasureOS]
	Measure=Registry
	RegHKey=HKEY_LOCAL_MACHINE
	RegKey=SOFTWARE\Microsoft\Windows NT\CurrentVersion
	RegValue=ProductName
	Disabled=#CompInfo#

[MeasureBit]
	Measure=Plugin
	Plugin=Plugins\SysInfo.dll
	SysInfoType=OS_BITS
	Disabled=#CompInfo#

[MeasureProcesses]
	Measure=Plugin
	Plugin=Perfmon.dll
	PerfMonObject="System"
	PerfMonCounter="Processes"
	PerfMonInstance=""
	PerfMonDifference=0
	Disabled=#CompInfo#

[MeasureTopProcessName] 
	Measure=Plugin 
	Plugin=Plugins\AdvancedCPU.dll 
	TopProcess=2 
	CPUExclude=Idle
	UpdateDivider=5
	Disabled=#CompInfo#

[MeasureTopProcessUsage]
	Measure=Plugin
	Plugin=AdvancedCPU
	TopProcess=1
	CPUExclude=Idle
	UpdateDivider=5
	Disabled=#CompInfo#

[MeasureCPUName]
	Measure=Registry
	RegHKey=HKEY_LOCAL_MACHINE
	RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
	RegValue=ProcessorNameString
	UpdateDivider=3600
	Substitute="@":""
	Disabled=#CompInfo#

[MeasurePrimaryGPU]
	Measure=Registry
	RegHKey=HKEY_LOCAL_MACHINE
	RegKey=SOFTWARE\Microsoft\Windows NT\CurrentVersion\Winsat
	RegValue=PrimaryAdapterString
	UpdateDivider=-1
	Disabled=#CompInfo#

[MeasurePhyMemoryTotal]
	Measure=PhysicalMemory
	Total=1
	Substitute=#SubstBit#
	Disabled=#CompInfo#


[MeasureCPU1]
	Measure=CPU
	Disabled=#CP1#
	Processor=1
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU2]
	Measure=CPU
	Disabled=#CP2#
	Processor=2
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU3]
	Measure=CPU
	Disabled=#CP3#
	Processor=3
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU4]
	Measure=CPU
	Disabled=#CP4#
	Processor=4
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU5]
	Measure=CPU
	Disabled=#CP5#
	Processor=5
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU6]
	Measure=CPU
	Disabled=#CP6#
	Processor=6
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU7]
	Measure=CPU
	Disabled=#CP7#
	Processor=7
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU8]
	Measure=CPU
	Disabled=#CP8#
	Processor=8
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU9]
	Measure=CPU
	Disabled=#CP9#
	Processor=9
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU10]
	Measure=CPU
	Disabled=#CP10#
	Processor=10
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU11]
	Measure=CPU
	Disabled=#CP11#
	Processor=11
	UpdateDivider=#Rate1#
	DynamicVariables=1

[MeasureCPU12]
	Measure=CPU
	Disabled=#CP12#
	Processor=12
	UpdateDivider=#Rate1#
	DynamicVariables=1


[MeasurePhyMemory]
	Measure=PhysicalMemory
	Disabled=#CPU_MEM#
	Substitute=#SubstBit#
	DynamicVariables=1


[MeasureBin]
	Measure=Plugin
	Plugin=RecycleManager.dll
	RecycleType=COUNT
	Drives=ALL
	Disabled=#Panel1#
	DynamicVariables=1
	Disabled=#DATABASE#

[MeasureBin2]
	Measure=Plugin
	Plugin=RecycleManager.dll
	RecycleType=SIZE
	Drives=ALL
	Disabled=#Panel1#
	Substitute=#SubstBin#
	DynamicVariables=1
	Disabled=#DATABASE#



[MeasurePath]
	Measure=Plugin
	Plugin=FileView
	Path="#LastPlace#"
	ShowDotDot=0
	ShowHidden=#SHMP#
	HideExtensions=#FORMATMP#
	Count=6
	FinishAction=[!UpdateMeterGroup LCARS-PData]

[MeasureFrameworkText]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=FolderPath
	Index=2
	DynamicVariables=1
	Disabled=#DATABASE#


[MeasureIndex1Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\File Database\icon1.ico"
	Index=1
	DynamicVariables=1
	Disabled=#DATABASE#

[MeasureIndex1Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=FileName
	Index=1
	DynamicVariables=1
	Disabled=#DATABASE#


[MeasureIndex2Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\File Database\icon2.ico"
	Index=2
	DynamicVariables=1
	Disabled=#DATABASE#

[MeasureIndex2Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=FileName
	Index=2
	DynamicVariables=1
	Disabled=#DATABASE#


[MeasureIndex3Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\File Database\icon3.ico"
	Index=3
	DynamicVariables=1
	Disabled=#DATABASE#

[MeasureIndex3Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=FileName
	Index=3
	DynamicVariables=1
	Disabled=#DATABASE#


[MeasureIndex4Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\File Database\icon4.ico"
	Index=4
	DynamicVariables=1
	Disabled=#DATABASE#

[MeasureIndex4Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=FileName
	Index=4
	DynamicVariables=1
	Disabled=#DATABASE#


[MeasureIndex5Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\File Database\icon5.ico"
	Index=5
	DynamicVariables=1
	Disabled=#DATABASE#

[MeasureIndex5Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=FileName
	Index=5
	DynamicVariables=1
	Disabled=#DATABASE#


[MeasureIndex6Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\File Database\icon6.ico"
	Index=6
	DynamicVariables=1
	Disabled=#DATABASE#

[MeasureIndex6Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasurePath]
	Type=FileName
	Index=6
	DynamicVariables=1
	Disabled=#DATABASE#



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
	Disabled=#DATABASE#

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
	Disabled=#DATABASE#


[MeasureCoreTime]
	Measure=Time
	Format="%S"
	Disabled=#PowerSource#

[PowerCoreMeasure]
	Measure=Calc
	Formula=MeasureCoreTime %6
	Disabled=#PowerSource#
	DynamicVariables=1
	UpdateDivider=1
	Disabled=#PowerSource#

[MeasurePowerSource]
	Measure=Plugin
	PlugIn=PlugIns\PowerPlugin.dll
	PowerState=ACLine
	UpdateDivider=200
	Disabled=#PowerSource#

[MeasurePercent]
	Measure=Plugin
	PlugIn=PlugIns\PowerPlugin.dll
	PowerState=Percent
	UpdateDivider=200
	Disabled=#PowerSource#

[MeasureLifetime]
	Measure=Plugin
	PlugIn=PlugIns\PowerPlugin.dll
	PowerState=Lifetime
	Format=%H:%M:%S
	UpdateDivider=200
	Substitute=#BTSubs2#
	Disabled=#PowerSource#

[MeasurePowerStatus]
	Measure=Plugin
	Plugin=Plugins\PowerPlugin.dll
	PowerState=Status
	Substitute=#BTSubs#
	UpdateDivider=200
	Disabled=#PowerSource#



[MeasureSteamProcessButton]
	Measure=Plugin
	Plugin=Process
	ProcessName=Steam.exe
	Substitute="-1":"#UNAV#","1":"#PRI#"

[MeasurePlayer]
	Measure=Plugin
	Plugin=NowPlaying.dll
	PlayerName=#MediaPlayer#
	PlayerType=TITLE
	Substitute="":"N\A"
	IfEqualValue=1
	IfEqualAction=!Execute [!RainmeterShowMeter ErrorMessage][!RainmeterRedraw]

[MeasureMediaProcessButton]
	Measure=Plugin
	Plugin=NowPlaying.dll
	PlayerName=[MeasurePlayer]
	PlayerType=STATUS
	Substitute="0":"#UNAV#","1":"#PRI#"

[MeasureBatteryButton]
	Measure=Plugin
	Plugin=PowerPlugin
	PowerState=ACline
	Substitute="0":"#PRI#","1":"#UNAV#"
	UpdateDivider=200

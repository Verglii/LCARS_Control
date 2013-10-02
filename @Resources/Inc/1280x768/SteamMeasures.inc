[MeasureGamesIcons]
	Measure=Plugin
	Plugin=FileView
	Path="C:\Users\Verglii\Documents\Rainmeter\Skins\LCARS_Control\@Resources\SteamIcons"
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Count=9
	FinishAction=[!UpdateMeterGroup LCARS-Steam]

[MeasureGameIndex1Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\Games\icon1.ico"
	Index=1
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex1Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=FileName
	Index=1
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex2Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\Games\icon2.ico"
	Index=2
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex2Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=FileName
	Index=2
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex3Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\Games\icon3.ico"
	Index=3
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex3Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=FileName
	Index=3
	DynamicVariables=1
	Disabled=#STEAM_#




;;;;;;Steam launch games
[SteamPath]
	Measure=Registry
	RegHKey=HKEY_CURRENT_USER
	RegKey=Software\Valve\Steam
	RegValue=SteamPath
	UpdateDivider=-1
	OnUpdateAction=[!SetVariable SteamPath "[SteamPath]\SteamApps"]
	DynamicVariables=1

[SteamPathFV]
	Measure=Plugin
	Plugin=FileView
	Path=#SteamPath#
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Count=8
	FinishAction=[!UpdateMeterGroup LCARS-SteamIcons]
	DynamicVariables=1

[MeasureSteamGame1Name]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamPathFV]
	Substitute="appmanifest_":""
	Type=FileName
	Group=LCARS-SteamIcons
	Index=1
	DynamicVariables=1
	OnUpdateAction=[!SetVariable SteamGame1 [MeasureSteamGame1Name]] [!UpdateMeasure "Game1_Icon_WP"]
	Disabled=#STEAM_#

[MeasureSteamGame2Name]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamPathFV]
	Substitute="appmanifest_":""
	Type=FileName
	Group=LCARS-SteamIcons
	Index=2
	DynamicVariables=1
	OnUpdateAction=[!SetVariable SteamGame2 [MeasureSteamGame2Name]] [!UpdateMeasure "Game2_Icon_WP"]
	Disabled=#STEAM_#

[MeasureSteamGame3Name]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamPathFV]
	Substitute="appmanifest_":""
	Type=FileName
	Group=LCARS-SteamIcons
	Index=3
	DynamicVariables=1
	OnUpdateAction=[!SetVariable SteamGame3 [MeasureSteamGame3Name]] [!UpdateMeasure "Game3_Icon_WP"]
	Disabled=#STEAM_#

[MeasureSteamGame4Name]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamPathFV]
	Substitute="appmanifest_":""
	Type=FileName
	Group=LCARS-SteamIcons
	Index=4
	DynamicVariables=1
	OnUpdateAction=[!SetVariable SteamGame4 [MeasureSteamGame4Name]] [!UpdateMeasure "Game4_Icon_WP"]
	Disabled=#STEAM_#

[MeasureSteamGame5Name]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamPathFV]
	Substitute="appmanifest_":""
	Type=FileName
	Group=LCARS-SteamIcons
	Index=5
	DynamicVariables=1
	OnUpdateAction=[!SetVariable SteamGame5 [MeasureSteamGame5Name]] [!UpdateMeasure "Game5_Icon_WP"]
	Disabled=#STEAM_#

[MeasureSteamGame6Name]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamPathFV]
	Substitute="appmanifest_":""
	Type=FileName
	Group=LCARS-SteamIcons
	Index=6
	DynamicVariables=1
	OnUpdateAction=[!SetVariable SteamGame6 [MeasureSteamGame6Name]] [!UpdateMeasure "Game6_Icon_WP"]
	Disabled=#STEAM_#

[MeasureSteamGame7Name]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamPathFV]
	Substitute="appmanifest_":""
	Type=FileName
	Group=LCARS-SteamIcons
	Index=7
	DynamicVariables=1
	OnUpdateAction=[!SetVariable SteamGame7 [MeasureSteamGame7Name]] [!UpdateMeasure "Game7_Icon_WP"]
	Disabled=#STEAM_#

[MeasureSteamGame8Name]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamPathFV]
	Substitute="appmanifest_":""
	Type=FileName
	Group=LCARS-SteamIcons
	Index=8
	DynamicVariables=1
	OnUpdateAction=[!SetVariable SteamGame8 [MeasureSteamGame8Name]] [!UpdateMeasure "Game8_Icon_WP"]
	Disabled=#STEAM_#

[Game1_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn3.steampowered.com/v/gfx/apps/#SteamGame1#/header_292x136.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="#SteamGame1#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1

[Game2_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn3.steampowered.com/v/gfx/apps/#SteamGame2#/header_292x136.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="#SteamGame2#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1

[Game3_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn3.steampowered.com/v/gfx/apps/#SteamGame3#/header_292x136.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="#SteamGame3#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1




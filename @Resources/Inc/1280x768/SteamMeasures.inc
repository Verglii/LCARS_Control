[MeasureGamesIcons]
	Measure=Plugin
	Plugin=FileView
	Path="#@#GameIcons"
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Count=9
	FinishAction=[!UpdateMeterGroup LCARS-Steam] #IcUpd1##IcUpd2##IcUpd3##IcUpd4##IcUpd5##IcUpd6##IcUpd7##IcUpd8#

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

[MeasureGameIndex4Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\Games\icon4.ico"
	Index=4
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex4Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=FileName
	Index=4
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex5Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\Games\icon5.ico"
	Index=5
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex5Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=FileName
	Index=5
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex6Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\Games\icon6.ico"
	Index=6
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex6Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=FileName
	Index=6
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex7Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\Games\icon7.ico"
	Index=7
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex7Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=FileName
	Index=7
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex8Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\Games\icon8.ico"
	Index=8
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex8Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=FileName
	Index=8
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex9Icon]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=Icon
	IconSize=Large
	IconPath="#@#\Icons\Games\icon9.ico"
	Index=9
	DynamicVariables=1
	Disabled=#STEAM_#

[MeasureGameIndex9Name]
	Measure=Plugin
	Plugin=FileView
	Path=[MeasureGamesIcons]
	Type=FileName
	Index=9
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
	Extensions="acf"
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
	URL="http://cdn.edgecast.steamstatic.com/steam/apps/#SteamGame1#/header.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="Game_#SteamGame1#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1

[Game2_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn.edgecast.steamstatic.com/steam/apps/#SteamGame2#/header.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="Game_#SteamGame2#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1

[Game3_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn.edgecast.steamstatic.com/steam/apps/#SteamGame3#/header.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="Game_#SteamGame3#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1

[Game4_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn.edgecast.steamstatic.com/steam/apps/#SteamGame4#/header.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="Game_#SteamGame4#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1

[Game5_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn.edgecast.steamstatic.com/steam/apps/#SteamGame5#/header.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="Game_#SteamGame5#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1

[Game6_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn.edgecast.steamstatic.com/steam/apps/#SteamGame6#/header.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="Game_#SteamGame6#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1

[Game7_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn.edgecast.steamstatic.com/steam/apps/#SteamGame7#/header.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="Game_#SteamGame7#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1

[Game8_Icon_WP]
	Measure=Plugin
	Plugin=WebParser.dll
	URL="http://cdn.edgecast.steamstatic.com/steam/apps/#SteamGame8#/header.jpg"
	Group=LCARS-SteamIcons
	UpdateDivider=-1
	Download=1
	DownloadFile="Game_#SteamGame8#.jpg"
	Disabled=#STEAM_#
	DynamicVariables=1


[SteamIconView_1]
	Measure=Plugin
	Plugin=FileView
	Path=#CURRENTPATH#\DownloadFile
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Group=LCARS-SteamIconView
	WildcardSearch=Game_#SteamGame1#*
	Count=1
	DynamicVariables=1
	FinishAction=[!UpdateMeasureGroup LCARS-SteamIconMeasure]

[SteamIconPath_1]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamIconView_1]
	Type=FileName
	Index=1
	DynamicVariables=1
	Group=LCARS-SteamIconMeasure
	Substitute="Game_":""
	Disabled=#STEAM_#

[SteamIconView_2]
	Measure=Plugin
	Plugin=FileView
	Path=#CURRENTPATH#\DownloadFile
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Group=LCARS-SteamIconView
	WildcardSearch=Game_#SteamGame2#*
	Count=1
	DynamicVariables=1

[SteamIconPath_2]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamIconView_2]
	Type=FileName
	Index=1
	DynamicVariables=1
	Group=LCARS-SteamIconMeasure
	Substitute="Game_":""
	Disabled=#STEAM_#

[SteamIconView_3]
	Measure=Plugin
	Plugin=FileView
	Path=#CURRENTPATH#\DownloadFile
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Group=LCARS-SteamIconView
	WildcardSearch=Game_#SteamGame3#*
	Count=1
	DynamicVariables=1

[SteamIconPath_3]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamIconView_3]
	Type=FileName
	Index=1
	DynamicVariables=1
	Group=LCARS-SteamIconMeasure
	Substitute="Game_":""
	Disabled=#STEAM_#

[SteamIconView_4]
	Measure=Plugin
	Plugin=FileView
	Path=#CURRENTPATH#\DownloadFile
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Group=LCARS-SteamIconView
	WildcardSearch=Game_#SteamGame4#*
	Count=1
	DynamicVariables=1

[SteamIconPath_4]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamIconView_4]
	Type=FileName
	Index=1
	DynamicVariables=1
	Substitute="Game_":""
	Disabled=#STEAM_#

[SteamIconView_5]
	Measure=Plugin
	Plugin=FileView
	Path=#CURRENTPATH#\DownloadFile
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Group=LCARS-SteamIconView
	WildcardSearch=Game_#SteamGame5#*
	Count=1
	DynamicVariables=1

[SteamIconPath_5]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamIconView_5]
	Type=FileName
	Index=1
	DynamicVariables=1
	Substitute="Game_":""
	Disabled=#STEAM_#

[SteamIconView_6]
	Measure=Plugin
	Plugin=FileView
	Path=#CURRENTPATH#\DownloadFile
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Group=LCARS-SteamIconView
	WildcardSearch=Game_#SteamGame6#*
	Count=1
	DynamicVariables=1

[SteamIconPath_6]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamIconView_6]
	Type=FileName
	Index=1
	DynamicVariables=1
	Substitute="Game_":""
	Disabled=#STEAM_#

[SteamIconView_7]
	Measure=Plugin
	Plugin=FileView
	Path=#CURRENTPATH#\DownloadFile
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Group=LCARS-SteamIconView
	WildcardSearch=Game_#SteamGame7#*
	Count=1
	DynamicVariables=1

[SteamIconPath_7]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamIconView_7]
	Type=FileName
	Index=1
	DynamicVariables=1
	Substitute="Game_":""
	Disabled=#STEAM_#

[SteamIconView_8]
	Measure=Plugin
	Plugin=FileView
	Path=#CURRENTPATH#\DownloadFile
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Group=LCARS-SteamIconView
	WildcardSearch=Game_#SteamGame8#*
	Count=1
	DynamicVariables=1

[SteamIconPath_8]
	Measure=Plugin
	Plugin=FileView
	Path=[SteamIconView_8]
	Type=FileName
	Index=1
	DynamicVariables=1
	Substitute="Game_":""
	Disabled=#STEAM_#
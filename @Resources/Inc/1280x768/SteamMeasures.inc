[MeasureGamesIcons]
	Measure=Plugin
	Plugin=FileView
	Path="C:\Users\Verglii\Documents\Rainmeter\Skins\LCARS_Control\@Resources\SteamIcons"
	ShowHidden=0
	ShowDotDot=0
	ShowFolder=0
	HideExtensions=1
	Count=3
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
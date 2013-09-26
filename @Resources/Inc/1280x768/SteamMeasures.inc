[MeasureGamesIcons]
	Measure=Plugin
	Plugin=FileView
	Path="#@#\SteamIcons\"
	ShowDotDot=0
	Count=1
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


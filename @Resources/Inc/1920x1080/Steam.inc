[FonGames]
	Meter=Image
	X=540
	Y=280
	H=420
	W=340
	SolidColor=#FONSt#
	Hidden=#STEAM_#
	RightMouseUpAction=["#@#GameIcons"]
	DynamicVariables=1

[FonSteam]
	Meter=Image
	X=10R
	Y=r
	H=420
	W=270
	SolidColor=#FONSt#
	Hidden=#STEAM_#
	DynamicVariables=1

[Elbos6St]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3_#CS#.png
	X=1150
	Y=230
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#STEAM_#

[Elbos6StBlock1]
	Meter=Image
	X=30r
	Y=R
	W=100
	H=30
	SolidColor=#ELBOS#
	Hidden=#STEAM_#
	DynamicVariables=1

[Elbos7St]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos5_#CS#.png
	X=r
	Y=610
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#STEAM_#

[SteamLib]
	Meter=String
	Text=#LibrarySteam#
	X=520
	Y=420
	W=100
	H=90
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	StringAlign=RightBottom
	SolidColor=#ELBOS#
	Hidden=#STEAM_#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #SLGames# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]
	DynamicVariables=1

[SteamSettings]
	Meter=String
	MeterStyle=SteamLib
	Text=#Settings#
	Y=90r
	H=80
	SolidColor=#ELBOS#
	LeftMouseDownAction=!Execute #LSettings5# [!SetOption #CURRENTSECTION# SolidColor #COL2#]
	LeftMouseUpAction=!Execute #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#]#Close1280x768##OpenSettings#

[SteamNews]
	Meter=String
	MeterStyle=SteamLib
	Text=#NewsSteam#
	Y=90r
	H=80
	SolidColor=#ELBOS#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #SLN# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[SteamDownload]
	Meter=String
	MeterStyle=SteamLib
	Text=#SteamDownload#
	X=1180
	SolidColor=#ELBOS#
	StringAlign=LeftBottom
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #SLDownl# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[SteamFriends]
	Meter=String
	MeterStyle=SteamLib
	Text=#SteamFriends#
	X=r
	Y=90r
	H=80
	SolidColor=#ELBOS#
	StringAlign=LeftBottom
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #SLFr# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[SteamHome]
	Meter=String
	MeterStyle=SteamLib
	Text=#SteamInventory#
	X=r
	Y=90r
	H=80
	SolidColor=#ELBOS#
	StringAlign=LeftBottom
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #SLInv# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[Game1]
	Meter=Image
	X=#GameIconX#
	Y=#GameIcon1Y#
	W=#GameIconW#
	H=(#GameIconH#+#GameNameH#)
	Hidden=#STEAM_#
	SolidColor=#FonIconSt#
	Group=LCARS-Steam
	LeftMouseUpAction=#Game1ComL#
	DynamicVariables=1

[Game1Icon]
	Meter=Image
	MeasureName=MeasureGameIndex1Icon
	X=r
	Y=r
	H=#GameIconH#
	W=#GameIconW#
	PreserveAspectRatio=1
	AntiAlias=1
	Hidden=#STEAM_#
	Group=LCARS-Steam
	DynamicVariables=1

[Game1Name]
	Meter=String
	MeasureName=MeasureGameIndex1Name
	X=(#GameIconW#/2)r
	Y=(#GameNameH#/2)R
	Text="%1"
	W=#GameIconW#
	H=#GameNameH#
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F1_#
	StringAlign=CenterCenter
	AntiAlias=1
	ClipString=1
	Hidden=#STEAM_#
	Group=LCARS-Steam
	DynamicVariables=1

[Game2]
	Meter=Image
	MeterStyle=Game1
	X=(#GameIconX#+10+#GameIconW#)
	LeftMouseUpAction=#Game2ComL#
	DynamicVariables=1

[Game2Icon]
	Meter=Image
	X=r
	MeterStyle=Game1Icon
	MeasureName=MeasureGameIndex2Icon
	DynamicVariables=1

[Game2Name]
	Meter=String
	MeterStyle=Game1Name
	MeasureName=MeasureGameIndex2Name
	X=(#GameIconW#/2)r
	Y=(#GameNameH#/2)R
	Text="%1"
	DynamicVariables=1

[Game3]
	Meter=Image
	MeterStyle=Game1
	X=(#GameIconX#+2*(10+#GameIconW#))
	LeftMouseUpAction=#Game3ComL#
	DynamicVariables=1

[Game3Icon]
	Meter=Image
	X=r
	MeterStyle=Game1Icon
	MeasureName=MeasureGameIndex3Icon
	DynamicVariables=1

[Game3Name]
	Meter=String
	MeterStyle=Game1Name
	MeasureName=MeasureGameIndex3Name
	X=(#GameIconW#/2)r
	Y=(#GameNameH#/2)R
	Text="%1"
	DynamicVariables=1

[Game4]
	Meter=Image
	MeterStyle=Game1
	X=#GameIconX#
	Y=#GameIcon2Y#
	LeftMouseUpAction=#Game4ComL#
	DynamicVariables=1

[Game4Icon]
	Meter=Image
	X=r
	Y=r
	MeterStyle=Game1Icon
	MeasureName=MeasureGameIndex4Icon
	DynamicVariables=1

[Game4Name]
	Meter=String
	MeterStyle=Game1Name
	MeasureName=MeasureGameIndex4Name
	X=(#GameIconW#/2)r
	Y=(#GameNameH#/2)R
	Text="%1"
	DynamicVariables=1

[Game5]
	Meter=Image
	MeterStyle=Game1
	X=(#GameIconX#+10+#GameIconW#)
	Y=#GameIcon2Y#
	LeftMouseUpAction=#Game5ComL#
	DynamicVariables=1

[Game5Icon]
	Meter=Image
	X=r
	Y=r
	MeterStyle=Game1Icon
	MeasureName=MeasureGameIndex5Icon
	DynamicVariables=1

[Game5Name]
	Meter=String
	MeterStyle=Game1Name
	MeasureName=MeasureGameIndex5Name
	X=(#GameIconW#/2)r
	Y=(#GameNameH#/2)R
	Text="%1"
	DynamicVariables=1

[Game6]
	Meter=Image
	MeterStyle=Game1
	X=(#GameIconX#+2*(10+#GameIconW#))
	Y=#GameIcon2Y#
	LeftMouseUpAction=#Game6ComL#
	DynamicVariables=1

[Game6Icon]
	Meter=Image
	X=r
	Y=r
	MeterStyle=Game1Icon
	MeasureName=MeasureGameIndex6Icon
	DynamicVariables=1

[Game6Name]
	Meter=String
	MeterStyle=Game1Name
	MeasureName=MeasureGameIndex6Name
	X=(#GameIconW#/2)r
	Y=(#GameNameH#/2)R
	Text="%1"
	DynamicVariables=1

[Game7]
	Meter=Image
	MeterStyle=Game1
	X=#GameIconX#
	Y=#GameIcon3Y#
	LeftMouseUpAction=#Game7ComL#
	DynamicVariables=1

[Game7Icon]
	Meter=Image
	X=r
	Y=r
	MeterStyle=Game1Icon
	MeasureName=MeasureGameIndex7Icon
	DynamicVariables=1

[Game7Name]
	Meter=String
	MeterStyle=Game1Name
	MeasureName=MeasureGameIndex7Name
	X=(#GameIconW#/2)r
	Y=(#GameNameH#/2)R
	Text="%1"
	DynamicVariables=1

[Game8]
	Meter=Image
	MeterStyle=Game1
	X=(#GameIconX#+10+#GameIconW#)
	Y=#GameIcon3Y#
	LeftMouseUpAction=#Game8ComL#
	DynamicVariables=1

[Game8Icon]
	Meter=Image
	X=r
	Y=r
	MeterStyle=Game1Icon
	MeasureName=MeasureGameIndex8Icon
	DynamicVariables=1

[Game8Name]
	Meter=String
	MeterStyle=Game1Name
	MeasureName=MeasureGameIndex8Name
	X=(#GameIconW#/2)r
	Y=(#GameNameH#/2)R
	Text="%1"
	DynamicVariables=1

[Game9]
	Meter=Image
	MeterStyle=Game1
	X=(#GameIconX#+2*(10+#GameIconW#))
	Y=#GameIcon3Y#
	LeftMouseUpAction=#Game9ComL#
	DynamicVariables=1

[Game9Icon]
	Meter=Image
	X=r
	Y=r
	MeterStyle=Game1Icon
	MeasureName=MeasureGameIndex9Icon
	DynamicVariables=1

[Game9Name]
	Meter=String
	MeterStyle=Game1Name
	MeasureName=MeasureGameIndex9Name
	X=(#GameIconW#/2)r
	Y=(#GameNameH#/2)R
	Text="%1"
	DynamicVariables=1

[GameListUp]
	Meter=Button
	ButtonImage=#@#\Buttons\Button4_#CS#.png
	X=645
	Y=650
	AntiAlias=1
	Hidden=#STEAM_#
	Group=LCARS-PData
	ImageAlpha=144
	LeftMouseUpAction=!Execute #UpListGames##SoundBeep1#
	DynamicVariables=1

[GameListDown]
	Meter=Button
	ButtonImage=#@#\Buttons\Button4_#CS#.png
	X=10R
	Y=650
	ImageFlip=Horizontal
	AntiAlias=1
	Hidden=#STEAM_#
	Group=LCARS-PData
	ImageAlpha=144
	LeftMouseUpAction=!Execute #DownListGames##SoundBeep1#
	DynamicVariables=1


;;;;;;SteamIcons
[SteamLogo]
	Meter=Image
	X=900
	Y=290
	ImageName=#@#\Static\Steam.jpg
	Hidden=#STEAM_#
	AntiAlias=1
	LeftMouseUpAction=!Execute #LIcUpd1##LIcUpd2##LIcUpd3##LIcUpd4##LIcUpd5##LIcUpd6##LIcUpd7##LIcUpd8#
	DynamicVariables=1

[SteamIcon1]
	Meter=Image
	X=#SteamIconX#
	Y=#SteamIconY#
	ImageName=#CURRENTPATH#\DownloadFile\Game_[SteamIconPath_1].jpg
	W=120
	H=60
	AntiAlias=1
	PreserveAspectRatio=1
	Group=LCARS-SteamIcons
	Hidden=#STEAM_#
	SolidColor=000000
	LeftMouseUpAction=["steam://rungameid/#SteamGame1#"]
	DynamicVariables=1

[SteamIcon2]
	Meter=Image
	MeterStyle=SteamIcon1
	X=10R
	ImageName=#CURRENTPATH#\DownloadFile\Game_[SteamIconPath_2].jpg
	LeftMouseUpAction=["steam://rungameid/#SteamGame2#"]

[SteamIcon3]
	Meter=Image
	MeterStyle=SteamIcon1
	Y=10R
	ImageName=#CURRENTPATH#\DownloadFile\Game_[SteamIconPath_3].jpg
	LeftMouseUpAction=["steam://rungameid/#SteamGame3#"]

[SteamIcon4]
	Meter=Image
	MeterStyle=SteamIcon1
	X=10R
	Y=r
	ImageName=#CURRENTPATH#\DownloadFile\Game_[SteamIconPath_4].jpg
	LeftMouseUpAction=["steam://rungameid/#SteamGame4#"]

[SteamIcon5]
	Meter=Image
	MeterStyle=SteamIcon1
	Y=10R
	ImageName=#CURRENTPATH#\DownloadFile\Game_[SteamIconPath_5].jpg
	LeftMouseUpAction=["steam://rungameid/#SteamGame5#"]

[SteamIcon6]
	Meter=Image
	MeterStyle=SteamIcon1
	X=10R
	Y=r
	ImageName=#CURRENTPATH#\DownloadFile\Game_[SteamIconPath_6].jpg
	LeftMouseUpAction=["steam://rungameid/#SteamGame6#"]

[SteamIcon7]
	Meter=Image
	MeterStyle=SteamIcon1
	Y=10R
	ImageName=#CURRENTPATH#\DownloadFile\Game_[SteamIconPath_7].jpg
	LeftMouseUpAction=["steam://rungameid/#SteamGame7#"]

[SteamIcon8]
	Meter=Image
	MeterStyle=SteamIcon1
	X=10R
	Y=r
	ImageName=#CURRENTPATH#\DownloadFile\Game_[SteamIconPath_8].jpg
	LeftMouseUpAction=["steam://rungameid/#SteamGame8#"]


[GameSteamListUp]
	Meter=Button
	ButtonImage=#@#\Buttons\Button4_#CS#.png
	X=960
	Y=650
	AntiAlias=1
	Hidden=#STEAM_#
	Group=LCARS-PData
	ImageAlpha=144
	LeftMouseUpAction=!Execute #UpListGamesSteam##SoundBeep1# #IcUpd1##IcUpd2##IcUpd3##IcUpd4##IcUpd5##IcUpd6##IcUpd7##IcUpd8#
	DynamicVariables=1

[GameSteamListDown]
	Meter=Button
	ButtonImage=#@#\Buttons\Button4_#CS#.png
	X=10R
	Y=r
	ImageFlip=Horizontal
	AntiAlias=1
	Hidden=#STEAM_#
	Group=LCARS-PData
	ImageAlpha=144
	LeftMouseUpAction=!Execute #DownListGamesSteam##SoundBeep1# #IcUpd1##IcUpd2##IcUpd3##IcUpd4##IcUpd5##IcUpd6##IcUpd7##IcUpd8#
	DynamicVariables=1

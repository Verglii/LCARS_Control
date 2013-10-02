

[FonGames]
	Meter=Image
	X=540
	Y=280
	H=370
	W=340
	SolidColor=#FONSt#
	Hidden=#STEAM_#
	DynamicVariables=1

[FonSteam]
	Meter=Image
	X=890
	Y=280
	H=370
	W=270
	SolidColor=#FONSt#
	Hidden=#STEAM_#
	DynamicVariables=1

[Elbos6St]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3#CS#.png
	X=1150
	Y=230
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#STEAM_#

[Elbos6StBlock1]
	Meter=Image
	X=1180
	Y=290
	W=100
	H=30
	SolidColor=#ELBOS#
	Hidden=#STEAM_#
	DynamicVariables=1

[Elbos7St]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos5#CS#.png
	X=1180
	Y=610
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#STEAM_#


[Game1]
	Meter=Image
	X=#GameIconX#
	Y=#GameIcon1Y#
	W=#GameIconW#
	H=(#GameIconH#+10+#GameNameH#)
	Hidden=#STEAM_#
	SolidColor=#PRI#90
	Group=LCARS-Steam
	LeftMouseUpAction=
	RightMouseUpAction=
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
	LeftMouseUpAction=
	RightMouseUpAction=
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
	LeftMouseUpAction=
	RightMouseUpAction=
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



;;;;;;SteamIcons



[SteamIcon1]
	Meter=Image
	X=#SteamIconX#
	Y=#SteamIconY#
	ImageName=#CURRENTPATH#\DownloadFile\#SteamGame1#.jpg
	W=120
	H=60
	PreserveAspectRatio=1
	SolidColor=000000
	DynamicVariables=1





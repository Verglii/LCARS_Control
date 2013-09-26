[FonSteam]
	Meter=Image
	X=540
	Y=280
	H=340
	W=730
	SolidColor=#FONSt#
	Hidden=#STEAM_#
	DynamicVariables=1



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
	AntiAlias=1
	Hidden=#STEAM_#
	Group=LCARS-Steam
	DynamicVariables=1

[Game1Name]
	Meter=String
	MeasureName=MeasureGameIndex1Name
	X=r
	Y=(10R+#GameNameH#/2)
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
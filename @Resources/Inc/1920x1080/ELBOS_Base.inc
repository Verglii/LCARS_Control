[Elbos0_UL]
	Meter=IMAGE
	ImageName=#Path_1#Elbos0.png
	X=0
	Y=0
	Hidden=#ELBOS0#
	AntiAlias=1

[Elbos0_BL]
	Meter=IMAGE
	ImageName=#Path_1#Elbos0.png
	X=0
	Y=(#ResY#-15)
	Hidden=#ELBOS0#
	ImageFlip=Vertical
	AntiAlias=1

[Elbos0_UR]
	Meter=IMAGE
	ImageName=#Path_1#Elbos0.png
	X=(#ResX#-15)
	Y=0
	ImageFlip=Horizontal
	Hidden=#ELBOS0#
	AntiAlias=1

[Elbos0_BR]
	Meter=IMAGE
	ImageName=#Path_1#Elbos0.png
	X=(#ResX#-15)
	Y=(#ResY#-15)
	ImageFlip=Both
	Hidden=#ELBOS0#
	AntiAlias=1

[Elbos1]
	Meter=IMAGE
	ImageName=#Path_1##Resolution#/Elbos/Elbos1_#CS#.png
	X=#SteppingCorners#
	Y=#SteppingCorners#
	W=260
	H=90
	AntiAlias=1

[Elbos1Block1]
	Meter=Image
	X=265
	Y=#SteppingCorners#
	W=1277
	H=55
	SolidColor=#ELBOS#

[Elbos1End]
	Meter=IMAGE
	ImageName=#Path_1##Resolution#/Elbos/Elbos1End_#CS#.png
	X=(#ResX#-45)
	Y=#SteppingCorners#
	W=40
	H=55
	AntiAlias=1

[Elbos1OverlayText]
	Meter=STRING
	Text="LCARS-8923741"
	X=10r
	Y=-7
	FontFace=#F#
	FontSize=#F6#
	FontColor=#COL2#
	StringAlign=Right
	AntiAlias=1

[Elbos2]
	Meter=IMAGE
	ImageName=#Path_1##Resolution#/Elbos/Elbos2_#CS#.png
	X=5
	Y=(#ResY#-130)
	W=260
	H=85
	AntiAlias=1

[Elbos2Block1]
	Meter=Image
	X=5
	Y=-65r
	W=225
	H=65
	SolidColor=#ELBOS#

[Elbos3]
	Meter=IMAGE
	ImageName=#Path_1##Resolution#/Elbos/Elbos2_#CS#.png
	X=395
	Y=(#ResY#-130)
	W=260
	H=85
	AntiAlias=1
	ImageFlip=Horizontal

[Elbos3Block1]
	Meter=Image
	X=430
	Y=-40r
	W=225
	H=40
	SolidColor=#ELBOS#
[Elbos0_LU]
	Meter=IMAGE
	ImageName=#@#/Static_#Resolution#/Elbos/Elbos0_#CS#.png
	X=0
	Y=0
	Hidden=#ELBOS0#
	AntiAlias=1

[Elbos0_LB]
	Meter=IMAGE
	ImageName=#@#/Static_#Resolution#/Elbos/Elbos0_#CS#.png
	X=0
	Y=(#ResY#-55)
	Hidden=#ELBOS0#
	ImageFlip=Vertical
	AntiAlias=1

[Elbos0_RU]
	Meter=IMAGE
	ImageName=#@#/Static_#Resolution#/Elbos/Elbos0_#CS#.png
	X=(#ResX#-15)
	Y=0
	ImageFlip=Horizontal
	Hidden=#ELBOS0#
	AntiAlias=1

[Elbos0_RB]
	Meter=IMAGE
	ImageName=#@#/Static_#Resolution#/Elbos/Elbos0_#CS#.png
	X=(#ResX#-15)
	Y=(#ResY#-55)
	ImageFlip=Both
	Hidden=#ELBOS0#
	AntiAlias=1

[Elbos1]
	Meter=IMAGE
	ImageName=#@#/Static_#Resolution#/Elbos/Elbos1_#CS#.png
	X=5
	Y=5
	W=260
	H=90
	AntiAlias=1

[Elbos1Block1]
	Meter=Image
	X=265
	Y=5
	W=1277
	H=55
	SolidColor=#ELBOS#

[Elbos1End]
	Meter=IMAGE
	ImageName=#@#/Static_#Resolution#/Elbos/Elbos1End_#CS#.png
	X=(#ResX#-45)
	Y=5
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

[Elbos5]
	Meter=Image
	ImageName=#@#/Static_#Resolution#/Elbos/Elbos2_#CS#.png
	X=430
	Y=165
	W=260
	H=85
	AntiAlias=1

[Elbos5Block1]
	Meter=Image
	X=430
	Y=145
	W=225
	H=20
	SolidColor=#ELBOS#

[Elbos5Block2]
	Meter=Image
	X=690
	Y=200
	W=1225
	H=50
	SolidColor=#ELBOS#

;[Elbos5Block3]
;	Meter=Image
;	X=1150
;	Y=100
;	W=130
;	H=30
;	SolidColor=#ELBOS#
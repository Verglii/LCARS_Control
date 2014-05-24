;Measures
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


;Meters
[Meter1]
	Meter=String
	Text=#Time#
	X=606
	Y=60
	H=60
	W=100
	StringAlign=RIGHT
	FontFace=#F#
	FontSize=#F4#
	AntiAlias=1
	SolidColor=#COL1#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL1#][Shell:::{E2E7934B-DCE5-43C4-9576-7FE4F75E7480}][PLAY "#@#Sounds\Computer\ScreenUp.wav"][!RainmeterRedraw]

[MeterTimeHMS]
	Meter=String
	MeasureName=MeasureTime
	X=776
	Y=80
	H=100
	W=260
	Text="%1"
	StringAlign=Center
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F8#
	AntiAlias=1

;==========================================================Date==========================================================

[MeterDay]
	Meter=String
	MeasureName=MeasureDay
	X=-130R
	Y=10r
	H=30
	W=100
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F4#
	AntiAlias=1

[MeterMonth]
	Meter=String
	MeasureName=MeasureMonth
	X=0r
	Y=R
	H=30
	W=100
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F4#
	AntiAlias=1

[MeterYear]
	Meter=String
	MeasureName=MeasureYear
	X=0r
	Y=R
	H=30
	W=100
	FontColor=#COL2#
	FontFace=#F#
	FontSize=#F4#
	AntiAlias=1

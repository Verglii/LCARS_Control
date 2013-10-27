[Elbos6Weather]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos3#CS#.png
	X=1150
	Y=230
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#Weather_#

[Elbos6WeatherBlock1]
	Meter=Image
	X=1180
	Y=290
	W=100
	H=30
	SolidColor=#ELBOS#
	Hidden=#Weather_#
	DynamicVariables=1

[Elbos7Weather]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos5#CS#.png
	X=1180
	Y=610
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#Weather_#


[WMeterFonToday]
	Meter=Image
	X=540
	Y=280
	W=200
	H=210
	SolidColor=#FONWeath#
	Hidden=#Weather_#
	DynamicVariables=1

[WMeterD1Text]
	Meter=String
	MeasureName=WMeasureDAY
	X=540
	Y=280
	W=150
	H=50
	FontColor=#COL2#
	FontFace=#F#
	SolidColor=#FONWeath#
	AntiAlias=1
	ClipString=1
	FontSize=#F5#
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterIconWet]
	Meter=Image
	MeasureName=WMeasureWET
	Path="#@#Static/Wind"
	X=690
	Y=280
	W=50
	H=50
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterIconD1]
	Meter=Image
	MeasureName=WMeasureWeatherIconD1
	Path="#@#Static/WeatherIcons"
	X=540
	Y=330
	W=200
	H=160
	PreserveAspectRatio=1
	AntiAlias=1
	Hidden=#Weather_#
	DynamicVariables=1

[WMeterName]
	Meter=String
	MeasureName=WMeasureName
	X=1010
	Y=330
	W=300
	H=100
	FontColor=#COL2#
	FontFace=#F#
	StringAlign=CenterCenter
	SolidColor=#FONWeath#
	AntiAlias=1
	ClipString=1
	FontSize=#F5#
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterTMAX1]
	Meter=String
	MeasureName=WMeasureTMAX
	X=800
	Y=330
	W=100
	H=100
	FontColor=#COL2#
	FontFace=#F#
	StringAlign=CenterCenter
	AntiAlias=1
	ClipString=1
	SolidColor=#FONWeath#
	FontSize=#F5#
	Postfix=" °C"
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterTMIN1]
	Meter=String
	MeterStyle=WMeterTMAX1
	MeasureName=WMeasureTMIN
	Y=440

[WMeterON]
	Meter=String
	MeasureName=WMeasureON
	X=860
	Y=390
	W=300
	H=25
	FontSize=#F2#
	FontColor=#COL2#
	SolidColor=#FONWeath#
	FontFace=#F#
	AntiAlias=1
	ClipString=1
	Prefix="Ощущаемая температура: "
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterFD]
	Meter=String
	MeterStyle=WMeterON
	MeasureName=WMeasureFD
	Y=R
	Prefix="Давленение: "


[WMeterOW]
	Meter=String
	MeterStyle=WMeterON
	MeasureName=WMeasureOW
	Y=R
	Prefix="Влажность: "

[WMeterwind]
	Meter=String
	MeterStyle=WMeterON
	MeasureName=WMeasurewind
	Y=R
	Prefix="Скорость ветра: "

[WMeterDay+1Fon]
	Meter=Image
	X=540
	Y=500
	W=200
	H=200
	SolidColor=#FONWeath#
	Hidden=#Weather_#
	DynamicVariables=1

[WMeterDay+1Name]
	Meter=String
	MeasureName=WMeasureDAY2
	Text=%1
	X=r
	Y=r
	W=130
	H=40
	FontColor=#COL2#
	FontFace=#F#
	AntiAlias=1
	ClipString=1
	SolidColor=#FONWeath#
	FontSize=#F4#
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterDay+1TMax]
	Meter=String
	MeasureName=WMeasureTMAX2
	X=70R
	Y=r
	W=70
	H=20
	FontColor=#COL2#
	FontFace=#F#
	AntiAlias=1
	ClipString=1
	StringAlign=Right
	SolidColor=#FONWeath#
	FontSize=#F2#
	Postfix=" °C"
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterDay+1TMin]
	Meter=String
	MeterStyle=WMeterDay+1TMax
	MeasureName=WMeasureTMIN2
	X=r
	Y=R

[WMeterDay+1Icon]
	Meter=Image
	MeasureName=WMeasureWeatherIcon2
	Path=#@#Static/WeatherIcons/
	ImageName=d%1
	X=-200r
	Y=540
	W=200
	H=160
	PreserveAspectRatio=1
	Antialias=1
	Hidden=#Weather_#
	DynamicVariables=1

[WMeterDay+2Fon]
	Meter=Image
	MeterStyle=WMeterDay+1Fon
	X=10R

[WMeterDay+2Name]
	Meter=String
	MeterStyle=WMeterDay+1Name
	MeasureName=WMeasureDAY3
	X=r
	Y=r

[WMeterDay+2TMax]
	Meter=String
	MeterStyle=WMeterDay+1TMax
	MeasureName=WMeasureTMAX3
	X=70R
	Y=r

[WMeterDay+2TMin]
	Meter=String
	MeterStyle=WMeterDay+1TMax
	MeasureName=WMeasureTMIN3
	X=r
	Y=R

[WMeterDay+2Icon]
	Meter=Image
	MeterStyle=WMeterDay+1Icon
	MeasureName=WMeasureWeatherIcon3
	X=-200r

[WMeterDay+3Fon]
	Meter=Image
	MeterStyle=WMeterDay+1Fon
	X=10R

[WMeterDay+3Name]
	Meter=String
	MeterStyle=WMeterDay+1Name
	MeasureName=WMeasureDAY4
	X=r
	Y=r

[WMeterDay+3TMax]
	Meter=String
	MeterStyle=WMeterDay+1TMax
	MeasureName=WMeasureTMAX4
	X=70R
	Y=r

[WMeterDay+3TMin]
	Meter=String
	MeterStyle=WMeterDay+1TMax
	MeasureName=WMeasureTMIN4
	X=r
	Y=R

[WMeterDay+3Icon]
	Meter=Image
	MeterStyle=WMeterDay+1Icon
	MeasureName=WMeasureWeatherIcon4
	X=-200r





























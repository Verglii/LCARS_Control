[WMeterFon1]
	Meter=Image
	X=540
	Y=280
	W=200
	H=210
	SolidColor=#FONWeath#
	Hidden=#Weather_#
	DynamicVariables=1

[WMeterIconWet]
Meter=Image
MeasureName=WMeasureWET
Path="#@#Static/Wind"
X=690
Y=280
W=50
H=50
	SolidColor=#FONWeath#
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
	Antialias=1
	Hidden=#Weather_#
	DynamicVariables=1

[WMeterName]
	Meter=String
	MeasureName=WMeasureName
	X=1005
	Y=330
	W=310
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
	X=795
	Y=330
	W=90
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
	X=850
	Y=390
	W=310
	H=25
	FontSize=#F1_#
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

 










































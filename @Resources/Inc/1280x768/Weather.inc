[FonWeather1]
	Meter=Image
	X=540
	Y=280
	W=200
	H=210
	SolidColor=#FONWeath#
	Hidden=#Weather_#
	DynamicVariables=1

;//////////////////////////////////////
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

[WMeterIconF]
Meter=Image
MeasureName=MeasureWeatherIconF
Path="#CURRENTPATH#WeatherIcons Big"
X=0
Y=0
DynamicVariables=1
Hidden=#Weather_#



[WMeterTF]
Meter=String
MeasureName=WMeasureTF
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

[WMeterON]
Meter=String
MeasureName=WMeasureON
X=340
Y=129
W=255
H=35
FontSize=12
FontColor=250,250,250,250
StringStyle=BOLD
StringEffect=SHADOW
FontFace=calibri
StringAlign=Left
FontEffectColor=0,0,0,80
AntiAlias=1
ClipString=1
Prefix="Ощущаемая температура: "
DynamicVariables=1
Hidden=#Weather_#

[WMeterFD]
Meter=String
MeasureName=WMeasureFD
X=340
Y=20r
W=255
H=35
FontSize=12
FontColor=250,250,250,250
StringStyle=BOLD
StringEffect=SHADOW
FontFace=calibri
StringAlign=Left
FontEffectColor=0,0,0,80
AntiAlias=1
ClipString=1
Prefix="Давленение: "
DynamicVariables=1
Hidden=#Weather_#


[WMeterOW]
Meter=String
MeasureName=WMeasureOW
X=340
Y=20r
W=255
H=35
FontSize=12
FontColor=250,250,250,250
StringStyle=BOLD
StringEffect=SHADOW
FontFace=calibri
StringAlign=Left
FontEffectColor=0,0,0,80
AntiAlias=1
ClipString=1
Prefix="Влажность: "
DynamicVariables=1
Hidden=#Weather_#

[WMeterwind]
Meter=String
MeasureName=WMeasurewind
X=340
Y=190
W=170
H=35
FontSize=12
FontColor=250,250,250,250
StringStyle=BOLD
StringEffect=SHADOW
FontFace=calibri
StringAlign=Left
FontEffectColor=0,0,0,80
AntiAlias=1
ClipString=1
Prefix="Скорость ветра: "
DynamicVariables=1
Hidden=#Weather_#

[WMeterIconWet]
Meter=Image
MeasureName=WMeasureWET
Path="#CURRENTPATH#WeatherIcons W"
X=5R
Y=190
DynamicVariables=1
Hidden=#Weather_#

[WMeterwind2]
Meter=String
MeasureName=WMeasureWET2
X=5R
Y=190
W=10
H=35
FontSize=12
FontColor=250,250,250,250
StringStyle=BOLD
StringEffect=SHADOW
FontFace=calibri
StringAlign=Left
FontEffectColor=0,0,0,80
AntiAlias=1
DynamicVariables=1
Hidden=#Weather_#
 










































[Elbos6WeatherBlock4]
	Meter=Image
	X=506
	Y=320
	W=100
	H=290
	SolidColor=#ELBOS#
	Hidden=#Weather_#
	DynamicVariables=1

[Elbos6Weather]
	Meter=Image
	ImageName=#@#/Static/Elbos/Elbos3_#CS#.png
	X=1236
	Y=230
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#Weather_#

[Elbos6WeatherBlock1]
	Meter=Image
	X=30r
	Y=R
	W=100
	H=30
	SolidColor=#ELBOS#
	Hidden=#Weather_#
	DynamicVariables=1

[Elbos7Weather]
	Meter=IMAGE
	ImageName=#@#/Static/Elbos/Elbos5_#CS#.png
	X=r
	Y=610
	AntiAlias=1
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#Weather_#

[WeatherCity1]
	Meter=String
	Text=#City1Name#
	X=r
	Y=380
	W=100
	H=50
	AntiAlias=1
	FontFace=#F#
	FontSize=#F3#
	SolidColor=#ELBOS#
	Hidden=#Weather_#
	DynamicVariables=1
	StringAlign=LeftBottom
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #WCity1# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!Refresh]

[WeatherCity2]
	Meter=String
	MeterStyle=WeatherCity1
	Text=#City2Name#
	SolidColor=#ELBOS#
	Y=10R
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #WCity2# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!Refresh]

[WeatherCity3]
	Meter=String
	MeterStyle=WeatherCity1
	Text=#City3Name#
	SolidColor=#ELBOS#
	Y=10R
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #WCity3# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!Refresh]

[WeatherMeterSettings]
	Meter=String
	MeterStyle=WeatherCity1
	Text=#WeatherSettings#
	SolidColor=#ELBOS#
	Y=50R
	H=90
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute #WeathSettings# #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #ELBOS#][!RainmeterRedraw]

[WMeterFonToday]
	Meter=Image
	X=-640r
	Y=280
	W=200
	H=210
	SolidColor=#FONWeath_#
	Hidden=#Weather_#
	DynamicVariables=1

[WMeterD1Text]
	Meter=String
	MeasureName=WMeasureDAY
	X=r
	Y=r
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
	X=150r
	Y=r
	W=50
	H=50
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterIconD1]
	Meter=Image
	MeasureName=WMeasureWeatherIconD1
	Path="#@#Static/WeatherIcons"
	X=-150r
	Y=50r
	W=200
	H=160
	PreserveAspectRatio=1
	AntiAlias=1
	Hidden=#Weather_#
	DynamicVariables=1

[WMeterName]
	Meter=String
	MeasureName=WMeasureName
	X=490r
	Y=r
	W=260
	H=100
	FontColor=#COL2#
	FontFace=#F#
	StringAlign=CenterCenter
	SolidColor=#FONWeath_#
	AntiAlias=1
	ClipString=1
	FontSize=#F5#
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterTMAX1]
	Meter=String
	MeasureName=WMeasureTMAX
	X=-210r
	Y=r
	W=140
	H=100
	FontColor=#COL2#
	FontFace=#F#
	StringAlign=CenterCenter
	AntiAlias=1
	ClipString=1
	SolidColor=#FONWeath_#
	FontSize=#F5#
	Postfix=" °C"
	DynamicVariables=1
	Hidden=#Weather_#

[WMeterTMIN1]
	Meter=String
	MeterStyle=WMeterTMAX1
	MeasureName=WMeasureTMIN
	X=r
	Y=110r

[WMeterON]
	Meter=String
	MeasureName=WMeasureON
	X=80r
	Y=-50r
	W=260
	H=25
	FontSize=#F2#
	FontColor=#COL2#
	SolidColor=#FONWeath_#
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
	X=r
	Y=R
	Prefix="Давленение: "

[WMeterOW]
	Meter=String
	MeterStyle=WMeterON
	MeasureName=WMeasureOW
	X=r
	Y=R
	Prefix="Влажность: "

[WMeterwind]
	Meter=String
	MeterStyle=WMeterON
	MeasureName=WMeasurewind
	X=r
	Y=R
	Prefix="Скорость ветра: "

[WMeterDay+1Fon]
	Meter=Image
	X=-360r
	Y=500
	W=200
	H=200
	SolidColor=#FONWeath_#
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
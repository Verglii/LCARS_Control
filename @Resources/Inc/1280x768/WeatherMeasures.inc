[WMeasureName]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#?tenday
RegExp="(?siU)<h1>(.*)</h1>.*"
UpdateRate=#UpdateRateWeather#
Substitute="&deg;":""
StringIndex=1
Group=Weather

[WMeasureDAY]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#?tenday
RegExp="(?siU)<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Group=Weather

[WMeasureDAY2]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureDAY]
UpdateRate=#UpdateRateWeather#
StringIndex=2
Group=Weather

[WMeasureDAY3]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureDAY]
UpdateRate=#UpdateRateWeather#
StringIndex=3
Group=Weather

[WMeasureDAY4]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureDAY]
UpdateRate=#UpdateRateWeather#
StringIndex=4
Group=Weather

[WMeasureDAY5]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureDAY]
UpdateRate=#UpdateRateWeather#
StringIndex=5
Group=Weather


[WMeasureTMAX]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#?tenday
RegExp="(?siU)Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="&deg;":""
Group=Weather

[WMeasureTMAX2]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMAX]
UpdateRate=#UpdateRateWeather#
StringIndex=2
Substitute="&deg;":""
Group=Weather

[WMeasureTMAX3]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMAX]
UpdateRate=#UpdateRateWeather#
StringIndex=3
Substitute="&deg;":""
Group=Weather

[WMeasureTMAX4]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMAX]
UpdateRate=#UpdateRateWeather#
StringIndex=4
Substitute="&deg;":""
Group=Weather

[WMeasureTMAX5]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMAX]
UpdateRate=#UpdateRateWeather#
StringIndex=5
Substitute="&deg;":""
Group=Weather

[WMeasureTMIN]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#?tenday
RegExp="(?siU)Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="&deg;":""
Group=Weather

[WMeasureTMIN2]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMIN]
UpdateRate=#UpdateRateWeather#
StringIndex=2
Substitute="&deg;":""
Group=Weather

[WMeasureTMIN3]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMIN]
UpdateRate=#UpdateRateWeather#
StringIndex=3
Substitute="&deg;":""
Group=Weather

[WMeasureTMIN4]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMIN]
UpdateRate=#UpdateRateWeather#
StringIndex=4
Substitute="&deg;":""
Group=Weather

[WMeasureTMIN5]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMIN]
UpdateRate=#UpdateRateWeather#
StringIndex=5
Substitute="&deg;":""
Group=Weather


[WMeasureWeatherIcon]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#?tenday
RegExp="(?siU)<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*"
StringIndex=1
UpdateRate=#UpdateRateWeather#
Group=Weather

[WMeasureWeatherIcon2]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureWeatherIcon]
StringIndex=2
UpdateRate=#UpdateRateWeather#
Group=Weather

[WMeasureWeatherIcon3]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureWeatherIcon]
StringIndex=3
UpdateRate=#UpdateRateWeather#
Group=Weather

[WMeasureWeatherIcon4]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureWeatherIcon]
StringIndex=4
UpdateRate=#UpdateRateWeather#
Group=Weather

[WMeasureWeatherIcon5]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureWeatherIcon]
StringIndex=5
UpdateRate=#UpdateRateWeather#
Group=Weather


[WMeasureWeatherIconD1]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU)<img class="symb" src="/img/symb-70x70/(.*).png.*"
StringIndex=1
UpdateRate=#UpdateRateWeather#
Group=Weather


[WMeasureON]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU)Ощущается как: <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="&deg;":""
Group=Weather

[WMeasureFD]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU)Барометр:  <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Group=Weather

[WMeasureOW]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU)От. влажность:   <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Group=Weather

[WMeasurewind]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU).*height="28" /> <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="&deg;":""
Group=Weather

[WMeasureWET]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU).*img/symb-wind/w(.*).gif" alt=".*".*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Group=Weather
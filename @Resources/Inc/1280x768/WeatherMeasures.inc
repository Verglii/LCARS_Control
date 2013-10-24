[WMeasureName]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU)<h1>(.*)</h1>.*"
UpdateRate=#UpdateRateWeather#
Substitute="&deg;":""
StringIndex=1

[WMeasureDAY]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU)<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*<span class="h5">(.*)</span>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1

[WMeasureDAY2]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureDAY]
UpdateRate=#UpdateRateWeather#
StringIndex=2

[WMeasureDAY3]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureDAY]
UpdateRate=#UpdateRateWeather#
StringIndex=3

[WMeasureDAY4]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureDAY]
UpdateRate=#UpdateRateWeather#
StringIndex=4

[WMeasureDAY5]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureDAY]
UpdateRate=#UpdateRateWeather#
StringIndex=5


[WMeasureTMAX]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU)Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*Макс: <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="&deg;":""

[WMeasureTMAX2]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMAX]
UpdateRate=#UpdateRateWeather#
StringIndex=2
Substitute="&deg;":""

[WMeasureTMAX3]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMAX]
UpdateRate=#UpdateRateWeather#
StringIndex=3
Substitute="&deg;":""

[WMeasureTMAX4]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMAX]
UpdateRate=#UpdateRateWeather#
StringIndex=4
Substitute="&deg;":""

[WMeasureTMAX5]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMAX]
UpdateRate=#UpdateRateWeather#
StringIndex=5
Substitute="&deg;":""

[WMeasureTMIN]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU)Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*Мин: <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="&deg;":""

[WMeasureTMIN2]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMIN]
UpdateRate=#UpdateRateWeather#
StringIndex=2
Substitute="&deg;":""

[WMeasureTMIN3]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMIN]
UpdateRate=#UpdateRateWeather#
StringIndex=3
Substitute="&deg;":""

[WMeasureTMIN4]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMIN]
UpdateRate=#UpdateRateWeather#
StringIndex=4
Substitute="&deg;":""

[WMeasureTMIN5]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureTMIN]
UpdateRate=#UpdateRateWeather#
StringIndex=5
Substitute="&deg;":""



[WMeasureWeatherIcon]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL#
RegExp="(?siU)<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*<img src="/img/symb-50x50/d(.*).png.*"
StringIndex=1
UpdateRate=#UpdateRateWeather#

[WMeasureWeatherIcon2]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureWeatherIcon]
StringIndex=2
UpdateRate=#UpdateRateWeather#

[WMeasureWeatherIcon3]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureWeatherIcon]
StringIndex=3
UpdateRate=#UpdateRateWeather#

[WMeasureWeatherIcon4]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureWeatherIcon]
StringIndex=4
UpdateRate=#UpdateRateWeather#


[WMeasureWeatherIcon5]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=[WMeasureWeatherIcon]
StringIndex=5
UpdateRate=#UpdateRateWeather#



[WMeasureWeatherIconD1]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU)<img class="symb" src="/img/symb-70x70/(.*).png.*"
StringIndex=1
UpdateRate=#UpdateRateWeather#


[WMeasureF]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU)<h4 class="entry-title">(.*)</h4>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1

[WMeasureTF]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU)<span class=".* txt-xxlarge"><strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1

[WMeasureFO]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU)<div class="right txt-tight">(.*)<br />.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1

[WMeasureOBN]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU)<div class="bot txt-tight grey">.*(.*)<br />.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="В":"на"

[WMeasureON]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU)Ощущается как: <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="&deg;":""

[WMeasureFD]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU)Барометр:  <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1

[WMeasureOW]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU)От. влажность:   <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1

[WMeasurewind]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU).*height="28" /> <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="&deg;":""

[WMeasureTR]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU).*Точка росы:   <strong>(.*)</strong>.*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
Substitute="&deg;":""

[WMeasureWET]
Measure=Plugin
Plugin=Plugins/WebParser.dll
Url=#URL1#
RegExp="(?siU).*img/symb-wind/w(.*).gif" alt=".*".*"
UpdateRate=#UpdateRateWeather#
StringIndex=1
function SpawnText()
NS='#CRLF#'
W=tostring(SKIN:GetVariable('WeekNumber'))
HW=tonumber(SKIN:GetVariable('WeekHNumber'))
Pref1='�1�'..NS
Pref2='�2�'..NS
Pref3='�3�'..NS
Pref4='�4�'..NS
Pref5='�5�'..NS
Pref6='�6�'..NS
D1Name=tostring(SKIN:GetVariable('WeekDay1'))
D2Name=tostring(SKIN:GetVariable('WeekDay2'))
D3Name=tostring(SKIN:GetVariable('WeekDay3'))
D4Name=tostring(SKIN:GetVariable('WeekDay4'))
D5Name=tostring(SKIN:GetVariable('WeekDay5'))
D6Name=tostring(SKIN:GetVariable('WeekDay6'))

	if HW == 1 then
		SKIN:Bang('!SetOption', 'IndexDay1Name', 'Text', D1Name)
		SKIN:Bang('!SetOption', 'IndexDay2Name', 'Text', D2Name)
		SKIN:Bang('!SetOption', 'IndexDay3Name', 'Text', D3Name)
		local D1_1=Pref1..tostring(SKIN:GetVariable('Week'..W..'Day1_1'))
		local D1_2=Pref2..tostring(SKIN:GetVariable('Week'..W..'Day1_2'))
		local D1_3=Pref3..tostring(SKIN:GetVariable('Week'..W..'Day1_3'))
		local D1_4=Pref4..tostring(SKIN:GetVariable('Week'..W..'Day1_4'))
		local D1_5=Pref5..tostring(SKIN:GetVariable('Week'..W..'Day1_5'))
		local D1_6=Pref6..tostring(SKIN:GetVariable('Week'..W..'Day1_6'))
		SKIN:Bang('!SetOption', 'IndexDay1Text1', 'Text', D1_1)
		SKIN:Bang('!SetOption', 'IndexDay1Text2', 'Text', D1_2)
		SKIN:Bang('!SetOption', 'IndexDay1Text3', 'Text', D1_3)
		SKIN:Bang('!SetOption', 'IndexDay1Text4', 'Text', D1_4)
		SKIN:Bang('!SetOption', 'IndexDay1Text5', 'Text', D1_5)
		SKIN:Bang('!SetOption', 'IndexDay1Text6', 'Text', D1_6)
		local D2_1=Pref1..tostring(SKIN:GetVariable('Week'..W..'Day2_1'))
		local D2_2=Pref2..tostring(SKIN:GetVariable('Week'..W..'Day2_2'))
		local D2_3=Pref3..tostring(SKIN:GetVariable('Week'..W..'Day2_3'))
		local D2_4=Pref4..tostring(SKIN:GetVariable('Week'..W..'Day2_4'))
		local D2_5=Pref5..tostring(SKIN:GetVariable('Week'..W..'Day2_5'))
		local D2_6=Pref6..tostring(SKIN:GetVariable('Week'..W..'Day2_6'))
		SKIN:Bang('!SetOption', 'IndexDay2Text1', 'Text', D2_1)
		SKIN:Bang('!SetOption', 'IndexDay2Text2', 'Text', D2_2)
		SKIN:Bang('!SetOption', 'IndexDay2Text3', 'Text', D2_3)
		SKIN:Bang('!SetOption', 'IndexDay2Text4', 'Text', D2_4)
		SKIN:Bang('!SetOption', 'IndexDay2Text5', 'Text', D2_5)
		SKIN:Bang('!SetOption', 'IndexDay2Text6', 'Text', D2_6)
		local D3_1=Pref1..tostring(SKIN:GetVariable('Week'..W..'Day3_1'))
		local D3_2=Pref2..tostring(SKIN:GetVariable('Week'..W..'Day3_2'))
		local D3_3=Pref3..tostring(SKIN:GetVariable('Week'..W..'Day3_3'))
		local D3_4=Pref4..tostring(SKIN:GetVariable('Week'..W..'Day3_4'))
		local D3_5=Pref5..tostring(SKIN:GetVariable('Week'..W..'Day3_5'))
		local D3_6=Pref6..tostring(SKIN:GetVariable('Week'..W..'Day3_6'))
		SKIN:Bang('!SetOption', 'IndexDay3Text1', 'Text', D3_1)
		SKIN:Bang('!SetOption', 'IndexDay3Text2', 'Text', D3_2)
		SKIN:Bang('!SetOption', 'IndexDay3Text3', 'Text', D3_3)
		SKIN:Bang('!SetOption', 'IndexDay3Text4', 'Text', D3_4)
		SKIN:Bang('!SetOption', 'IndexDay3Text5', 'Text', D3_5)
		SKIN:Bang('!SetOption', 'IndexDay3Text6', 'Text', D3_6)
	else
		SKIN:Bang('!SetOption', 'IndexDay1Name', 'Text', D4Name)
		SKIN:Bang('!SetOption', 'IndexDay2Name', 'Text', D5Name)
		SKIN:Bang('!SetOption', 'IndexDay3Name', 'Text', D6Name)
		local D1_1=Pref1..tostring(SKIN:GetVariable('Week'..W..'Day4_1'))
		local D1_2=Pref2..tostring(SKIN:GetVariable('Week'..W..'Day4_2'))
		local D1_3=Pref3..tostring(SKIN:GetVariable('Week'..W..'Day4_3'))
		local D1_4=Pref4..tostring(SKIN:GetVariable('Week'..W..'Day4_4'))
		local D1_5=Pref5..tostring(SKIN:GetVariable('Week'..W..'Day4_5'))
		local D1_6=Pref6..tostring(SKIN:GetVariable('Week'..W..'Day4_6'))
		SKIN:Bang('!SetOption', 'IndexDay1Text1', 'Text', D1_1)
		SKIN:Bang('!SetOption', 'IndexDay1Text2', 'Text', D1_2)
		SKIN:Bang('!SetOption', 'IndexDay1Text3', 'Text', D1_3)
		SKIN:Bang('!SetOption', 'IndexDay1Text4', 'Text', D1_4)
		SKIN:Bang('!SetOption', 'IndexDay1Text5', 'Text', D1_5)
		SKIN:Bang('!SetOption', 'IndexDay1Text6', 'Text', D1_6)
		local D2_1=Pref1..tostring(SKIN:GetVariable('Week'..W..'Day5_1'))
		local D2_2=Pref2..tostring(SKIN:GetVariable('Week'..W..'Day5_2'))
		local D2_3=Pref3..tostring(SKIN:GetVariable('Week'..W..'Day5_3'))
		local D2_4=Pref4..tostring(SKIN:GetVariable('Week'..W..'Day5_4'))
		local D2_5=Pref5..tostring(SKIN:GetVariable('Week'..W..'Day5_5'))
		local D2_6=Pref6..tostring(SKIN:GetVariable('Week'..W..'Day5_6'))
		SKIN:Bang('!SetOption', 'IndexDay2Text1', 'Text', D2_1)
		SKIN:Bang('!SetOption', 'IndexDay2Text2', 'Text', D2_2)
		SKIN:Bang('!SetOption', 'IndexDay2Text3', 'Text', D2_3)
		SKIN:Bang('!SetOption', 'IndexDay2Text4', 'Text', D2_4)
		SKIN:Bang('!SetOption', 'IndexDay2Text5', 'Text', D2_5)
		SKIN:Bang('!SetOption', 'IndexDay2Text6', 'Text', D2_6)
		local D3_1=Pref1..tostring(SKIN:GetVariable('Week'..W..'Day6_1'))
		local D3_2=Pref2..tostring(SKIN:GetVariable('Week'..W..'Day6_2'))
		local D3_3=Pref3..tostring(SKIN:GetVariable('Week'..W..'Day6_3'))
		local D3_4=Pref4..tostring(SKIN:GetVariable('Week'..W..'Day6_4'))
		local D3_5=Pref5..tostring(SKIN:GetVariable('Week'..W..'Day6_5'))
		local D3_6=Pref6..tostring(SKIN:GetVariable('Week'..W..'Day6_6'))
		SKIN:Bang('!SetOption', 'IndexDay3Text1', 'Text', D3_1)
		SKIN:Bang('!SetOption', 'IndexDay3Text2', 'Text', D3_2)
		SKIN:Bang('!SetOption', 'IndexDay3Text3', 'Text', D3_3)
		SKIN:Bang('!SetOption', 'IndexDay3Text4', 'Text', D3_4)
		SKIN:Bang('!SetOption', 'IndexDay3Text5', 'Text', D3_5)
		SKIN:Bang('!SetOption', 'IndexDay3Text6', 'Text', D3_6)
	end
end
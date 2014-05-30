function Initialize()
LMBNum=1
Resolution=tostring(SKIN:GetVariable('Resolution'))
while LMBNum<=12 do
	if tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==0 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMBF_OFF#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#UNAV#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #SoundBeep1#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==1 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_1#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #All_Off# #CoIn_On# #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==2 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_2#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #All_Off# #CPU_MEM_On# #CPU_MEM|N_On# #CPU_On# #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==3 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_3#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #All_Off# #DATABASE_On# #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==4 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_4#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '[MeasureBatteryButton]')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #All_Off# #PowerSource_On# #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor [MeasureBatteryButton]]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==5 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_5#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #All_Off# #STEAM_On# #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==6 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_6#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #All_Off# #Weather_On# #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==7 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_7#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #All_Off# #Schedule_On# #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==8 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_8#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #All_Off# #Sun_On# #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==9 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_9#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#]#Close'..tostring(Resolution)..'##OpenSettings#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==10 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_10#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #ControlPanelWin# #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==11 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_11#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #SoundBeep1#[!SetOption Menu1Button'..tostring(LMBNum)..' SolidColor #PRI#] [!RainmeterRefresh]')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==12 then
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'Text', '#LMB1_12#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'SolidColor', '#PRI#')
	SKIN:Bang('!SetOption', 'Menu1Button'..tostring(LMBNum), 'LeftMouseUpAction', '!Execute #Close'..tostring(Resolution)..'# #OpenHide'..tostring(Resolution)..'# #SoundBeep1#')
	end
	LMBNum=LMBNum+1
end

end
function Initialize()
LMBNum=1

while LMBNum<=12 do
	if tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==0 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMBF_OFF#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==1 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_1#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==2 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_2#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==3 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_3#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==4 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_4#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==5 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_5#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==6 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_6#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==7 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_7#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==8 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_8#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==9 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_9#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==10 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_10#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==11 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_11#')
	elseif tonumber(SKIN:GetVariable('LMB'..tostring(LMBNum)))==12 then
	SKIN:Bang('!SetOption', 'LMButtonSet'..tostring(LMBNum), 'Text', '#LMB1_12#')
	end
	LMBNum=LMBNum+1
end

end
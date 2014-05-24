function Control()
Stage=tonumber(SKIN:GetVariable('Settings_Stage'))
Cycle=0
while Cycle <= 9 do
	if Stage == Cycle then
		SKIN:Bang('!SetVariable', 'SSt' .. tostring(Cycle), '0')
		SKIN:Bang('!WriteKeyValue', 'Variables', 'SSt' .. tostring(Cycle), '0', '#@#Inc/Settings.inc')
	else
		SKIN:Bang('!SetVariable', 'SSt' .. tostring(Cycle), '1')
		SKIN:Bang('!WriteKeyValue', 'Variables', 'SSt' .. tostring(Cycle), '1', '#@#Inc/Settings.inc')
	end
	Cycle=Cycle+1
end
end

function SetValue()
Var=None
Value=None
Place=None
	SKIN:Bang('!SetVariable', tostring(Var), tostring(Value))
	SKIN:Bang('!WriteKeyValue', 'Variables', tostring(Var), tostring(Value), tostring(Place))
end
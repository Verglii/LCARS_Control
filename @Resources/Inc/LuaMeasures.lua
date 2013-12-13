function Initialize()
ReadyN=2
CPDis=1
CPU = tonumber(SKIN:GetVariable('CPULCount'))
	while ReadyN<=CPU do
		SKIN:Bang('!SetVariable', 'CPN' .. tostring(ReadyN), ReadyN)
		ReadyN=ReadyN+1
	end
	while CPDis<=12 do
		if CPDis<=CPU then
			SKIN:Bang('!SetVariable', 'CP' .. tostring(CPDis), 0)
			SKIN:Bang('!WriteKeyValue', 'Variables', 'CP' .. tostring(CPDis), '0', '#@#Inc/Settings.inc')
		else
			SKIN:Bang('!SetVariable', 'CP' .. tostring(CPDis), 1)
			SKIN:Bang('!WriteKeyValue', 'Variables', 'CP' .. tostring(CPDis), '1', '#@#Inc/Settings.inc')
		end
		CPDis=CPDis+1
	end
end


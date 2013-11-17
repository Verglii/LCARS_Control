function Initialize()
ReadyN=2
CPU = tonumber(SKIN:GetVariable('CPULCount'))
	while ReadyN<=CPU do
		SKIN:Bang('!SetVariable', 'CPN' .. tostring(ReadyN), ReadyN)
		ReadyN=ReadyN+1
	end
end


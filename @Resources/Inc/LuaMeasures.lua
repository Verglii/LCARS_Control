function Initialize()
ReadyN=2
CPU = tonumber(SKIN:GetVariable('CPULCount'))
	while ReadyN<=CPU do
		SKIN:Bang('!SetVariable', 'CPN' .. tostring(ReadyN), ReadyN)
		ReadyN=ReadyN+1
	end
end

-- function CpuNumber()
-- local ReadyN=2
	-- CPU = SKIN:GetVariable('CPULCount')
	-- while (ReadyN <= 12) do
		-- if(ReadyN<CPU)then
			-- SKIN:Bang('!SetVariable', ('CPN'+tostring(ReadyN)), 'ReadyN')
		-- else 
			-- SKIN:Bang('!SetVariable', ('CPN'+tostring(ReadyN)), '0')
		-- end
	-- ReadyN=ReadyN+1
	-- end
-- end

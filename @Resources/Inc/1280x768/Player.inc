[MeterPause]
	Meter=BUTTON
	X=530
	Y=557
	ButtonImage=#@#/Buttons/Player/Play_pause#CS#.png
	ButtonCommand=!Execute [!RainmeterPluginBang "MeasurePlayer PlayPause"]
	DynamicVariables=1
	Hidden=#MediaPl#

[MeterStop]
	Meter=BUTTON
	X=530
	Y=525
	ButtonImage=#@#/Buttons/Player/Stop#CS#.png
	ButtonCommand=!Execute [!RainmeterPluginBang "MeasurePlayer Stop"]
	DynamicVariables=1
	Hidden=#MediaPl#

[MeterTogglePlayer]
	Meter=BUTTON
	X=720
	Y=590
	ButtonImage=#@#/Buttons/Player/TogglePlayer#CS#.png
	ButtonCommand=!Execute [!RainmeterPluginBang "MeasurePlayer TogglePlayer"]
	DynamicVariables=1
	Hidden=#MediaPl#

[MeterPlayerChange]
	Meter=BUTTON
	X=805
	Y=603
	ButtonImage=#@#/Buttons/Player/PlayerChange#CS#.png
	ButtonCommand=!Execute
	DynamicVariables=1
	Hidden=#MediaPl#

; [MeterRate]
	; Meter=Bitmap
	; MeasureName=MeasureRate
	; BitmapImage=#@#/Anim/Rate#CS#.png
	; Bitmap=
	; X=865
	; Y=278
	; Hidden=#MediaPl#

[MeterCover]
	Meter=Button
	X=777
	Y=270
	ButtonImage=#@#/Buttons/Player/Cover#CS#.png
	ButtonCommand=!Execute
	DynamicVariables=1
	Hidden=#MediaPl#

; [MeterRepeatInd]
	; Meter=Bitmap
	; MeasureName=MeasureRepeat
	; BitmapImage=#@#/Anim/RepeatInd#CS#.png
	; Bitmap=
	; X=723
	; Y=278
	; Hidden=#MediaPl#

[MeterRepeat]
	Meter=Button
	X=641
	Y=301
	ButtonImage=#@#/Buttons/Player/Repeat#CS#.png
	ButtonCommand=!Execute [!RainmeterPluginBang MeasurePlayer "SetRepeat -1"]
	DynamicVariables=1
	Hidden=#MediaPl#

; [MeterShuffleInd]
	; Meter=Bitmap
	; MeasureName=MeasureShuffle
	; BitmapImage=#@#/Anim/ShuffleInd#CS#.png
	; Bitmap=
	; X=723
	; Y=278
	; Hidden=#MediaPl#

[MeterShuffle]
	Meter=Button
	X=610
	Y=438
	ButtonImage=#@#/Buttons/Player/Shuffle#CS#.png
	ButtonCommand=!Execute [!RainmeterPluginBang MeasurePlayer "SetShuffle 1"]
	DynamicVariables=1
	Hidden=#MediaPl#


[MeterVolumeUp]
	Meter=Image
	X=805
	Y=405
	W=50
	H=50
	SolidColor=#PRI#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!CommandMeasure "MeasurePlayer" "SetVolume +5"] #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #PRI#][!RainmeterRedraw]
	DynamicVariables=1
	Hidden=#MediaPl#

;[MeterVolumeUpIm]
;	Meter=Image
;	X=805
;	Y=405
;	DynamicVariables=1
;	Hidden=#MediaPl#

[MeterVolumeUpF]
	Meter=Button
	X=805
	Y=385
	ButtonImage=#@#/Buttons/Player/Forced#CS#.png
	ButtonCommand=!Execute [!CommandMeasure "MeasurePlayer" "SetVolume +10"]
	DynamicVariables=1
	Hidden=#MediaPl#

[MeterVolumeDown]
	Meter=Image
	X=805
	Y=525
	W=50
	H=50
	SolidColor=#PRI#
	LeftMouseDownAction=!Execute [!SetOption #CURRENTSECTION# SolidColor #COL2#][!RainmeterRedraw]
	LeftMouseUpAction=!Execute [!CommandMeasure "MeasurePlayer" "SetVolume -5"] #SoundBeep1#[!SetOption #CURRENTSECTION# SolidColor #PRI#][!RainmeterRedraw]
	DynamicVariables=1
	Hidden=#MediaPl#

;[MeterVolumeDownIm]
;	Meter=Image
;	X=805
;	Y=405
;	DynamicVariables=1
;	Hidden=#MediaPl#

[MeterVolumeDownF]
	Meter=Button
	X=805
	Y=580
	ButtonImage=#@#/Buttons/Player/Forced#CS#.png
	ImageFlip=Vertical
	ButtonCommand=!Execute [!CommandMeasure "MeasurePlayer" "SetVolume -10"]
	DynamicVariables=1
	Hidden=#MediaPl#







[MeterLeftUpRounder]
	Meter=Image
	X=731
	Y=391
	ImageName=#@#/Static/Rounder#CS#.png
	DynamicVariables=1
	Hidden=#MediaPl#

[MeterLeftDownRounder]
	Meter=Image
	X=731
	Y=525
	ImageName=#@#/Static/Rounder#CS#.png
	ImageFlip=Vertical
	DynamicVariables=1
	Hidden=#MediaPl#

[MeterRightUpRounder]
	Meter=Image
	X=865
	Y=391
	ImageName=#@#/Static/Rounder#CS#.png
	ImageFlip=Horizontal
	DynamicVariables=1
	Hidden=#MediaPl#

[MeterRightDownRounder]
	Meter=Image
	X=865
	Y=525
	ImageName=#@#/Static/Rounder#CS#.png
	ImageFlip=Both
	DynamicVariables=1
	Hidden=#MediaPl#












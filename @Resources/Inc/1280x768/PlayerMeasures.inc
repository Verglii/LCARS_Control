[MeasurePlayer]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MediaPlayer#
PlayerType=TITLE
DisableLeadingZero=0
Substitute="":"N\A"
DynamicVariables=1
Disabled=#MediaPl#

[MeasureArtist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasurePlayer]
PlayerType=ARTIST
Substitute="":"N\A"
DynamicVariables=1
Disabled=#MediaPl#

[MeasureAlbum]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasurePlayer]
PlayerType=ALBUM
Substitute="":"N\A"
DynamicVariables=1
Disabled=#MediaPl#

[MeasureCover]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[MeasurePlayer]
PlayerType=COVER
Substitute="":"Static\Default.png"
DynamicVariables=1
Disabled=#MediaPl#

[MeasureVolume]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[MeasurePlayer]
PlayerType=VOLUME
DynamicVariables=1
Disabled=#MediaPl#

[MeasurePercentPlayed]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasurePlayer]
PlayerType=PROGRESS
DynamicVariables=1
Disabled=#MediaPl#

; [MeasureRate]
; Measure=Plugin
; Plugin=NowPlaying
; PlayerName=[MeasurePlayer]
; PlayerType=Rating
; Substitute="":"0"
; DynamicVariables=1
; Disabled=#MediaPl#

[MeasureRepeatInd]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasurePlayer]
PlayerType=Repeat
DynamicVariables=1
Disabled=#MediaPl#

; [MeasureShuffleInd]
; Measure=Plugin
; Plugin=NowPlaying
; PlayerName=[MeasurePlayer]
; PlayerType=SHUFFLE
; DynamicVariables=1
; Disabled=#MediaPl#

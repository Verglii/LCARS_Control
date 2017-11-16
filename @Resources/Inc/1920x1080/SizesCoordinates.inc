[Variables]
QLU=110
QLD=150
QLL=950
QLR=1060
QLRR=1170

LMY1=190
LMYO=10R

FONX=680
FONY=340
FONH=695
FONW=1235

Fon1=[!SetVariable "FONH" "695"][!RainmeterWriteKeyValue Variables "FONH" "695" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONW" "1235"][!RainmeterWriteKeyValue Variables "FONW" "1235" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONX" "680"][!RainmeterWriteKeyValue Variables "FONX" "680" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONY" "340"][!RainmeterWriteKeyValue Variables "FONY" "340" "#@#\Inc\#Resolution#\SizesCoordinates.inc"]
Fon2=[!SetVariable "FONH" "695"][!RainmeterWriteKeyValue Variables "FONH" "695" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONW" "640"][!RainmeterWriteKeyValue Variables "FONW" "640" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONX" "680"][!RainmeterWriteKeyValue Variables "FONX" "680" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONY" "340"][!RainmeterWriteKeyValue Variables "FONY" "340" "#@#\Inc\#Resolution#\SizesCoordinates.inc"]
Fon3=[!SetVariable "FONH" "185"][!RainmeterWriteKeyValue Variables "FONH" "185" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONW" "490"][!RainmeterWriteKeyValue Variables "FONW" "490" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONX" "680"][!RainmeterWriteKeyValue Variables "FONX" "680" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONY" "340"][!RainmeterWriteKeyValue Variables "FONY" "340" "#@#\Inc\#Resolution#\SizesCoordinates.inc"]
;===============================================

;Computer====================
;Head
CX1=895
CX2=1305
CHeY=350
CH1=60
CH2=50
CW1=400
CW2=460
CPass1=55
CPass2=10

;Lines
CY1=(#CHeY#+#CH1#+#CPass1#)
CY2=(#CY1#+#CH2#+#CPass2#)
CY3=(#CY2#+#CH2#+#CPass2#)
CY4=(#CY3#+#CH2#+2*#CPass2#)
CY5=(#CY4#+#CH2#+#CPass2#)
CY6=(#CY5#+#CH2#+#CPass2#)
CY7=(#CY6#+#CH2#+2*#CPass2#)
CY8=(#CY7#+#CH2#+#CPass2#)
CY9=(#CY8#+#CH2#+#CPass2#)
;============================

;Database=================
IcSize=40
NameH=40
NameW=550
IcW=600

IcX1=550
IcX2=600

IcY1=340
IcY2=(#IcY1#+#IcSize#+#IcYD#)
IcY3=(#IcY2#+#IcSize#+#IcYD#)
IcY4=(#IcY3#+#IcSize#+#IcYD#)
IcY5=(#IcY4#+#IcSize#+#IcYD#)
IcY6=(#IcY5#+#IcSize#+#IcYD#)
IcYD=10
;=========================

;=================================Steam
GameIconX=550
GameIcon1Y=290
GameIcon2Y=410
GameIcon3Y=530
GameIconH=70
GameIconW=100
GameNameH=40

SteamIconX=900
SteamIconY=370

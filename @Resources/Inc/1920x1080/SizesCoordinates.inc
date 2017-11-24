[Variables]
QLine1=70
QLine2=135
QColumn1=1395
QColumn2=1570
QColumn3=1745

LMY1=190
LMYO=10R

FONX=670
FONY=325
FONH=710
FONW=1245

Fon1=[!SetVariable "FONH" "710"][!RainmeterWriteKeyValue Variables "FONH" "710" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONW" "1245"][!RainmeterWriteKeyValue Variables "FONW" "1245" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONX" "670"][!RainmeterWriteKeyValue Variables "FONX" "670" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONY" "325"][!RainmeterWriteKeyValue Variables "FONY" "325" "#@#\Inc\#Resolution#\SizesCoordinates.inc"]

Fon2=[!SetVariable "FONH" "710"][!RainmeterWriteKeyValue Variables "FONH" "710" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONW" "640"][!RainmeterWriteKeyValue Variables "FONW" "640" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONX" "670"][!RainmeterWriteKeyValue Variables "FONX" "670" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONY" "325"][!RainmeterWriteKeyValue Variables "FONY" "325" "#@#\Inc\#Resolution#\SizesCoordinates.inc"]

Fon3=[!SetVariable "FONH" "710"][!RainmeterWriteKeyValue Variables "FONH" "710" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONW" "490"][!RainmeterWriteKeyValue Variables "FONW" "490" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONX" "670"][!RainmeterWriteKeyValue Variables "FONX" "670" "#@#\Inc\#Resolution#\SizesCoordinates.inc"][!SetVariable "FONY" "325"][!RainmeterWriteKeyValue Variables "FONY" "325" "#@#\Inc\#Resolution#\SizesCoordinates.inc"]

;===============================================

;Computer====================
;Head
CX0=680
CX01=680
CX02=855
CX1=1035
CX2=1445
CHeY=335
CH01=270
CH1=60
CH2=50
CW0=345
CW01=170
CW1=400
CW2=460
CPass1=55
CPass2=10
CPass3=20

;Lines
CY01=425
CY02=705
CY1=(#CHeY#+#CH1#+#CPass1#)
CY2=(#CY1#+#CH2#+#CPass2#)
CY3=(#CY2#+#CH2#+#CPass2#)
CY4=(#CY3#+#CH2#+#CPass3#)
CY5=(#CY4#+#CH2#+#CPass2#)
CY6=(#CY5#+#CH2#+#CPass2#)
CY7=(#CY6#+#CH2#+#CPass3#)
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

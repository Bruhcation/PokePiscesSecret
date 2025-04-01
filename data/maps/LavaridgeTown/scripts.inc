LavaridgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
	.byte 0

LavaridgeTown_OnTransition:
	setflag FLAG_TEMP_4
	end

LavaridgeTown_EventScript_CableCarSign::
	msgbox LavaridgeTown_Text_CableCarSign, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_LavaridgeSign::
	msgbox LavaridgeTown_Text_LavaridgeSign, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_SweltornSign::
	msgbox LavaridgeTown_Text_SweltornSign, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_OutpostSign::
	msgbox LavaridgeTown_Text_OutpostSign, MSGBOX_SIGN
	end

LavaridgeTown_Text_CableCarSign:
	.string "Cable Car Shut Down Indefinitely\n"
	.string "For Maintenance$"

LavaridgeTown_Text_LavaridgeSign:
	.string "LAVARIDGE TOWN PROPER\n"
	.string "IS THROUGH THE GATE$"

LavaridgeTown_Text_SweltornSign:
	.string "Access Cave to Sweltorn Desert$"

LavaridgeTown_Text_OutpostSign:
	.string "Lavaridge Town Outpost$"

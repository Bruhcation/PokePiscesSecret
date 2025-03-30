FallarborInteriors_MapScripts::
	.byte 0

FallarborInteriors_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_RAITAIC_TRADE_COMPLETED, FallarborInteriors_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_RAITAIC
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox FallarborInteriors_Text_IllTradeIfYouWant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FallarborInteriors_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborInteriors_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, FallarborInteriors_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox FallarborInteriors_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
	setflag FLAG_RAITAIC_TRADE_COMPLETED
	release
	end

FallarborInteriors_EventScript_DeclineTrade::
	msgbox FallarborInteriors_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
	release
	end

FallarborInteriors_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FallarborInteriors_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
	release
	end

FallarborInteriors_EventScript_TradeCompleted::
	msgbox FallarborInteriors_Text_ThanksForTrading, MSGBOX_DEFAULT
	release
	end

FallarborInteriors_EventScript_Fallarborite1::
    msgbox FallarborInteriors_Text_Fallarborite1, MSGBOX_NPC
    end

FallarborInteriors_EventScript_Fallarborite2::
    msgbox FallarborInteriors_Text_Fallarborite2, MSGBOX_NPC
    end

FallarborInteriors_EventScript_Fallarborite3::
    msgbox FallarborInteriors_Text_Fallarborite3, MSGBOX_NPC
    end

FallarborInteriors_EventScript_Fallarborite4::
    msgbox FallarborInteriors_Text_Fallarborite4, MSGBOX_NPC
    end

FallarborInteriors_EventScript_Fallarborite5::
    msgbox FallarborInteriors_Text_Fallarborite5, MSGBOX_NPC
    end

FallarborInteriors_EventScript_Fallarborite6::
    msgbox FallarborInteriors_Text_Fallarborite6, MSGBOX_NPC
    end

FallarborInteriors_EventScript_Fallarborite7::
    msgbox FallarborInteriors_Text_Fallarborite7, MSGBOX_NPC
    end

FallarborInteriors_EventScript_Fallarborite8::
    msgbox FallarborInteriors_Text_Fallarborite8, MSGBOX_NPC
    end

FallarborInteriors_EventScript_Fallarborite9::
    msgbox FallarborInteriors_Text_Fallarborite9, MSGBOX_NPC
    end

FallarborInteriors_Text_Fallarborite1:
	.string "Oh, hello! Welcome to my home.\n"
	.string "I assume you've heard of me,\l"
	.string "Professor Cozmo?\p"
	.string "My friend Tabitha just stopped\n"
	.string "by. It was good to see him,\l"
	.string "as always.\p"
	.string "I know he values a strong trainer,\n"
	.string "so of course, battle him any\l"
	.string "chance you get.$"

FallarborInteriors_Text_Fallarborite2:
	.string "My daddy used to use\n"
	.string "this lil' man cave for secret\l"
	.string "operations back when he worked\l"
	.string "a lot more.\p"
	.string "But now he lets me use it\n"
	.string "as my own base! Haha!$"

FallarborInteriors_Text_Fallarborite3:
	.string "Temp Dialogue\n$"

FallarborInteriors_Text_Fallarborite4:
	.string "Temp Dialogue\n$"

FallarborInteriors_Text_Fallarborite5:
	.string "Temp Dialogue\n$"

FallarborInteriors_Text_Fallarborite6:
	.string "Temp Dialogue\n$"

FallarborInteriors_Text_Fallarborite7:
	.string "Temp Dialogue\n$"

FallarborInteriors_Text_Fallarborite8:
	.string "Temp Dialogue\n$"

FallarborInteriors_Text_Fallarborite9:
	.string "Temp Dialogue\n$"

FallarborInteriors_Text_IllTradeIfYouWant:
	.string "I'll trade you my {STR_VAR_2} for\n"
	.string "a {STR_VAR_1} if you want.$"

FallarborInteriors_Text_PleaseBeGoodToMyPokemon:
	.string "Please be good to my POKéMON.$"

FallarborInteriors_Text_DoesntLookLikeMonToMe:
	.string "Huh? That doesn't look anything like\n"
	.string "a {STR_VAR_1} to me.$"

FallarborInteriors_Text_YouDontWantToThatsOkay:
	.string "Oh, if you don't want to, that's okay.$"

FallarborInteriors_Text_ThanksForTrading:
	.string "Thanks for the trade.$"

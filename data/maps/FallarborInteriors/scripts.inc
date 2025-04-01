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

FallarborInteriors_EventScript_ShadowBall::
	lock
	faceplayer
	checkitem ITEM_TM_SHADOW_BALL
	goto_if_eq VAR_RESULT, TRUE, FallarborInteriors_EventScript_GaveShadowBall
	msgbox FallarborInteriors_Text_ShadowBall, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM_SHADOW_BALL
	closemessage
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	release
	end

FallarborInteriors_EventScript_GaveShadowBall::
	msgbox FallarborInteriors_Text_GaveShadowBall, MSGBOX_AUTOCLOSE
	release
	end

FallarborInteriors_Text_ShadowBall:
	.string "There are days in Fallarbor Town\n"
	.string "where the sun gets blacked out\l"
	.string "by the clouds of soot pouring\l"
	.string "forth from Mt. Chimney...\p"
	.string "Take this TM. It will let you\n"
	.string "harness the power of those shadows.$"

FallarborInteriors_Text_GaveShadowBall:
	.string "You have not experienced time\n"
	.string "blindness until you have experienced\l"
	.string "a sunless day in Fallarbor...$"

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
	.string "Jaggro Pass, Crimney Climb...\n"
	.string "All this mountainous terrain is\l"
	.string "so dangerous! THIS is why\l"
	.string "I don't leave my house!$"

FallarborInteriors_Text_Fallarborite4:
	.string "Have you been able to find a Pokémon\n"
	.string "called Infairno? It is quite\l"
	.string "the cheerful sort.\p"
	.string "It sounds like a ticking clock! I\n"
	.string "wonder if that ties into how\l"
	.string "it evolves, since no matter how many\l"
	.string "levels I put onto this thing,\l"
	.string "it seems to not want to...$"

FallarborInteriors_Text_Fallarborite5:
	.string "There is an abandoned house\n"
	.string "in the forest north of town.\p"
	.string "Some have told me it used to be\n"
	.string "used as a makeshift church...\l"
	.string "however, those who attended would\l"
	.string "get scared away by what they did\l"
	.string "at their ceremonies.\p"
	.string "Quite haunting...\n$"

FallarborInteriors_Text_Fallarborite6:
	.string "No matter how much I wash\n"
	.string "my hands, I can never quite\l"
	.string "get all the charcoal out...$"

FallarborInteriors_Text_Fallarborite7:
	.string "Have you been wondering how\n"
	.string "to evolve Kyudi? Well, it certainly\l"
	.string "is not by level-up. I have heard\l"
	.string "that the stones that let them\l"
	.string "evolve can be found around the\l"
	.string "Mt. Chimney area.$"

FallarborInteriors_Text_Fallarborite8:
	.string "I used to help run a small\n"
	.string "mom and pop shop in this building\l"
	.string "before Pokémon Centers remodelled\l"
	.string "to have Marts inside them all.\p"
	.string "Of course, that made business\n"
	.string "all but dry up. Monopolies...$"

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

LilycoveInteriors_MapScripts::
	.byte 0

LilycoveInteriors_EventScript_Briney::
	lock
	faceplayer
	speakername LilycoveInteriors_Text_NameBriney
	clearflag FLAG_BRINEY_MIDGAME_VISIT
	msgbox LilycoveInteriors_Text_WantToVoyage, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LilycoveInteriors_EventScript_WarpToTidal
	msgbox LilycoveInteriors_Text_IllBeHere, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

LilycoveInteriors_EventScript_WarpToTidal::
	msgbox LilycoveInteriors_Text_BonVoyage, MSGBOX_DEFAULT
	speakername NULL
	warp MAP_SS_TIDAL_MID_TERIORS, 33, 4
	release
	end

LilycoveInteriors_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_RAITAIC_TRADE_COMPLETED, LilycoveInteriors_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_RAITAIC
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox LilycoveInteriors_Text_IllTradeIfYouWant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LilycoveInteriors_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveInteriors_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, LilycoveInteriors_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox LilycoveInteriors_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
	setflag FLAG_RAITAIC_TRADE_COMPLETED
	release
	end

LilycoveInteriors_EventScript_DeclineTrade::
	msgbox LilycoveInteriors_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
	release
	end

LilycoveInteriors_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox LilycoveInteriors_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
	release
	end

LilycoveInteriors_EventScript_TradeCompleted::
	msgbox LilycoveInteriors_Text_ThanksForTrading, MSGBOX_DEFAULT
	release
	end

LilycoveInteriors_EventScript_LilyIntNPC1::
    msgbox LilycoveInteriors_Text_LilyIntNPC1, MSGBOX_NPC
    end

LilycoveInteriors_EventScript_LilyIntNPC2::
    msgbox LilycoveInteriors_Text_LilyIntNPC2, MSGBOX_NPC
    end

LilycoveInteriors_EventScript_LilyIntNPC3::
    msgbox LilycoveInteriors_Text_LilyIntNPC3, MSGBOX_NPC
    end

LilycoveInteriors_EventScript_LilyIntNPC4::
    msgbox LilycoveInteriors_Text_LilyIntNPC4, MSGBOX_NPC
    end

LilycoveInteriors_EventScript_LilyIntNPC5::
    msgbox LilycoveInteriors_Text_LilyIntNPC5, MSGBOX_NPC
    end

LilycoveInteriors_EventScript_LilyIntNPC6::
    msgbox LilycoveInteriors_Text_LilyIntNPC6, MSGBOX_NPC
    end

LilycoveInteriors_Text_LilyIntNPC1:
	.string "I'm gonna try and get my legs\n"
	.string "fully in shape to start hiking\l"
	.string "the mountains around Arctaiga\l"
	.string "Road! Yeah, I know you can just\l"
	.string "travel through the Cold Mines\l"
	.string "to get up there, but it feels\l"
	.string "so much more impressive to hike it!$"

LilycoveInteriors_Text_LilyIntNPC2:
	.string "The three sisters who operate\n"
	.string "the Pretty Petals Flower Shop\l"
	.string "are my granddaughters.\l"
	.string "I'm so very proud of how they\l"
	.string "conduct themselves! Good on them\l"
	.string "for starting their own business!$"

LilycoveInteriors_Text_LilyIntNPC3:
	.string "Grandmama, do you think I could\n"
	.string "join the Pretty Petals girls?\l"
	.string "I know I'm just their cousin,\l"
	.string "but still... I-I could replace\l"
	.string "Teala at the counter!$"

LilycoveInteriors_Text_LilyIntNPC4:
	.string "The people of Lilycove City\n"
	.string "are in this vintage tech craze\l"
	.string "recently. I don't mind at all!\l"
	.string "Finally, my big, bulky radio\l"
	.string "is hip and trendy again!$"

LilycoveInteriors_Text_LilyIntNPC5:
	.string "Hey. Wondering what I've been\n"
	.string "playing? Well, it's a DS game called\l"
	.string "From The Abyss. You create a\l"
	.string "character and throw them into this\l"
	.string "abyssal dimension with tons\l"
	.string "of monsters. The combat is really\l"
	.string "deeply customizable and pretty\l"
	.string "fun to get the hang of.$"

LilycoveInteriors_Text_LilyIntNPC6:
	.string "Maybe I should aspire to join\n"
	.string "Team Ozone? Their fashion sense\l"
	.string "is decent, plus I'd be helping\l"
	.string "the environment or whatever.\l"
	.string "Sign me up, maybe?$"

LilycoveInteriors_Text_NameBriney:
	.string "Cpt. Briney$"

LilycoveInteriors_Text_IllTradeIfYouWant:
	.string "I'll trade you my {STR_VAR_2} for\n"
	.string "a {STR_VAR_1} if you want.$"

LilycoveInteriors_Text_PleaseBeGoodToMyPokemon:
	.string "Please be good to my POKéMON.$"

LilycoveInteriors_Text_DoesntLookLikeMonToMe:
	.string "Huh? That doesn't look anything like\n"
	.string "a {STR_VAR_1} to me.$"

LilycoveInteriors_Text_YouDontWantToThatsOkay:
	.string "Oh, if you don't want to, that's okay.$"

LilycoveInteriors_Text_ThanksForTrading:
	.string "Thanks for the trade.$"

LilycoveInteriors_Text_WantToVoyage:
	.string "Ahoy there {PLAYER}!\p"
	.string "The Tidal is docked and\n"
	.string "itching for another voyage.\p"
	.string "Will you be joining us?$"

LilycoveInteriors_Text_IllBeHere:
	.string "You're always welcome aboard!\n"
	.string "Have a good one.$"

LilycoveInteriors_Text_BonVoyage:
	.string "About time to haul anchor, then!$"

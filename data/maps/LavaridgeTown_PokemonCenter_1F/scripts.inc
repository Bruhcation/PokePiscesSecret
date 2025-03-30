.set LOCALID_NURSE, 1

LavaridgeTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
	.byte 0

LavaridgeTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Fire::
    msgbox LavaridgeTown_PokemonCenter_1F_Text_Fire, MSGBOX_NPC
    end

LavaridgeTown_PokemonCenter_1F_EventScript_Dragon::
    msgbox LavaridgeTown_PokemonCenter_1F_Text_Dragon, MSGBOX_NPC
    end

LavaridgeTown_PokemonCenter_1F_EventScript_StockUpItems::
    msgbox LavaridgeTown_PokemonCenter_1F_Text_StockUpItems, MSGBOX_NPC
    end

LavaridgeTown_PokemonCenter_1F_EventScript_DurinBerries::
    msgbox LavaridgeTown_PokemonCenter_1F_Text_DurinBerries, MSGBOX_NPC
    end

LavaridgeTown_PokemonCenter_1F_EventScript_TannerLore::
    msgbox LavaridgeTown_PokemonCenter_1F_Text_TannerLore, MSGBOX_NPC
    end

LavaridgeTown_PokemonCenter_1F_Text_Fire:
	.string "Fire types really darn stoke\n"
	.string "my brain flames!\p"
	.string "You run those fellers with a\n"
	.string "Sun-setting team? They become\l"
	.string "real powerhouses, I tell ya!\l"
	.string "I DID want to see if I could\l"
	.string "run the Bloomin' status on 'em,\l"
	.string "but it seems like it doesn't\l"
	.string "affect 'em. Might be too hot!$"

LavaridgeTown_PokemonCenter_1F_Text_Dragon:
	.string "A Dragon will not back down from\n"
	.string "a challenge, no matter how imposing.\l"
	.string "Abilities like Disturb or Intimidate\l"
	.string "will simply not affect a Dragon.$"

LavaridgeTown_PokemonCenter_1F_Text_StockUpItems:
	.string "Stock up on some healing items, yo!\n"
	.string "Especially Revives!\p"
	.string "Takin' the walk back here after every\n"
	.string "fight gets hella exhausting!\l"
	.string "Better to keep a personal healing\l"
	.string "station right in your bag!$"

LavaridgeTown_PokemonCenter_1F_Text_DurinBerries:
	.string "Ah, Durin Berries. What a vile,\n"
	.string "yet fascinating, fruit.\p"
	.string "The people of Lavaridge are quite\n"
	.string "fond of them, as they grow in\l"
	.string "droves here. It may do you some\l"
	.string "good to appease the residents and\l"
	.string "chow down on some Durin Berries.\l"
	.string "I know they may taste... peculiar,\l"
	.string "but you'll build up a resistance.$"

LavaridgeTown_PokemonCenter_1F_Text_TannerLore:
	.string "That there boy at the counter?\n"
	.string "That's my nephew, Tanner! He's\l"
	.string "the greatest worker in our family.\l"
	.string "I know the poor guy gets really\l"
	.string "exhausted having to work so\l"
	.string "many hours... be kind to him whenever\l"
	.string "you buy items, okay? Or his auntie\l"
	.string "will come getcha! Hee-hee!$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
	.string "I think POKéMON get closer to their\n"
	.string "TRAINERS if they spend time together.\p"
	.string "The longer the better.\n"
	.string "That's what I think.$"

LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
	.string "It's sort of magical how just sitting\n"
	.string "in a hot-spring pool can invigorate.\p"
	.string "I wish I could let my POKéMON\n"
	.string "soak, too.$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
	.string "Hohoho! Hey, kid, you can reach\n"
	.string "the hot springs from here.\p"
	.string "If POKéMON are getting rest, so too\n"
	.string "should their TRAINERS.$"


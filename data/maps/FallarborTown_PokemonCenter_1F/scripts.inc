.set LOCALID_NURSE, 1
.set LOCALID_LANETTE, 4

FallarborTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
	.byte 0

FallarborTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
	end

FallarborTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FallarborTown_PokemonCenter_1F_EventScript_Girl::
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_Lanette::
	lock
	faceplayer
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
	end

FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth::
	applymovement LOCALID_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth
	waitmovement 0
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
	end

FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest::
	applymovement LOCALID_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest
	waitmovement 0
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
	end

FallarborTown_PokemonCenter_1F_EventScript_LanetteExited::
	playse SE_SLIDING_DOOR
	removeobject LOCALID_LANETTE
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
	release
	end

FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FallarborTown_PokemonCenter_1F_EventScript_Relic::
    msgbox FallarborTown_PokemonCenter_1F_Text_Relic, MSGBOX_NPC
    end

FallarborTown_PokemonCenter_1F_EventScript_Poison::
    msgbox FallarborTown_PokemonCenter_1F_Text_Poison, MSGBOX_NPC
    end

FallarborTown_PokemonCenter_1F_EventScript_PokenavFly::
    msgbox FallarborTown_PokemonCenter_1F_Text_PokenavFly, MSGBOX_NPC
    end

FallarborTown_PokemonCenter_1F_EventScript_Retroroach::
    msgbox FallarborTown_PokemonCenter_1F_Text_Retroroach, MSGBOX_NPC
    end

FallarborTown_PokemonCenter_1F_Text_Relic:
	.string "I am most intrigued by the\n"
	.string "Relic type. More than any other.\l"
	.string "Maybe that is because it is so rare.\p"
	.string "Allow me to run down their strengths\n"
	.string "and weaknesses. Defensively, they\l"
	.string "are weak to Grass and Psychic,\l"
	.string "while resisting Fire, Water, and\l"
	.string "Ghost type moves.\p"
	.string "Offensively, Relic type moves are\n"
	.string "strong against Dragon and Fairy,\l"
	.string "and resisted by Grass and Ghost.\p"
	.string "Perhaps their biggest anomaly\n"
	.string "when compared to other types is\l"
	.string "the amount of moves they get\l"
	.string "that add in more super effectiveness.\l"
	.string "Think, Freeze Dry. But, Relic\l"
	.string "gets many moves like it.\p"
	.string "Try one out, if you can find one.\n$"

FallarborTown_PokemonCenter_1F_Text_Poison:
	.string "Yaaaa-shaawww! Imma Poison you!\n"
	.string "With my Poison type Pokémon!\p"
	.string "...Eh. I will let you live.\n"
	.string "As long as you carry on my ninja\l"
	.string "way, and Poison anything that moves!$"

FallarborTown_PokemonCenter_1F_Text_PokenavFly:
	.string "If you have the Fortree City\n"
	.string "gym badge, your Pokémon can Fly\l"
	.string "to any city you have visited straight\l"
	.string "from your PokeNav's Map!$"

FallarborTown_PokemonCenter_1F_Text_Retroroach:
	.string "Retroroach... what an odd Pokémon.\n"
	.string "They are seldom seen enough to\l"
	.string "reach folklore status, yet reports\l"
	.string "of them being sighted come from\l"
	.string "all over the region...$"

FallarborTown_PokemonCenter_1F_Text_LanetteGreeting:
	.string "Oh, hello.\n"
	.string "You are?\p"
	.string "Okay, your name's {PLAYER}{KUN}.\n"
	.string "I can see that you're a TRAINER.\p"
	.string "So that means you use the POKéMON\n"
	.string "Storage System I developed.\p"
	.string "How I arrived at that conclusion is\n"
	.string "a simple deductive process.\p"
	.string "You spoke to me because you wanted\n"
	.string "to access something on this PC.\p"
	.string "Oh, I'm sorry. I'm LANETTE.\p"
	.string "Honestly, I'm glad to meet you--it's\n"
	.string "great you're using the Storage System.\p"
	.string "If you could, please visit me at home.\n"
	.string "My house is on ROUTE 114.$"

FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
	.string "I wonder what POKéMON looked like\n"
	.string "long, long ago?\p"
	.string "Maybe the FOSSIL MANIAC at the edge\n"
	.string "of town will know.$"

FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
	.string "In the fields of FALLARBOR, we plant\n"
	.string "seedlings of hardy trees that thrive\l"
	.string "even in volcanic ash.$"


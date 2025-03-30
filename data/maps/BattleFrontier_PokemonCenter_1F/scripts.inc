.set LOCALID_NURSE, 1

BattleFrontier_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_PokemonCenter_1F_OnTransition
	.byte 0

BattleFrontier_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VERDANTURF_NEW
	end

BattleFrontier_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_PokemonCenter_1F_EventScript_SchoolKid::
	msgbox BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Man::
	msgbox BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Picnicker::
	msgbox BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_GearUp::
	msgbox BattleFrontier_PokemonCenter_1F_Text_GearUp, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_SuperCharged::
	msgbox BattleFrontier_PokemonCenter_1F_Text_SuperCharged, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_Text_GearUp:
	.string "There are certain moves that let\n"
	.string "Pokemon become Geared Up. And when\l"
	.string "a Pokemon is Geared Up, the power\l"
	.string "of their Steel type moves increase.\p"
	.string "This can also cause certain moves\n"
	.string "like Shift Gear and Autotomize\l"
	.string "to gain bonus effects.\l"
	.string "Combine it with the Super-charged\l"
	.string "status? Hoo man... you can very\l"
	.string "much run the table.$"

BattleFrontier_PokemonCenter_1F_Text_SuperCharged:
	.string "Gzzzrt! I'm SUPERCHARGED! Just\n"
	.string "like my Pokemon after I use Charge!\p"
	.string "It makes Electric type moves more\n"
	.string "powerful and also adds neat side\l"
	.string "effects to moves like Magnet Rise\l"
	.string "and Zap Cannon! Plus, it can even\l"
	.string "combine with the Geared Up status\l"
	.string "to do even crazier side effects!$"

BattleFrontier_PokemonCenter_1F_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox BattleFrontier_PokemonCenter_1F_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon:
	.string "There was someone here using a \n"
	.string "POKéMON I've never seen before.\p"
	.string "I never learned about it at\n"
	.string "TRAINER'S SCHOOL at least.\p"
	.string "I wonder where you can catch POKéMON\n"
	.string "like that.$"

BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena:
	.string "Okay! Next stop, the BATTLE ARENA!\n"
	.string "I'd better get the right POKéMON from\l"
	.string "the PC Storage System.$"

BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge:
	.string "Giggle… I'm going to go through every\n"
	.string "challenge with just this baby!$"

BattleFrontier_PokemonCenter_1F_Text_Skitty:
	.string "SKITTY: Mya myaaah!$"


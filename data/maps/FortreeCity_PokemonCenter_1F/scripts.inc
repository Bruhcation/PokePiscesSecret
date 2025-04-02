.set LOCALID_NURSE, 1

FortreeCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
	.byte 0

FortreeCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FORTREE_CITY
	end

FortreeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Man::
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Boy::
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Grassy::
	msgbox FortreeCity_PokemonCenter_1F_Text_Grassy, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Electric::
	msgbox FortreeCity_PokemonCenter_1F_Text_Electric, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Psychic::
	msgbox FortreeCity_PokemonCenter_1F_Text_Psychic, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Misty::
	msgbox FortreeCity_PokemonCenter_1F_Text_Misty, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Ground::
	msgbox FortreeCity_PokemonCenter_1F_Text_Ground, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Flying::
	msgbox FortreeCity_PokemonCenter_1F_Text_Flying, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_Text_Grassy:
	.string "Hey, we're a part of the\n"
	.string "Terrain Fan Club! I like the\l"
	.string "Grassy Terrain the most.\p"
	.string "It boosts the power of Grass moves\n"
	.string "and restores a bit of HP for\l"
	.string "all grounded Pokémon every turn!$"

FortreeCity_PokemonCenter_1F_Text_Electric:
	.string "Hey, we're a part of the\n"
	.string "Terrain Fan Club! I like the\l"
	.string "Electric Terrain the most.\p"
	.string "It boosts the power of Electric moves\n"
	.string "and prevents all grounded\l"
	.string "Pokémon from falling asleep!$"

FortreeCity_PokemonCenter_1F_Text_Psychic:
	.string "Hey, we're a part of the\n"
	.string "Terrain Fan Club! I like the\l"
	.string "Psychic Terrain the most.\p"
	.string "It boosts the power of Psychic moves\n"
	.string "and prevents all grounded\l"
	.string "Pokémon from using priority moves!$"

FortreeCity_PokemonCenter_1F_Text_Misty:
	.string "Hey, we're a part of the\n"
	.string "Terrain Fan Club! I like the\l"
	.string "Misty Terrain the most.\p"
	.string "It boosts the power of Fairy moves\n"
	.string "and increases the secondary effect\l"
	.string "chances of moves for all grounded\l"
	.string "Pokémon! ...Except for flinch!$"

FortreeCity_PokemonCenter_1F_Text_Ground:
	.string "The Ground type is a phenomenal\n"
	.string "attacking type. I like using those\l"
	.string "Pokémon the best.\l"
	.string "As an added bonus, Ground type\l"
	.string "Pokémon receive slightly less\l"
	.string "damage when a Terrain is present.$"

FortreeCity_PokemonCenter_1F_Text_Flying:
	.string "Flying type Pokémon are really\n"
	.string "crafty! No way for them to be\l"
	.string "bamboozled by entry hazards,\l"
	.string "they just fly right over them!\l"
	.string "...Except Stealth Rocks... yeesh...\l"
	.string "I HATE Stealth Rocks...$"

FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
	.string "Listen, kid, are you working\n"
	.string "on a POKéDEX?\p"
	.string "Hmm… Go to the SAFARI ZONE.\n"
	.string "That's my suggestion.$"

FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
	.string "Have you done anything at\n"
	.string "the RECORD CORNER?\p"
	.string "It's pretty neat. It mixes and matches\n"
	.string "the records of TRAINERS.\p"
	.string "I don't know quite how it works,\n"
	.string "but it's cool. It's exciting, even!$"

FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
	.string "Oh, wow, you have a POKéNAV!\n"
	.string "And it's just like mine!\p"
	.string "Do you know about POKéNAV's\n"
	.string "MATCH CALL system?\p"
	.string "Access it, and you can chat with\n"
	.string "registered TRAINERS anytime.\p"
	.string "It also shows you which TRAINERS\n"
	.string "want a rematch with you.\p"
	.string "It's really nifty! Those DEVON guys\n"
	.string "sure know what they're doing!$"


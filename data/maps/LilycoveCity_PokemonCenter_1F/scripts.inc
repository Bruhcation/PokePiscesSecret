.set LOCALID_NURSE, 1

LilycoveCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_OnTransition
	.byte 0

LilycoveCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
	end

LilycoveCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_Boy::
	msgbox LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon, MSGBOX_NPC
	end

LilycoveCity_PokemonCenter_1F_EventScript_Maniac::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone
	msgbox LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone::
	msgbox LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_BugType::
    msgbox LilycoveCity_PokemonCenter_1F_Text_BugType, MSGBOX_NPC
    end

LilycoveCity_PokemonCenter_1F_EventScript_CheckPokedexFindMons::
    msgbox LilycoveCity_PokemonCenter_1F_Text_CheckPokedexFindMons, MSGBOX_NPC
    end

LilycoveCity_PokemonCenter_1F_EventScript_RestoringHeldItems::
    msgbox LilycoveCity_PokemonCenter_1F_Text_RestoringHeldItems, MSGBOX_NPC
    end

LilycoveCity_PokemonCenter_1F_EventScript_PaletteChanges::
    msgbox LilycoveCity_PokemonCenter_1F_Text_PaletteChanges, MSGBOX_NPC
    end

LilycoveCity_PokemonCenter_1F_Text_BugType:
	.string "I enjoy bugs. What more can\n"
	.string "I say?\p"
	.string "They're so fascinating.\n"
	.string "Did you even realize that\l"
	.string "any Bug type Pokémon can use\l"
	.string "its attacks to bypass enemy\l"
	.string "defensive barriers? Yep.\l"
	.string "Protect, Substitute, Reflect,\l"
	.string "Light Screen, Safeguard,\l"
	.string "Mist, Lucky Chant...\l"
	.string "Those won't protect you\l"
	.string "from those sneaky critters.\p"
	.string "To be clear, by the way, on\n"
	.string "the Protect bypassing...\p"
	.string "Bug type Pokemon's attacks can\n"
	.string "only infiltrate Protect, NOT\l"
	.string "any of its more powerful variants\l"
	.string "like Spiky Shield. Those add\l"
	.string "more of a complicated layer\l"
	.string "to the equation.$"

LilycoveCity_PokemonCenter_1F_Text_CheckPokedexFindMons:
	.string "Oh, you have a Pokedex? Sweet!\p"
	.string "That thing is a good indicator\n"
	.string "of where Pokemon can be found.\l"
	.string "just use the Area section!\p"
	.string "Only thing is, it won't tell you\n"
	.string "if a Pokemon is only findable in\l"
	.string "a given area by say, fishing,\l"
	.string "or Rock Smash rocks.\l"
	.string "So it can be a little bit of\l"
	.string "trial and error.$"

LilycoveCity_PokemonCenter_1F_Text_RestoringHeldItems:
	.string "Hey, do you like using items\n"
	.string "like Berries? Or something like\l"
	.string "Missurance? I'm talking held items\l"
	.string "that get used up on use.\p"
	.string "Don't have to worry about them not\n"
	.string "coming back; after a battle, those\l"
	.string "items will restore!$"

LilycoveCity_PokemonCenter_1F_Text_PaletteChanges:
	.string "Hmmm... is it just me, or...\p"
	.string "My two Ledyba look slightly\n"
	.string "different from each other in color.\l"
	.string "But I know that neither are Shiny.\p"
	.string "Maybe... oh, maybe every Pokemon\n"
	.string "has slight variations in hue?\l"
	.string "That would make some sense!$"

LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon:
	.string "I wonder how many kinds of POKéMON\n"
	.string "there are in the world.\p"
	.string "It'd be great to cross seas and\n"
	.string "trade POKéMON with people far away.$"

LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels:
	.string "I've been hearing about some rotten\n"
	.string "scoundrels who steal POKéMON and rip\l"
	.string "off METEORITES.$"

LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels:
	.string "Those rotten scoundrels who steal\n"
	.string "POKéMON and rip off METEORITES…\p"
	.string "I haven't seen them around recently.$"


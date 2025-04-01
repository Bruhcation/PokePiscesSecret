.set LOCALID_NURSE, 1

VerdanturfTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
	.byte 0

VerdanturfTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_ZOTPYRE_VILLAGE
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_DontKnowTypes::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_DontKnowTypes, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_HowToCounterStatRaises::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_HowToCounterStatRaises, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ItemCheck::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_ItemCheck, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Phantom::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_Phantom, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_Text_DontKnowTypes:
	.string "Having trouble figuring out the\n"
	.string "types of an opponent's Pokémon?\p"
	.string "Just pay attention to what is\n"
	.string "and isnt effective against it.\l"
	.string "You don't always need to have the\l"
	.string "perfect type counter to every\l"
	.string "Pokémon there is; strategy can\l"
	.string "overcome all perceived disadvantages.\p"
	.string "Of course, the best way to\n"
	.string "learn the type of a Pokémon\l"
	.string "is by catching it. The more\l"
	.string "your Pokedex gets filled out,\l"
	.string "the bigger your base of knowledge.$"

VerdanturfTown_PokemonCenter_1F_Text_HowToCounterStatRaises:
	.string "Didja ever get in a situation\n"
	.string "where it felt like a Pokémon that\l"
	.string "you were fighting boosted its\l"
	.string "stats enough that it seemed\l"
	.string "unstoppable?\p"
	.string "I get it, foes setting up with\n"
	.string "a lot of stat raises can feel\l"
	.string "like an impassable wall. But there\l"
	.string "are many ways to circumvent\l"
	.string "being in that situation.\p"
	.string "Consider packing moves like\n"
	.string "Clear Smog and Haze that clear\l"
	.string "all stat changes from a target\l"
	.string "to shut down that kind of playstyle.\l"
	.string "Or, try building your team\l"
	.string "around trying to go for critical\l"
	.string "hits. Those break through\l"
	.string "defensive stat raises!\p"
	.string "And, of course, you can counter\n"
	.string "stat raise users by becoming\l"
	.string "one yourself. Best to beat them\l"
	.string "at their own game, eh?$"

VerdanturfTown_PokemonCenter_1F_Text_ItemCheck:
	.string "How many held items have you\n"
	.string "accumulated? The more you have\l"
	.string "gotten from helping people out\l"
	.string "and doing a lot of exploring,\l"
	.string "the more varied strats you can\l"
	.string "use in battles.$"

VerdanturfTown_PokemonCenter_1F_Text_Phantom:
	.string "Ghost type Pokémon have access to\n"
	.string "a particularly rare status known\l"
	.string "as Phantom status.\p"
	.string "Given to the user by the move\n"
	.string "Phantasm, a Pokémon with Phantom\l"
	.string "status will have their Speed\l"
	.string "doubled, as well as their critical\l"
	.string "hit ratio AND damage increased.\l"
	.string "Much like Dig or Fly, a Pokémon\l"
	.string "that is statused with Phantom\l"
	.string "cannot be attacked or targetted.\p"
	.string "However, this is not something\n"
	.string "that can be used freely. A Pokémon\l"
	.string "with Phantom status can only use\l"
	.string "attacking moves, and the status\l"
	.string "goes away after one attack.\l"
	.string "It is basically a hyper-powerup\l"
	.string "for one single attack.\p"
	.string "Watch out for Phantasm users!$"

VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
	.string "You can't consider yourself a real\n"
	.string "TRAINER if you don't have faith\l"
	.string "in your POKéMON.\p"
	.string "Only those people who can believe\n"
	.string "in their battling POKéMON can win\l"
	.string "through to the very end.$"

VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
	.string "The reason why anyone would visit\n"
	.string "VERDANTURF…\p"
	.string "It's the BATTLE TENT. It goes without\n"
	.string "saying.\p"
	.string "Or is there somebody here that you\n"
	.string "came to see?$"


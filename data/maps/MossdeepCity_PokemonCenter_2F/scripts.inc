.set LOCALID_NURSE, 1

MossdeepCity_PokemonCenter_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_PokemonCenter_2F_OnTransition
	.byte 0

MossdeepCity_PokemonCenter_2F_OnTransition:
	setrespawn HEAL_LOCATION_NEW_SUNBEACH
	call_if_lt VAR_BALL_QUEST_STATE, 2, MossdeepCity_PokemonCenter_2F_EventScript_RemovePhillipe
	call_if_gt VAR_BALL_QUEST_STATE, 2, MossdeepCity_PokemonCenter_2F_EventScript_RemovePhillipe
	end

MossdeepCity_PokemonCenter_2F_EventScript_RemovePhillipe::
	removeobject LOCALID_PHILLIPE
	setflag FLAG_TEMP_11
	return

MossdeepCity_PokemonCenter_2F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

MossdeepCity_PokemonCenter_2F_EventScript_BallQuestGuy::
	lock
	faceplayer
	speakername MossdeepCity_PokemonCenter_2F_Text_NamePhillipe
	goto_if_gt VAR_BALL_QUEST_STATE, 2, MossdeepCity_PokemonCenter_2F_EventScript_NoMoreQuest
	goto_if_set FLAG_BALL_QUEST_DIALOGUE_TRUNCATOR, MossdeepCity_PokemonCenter_2F_EventScript_BallQuestGuyTruncated
	setflag FLAG_BALL_QUEST_DIALOGUE_TRUNCATOR
	msgbox MossdeepCity_PokemonCenter_2F_Text_HaveYouCaughtThisMon, MSGBOX_DEFAULT
	getcaughtmon SPECIES_MINOTE
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_PokemonCenter_2F_EventScript_Check2
	msgbox MossdeepCity_PokemonCenter_2F_Text_GoCatchIt, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

MossdeepCity_PokemonCenter_2F_EventScript_BallQuestGuyTruncated::
	msgbox MossdeepCity_PokemonCenter_2F_Text_CaughtMonReminder, MSGBOX_DEFAULT
	getcaughtmon SPECIES_MINOTE
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_PokemonCenter_2F_EventScript_Check2
	msgbox MossdeepCity_PokemonCenter_2F_Text_GoCatchIt, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

MossdeepCity_PokemonCenter_2F_EventScript_Check2::
	getcaughtmon SPECIES_SLICKSLICE
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_PokemonCenter_2F_EventScript_Check3
	msgbox MossdeepCity_PokemonCenter_2F_Text_GoCatchIt, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

MossdeepCity_PokemonCenter_2F_EventScript_Check3::
	getcaughtmon SPECIES_SPOINK
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_PokemonCenter_2F_EventScript_GiveNewBall
	msgbox MossdeepCity_PokemonCenter_2F_Text_GoCatchIt, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

MossdeepCity_PokemonCenter_2F_EventScript_GiveNewBall::
	addvar VAR_BALL_QUEST_STATE, 1
	clearflag FLAG_BALL_QUEST_DIALOGUE_TRUNCATOR
	msgbox MossdeepCity_PokemonCenter_2F_Text_YouveUnlockedNewBall, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

MossdeepCity_PokemonCenter_2F_EventScript_GoDoPreviousQuest::
	msgbox MossdeepCity_PokemonCenter_2F_Text_GoDoPreviousQuest, MSGBOX_NPC
	speakername NULL
	release
	end

MossdeepCity_PokemonCenter_2F_EventScript_NoMoreQuest::
	msgbox MossdeepCity_PokemonCenter_2F_Text_NoMoreQuest, MSGBOX_NPC
	speakername NULL
	release
	end

MossdeepCity_PokemonCenter_2F_EventScript_WaterType::
    msgbox MossdeepCity_PokemonCenter_2F_Text_WaterType, MSGBOX_NPC
    end

MossdeepCity_PokemonCenter_2F_EventScript_FightingType::
    msgbox MossdeepCity_PokemonCenter_2F_Text_FightingType, MSGBOX_NPC
    end

MossdeepCity_PokemonCenter_2F_EventScript_Infatuation::
    msgbox MossdeepCity_PokemonCenter_2F_Text_Infatuation, MSGBOX_NPC
    end

MossdeepCity_PokemonCenter_2F_Text_WaterType:
	.string "I like Water type Pokémon!\n"
	.string "What about you?\l"
	.string "They really do good in battle!\p"
	.string "Only thing about it that is\n"
	.string "kinda annoying is that its attacks\l"
	.string "are resisted by Grass and Ice types.\l"
	.string "That kinda blows.\p"
	.string "But you can get so many of them!\n"
	.string "I have so many favorites!\l"
	.string "If you don't have a really nice\l"
	.string "fishing rod, there's a nice man\l"
	.string "close to this building that\l"
	.string "is giving them out!$"

MossdeepCity_PokemonCenter_2F_Text_FightingType:
	.string "At ease. My stance is always\n"
	.string "at the ready, but I will not\l"
	.string "attack you out of the blue.\p"
	.string "Do you enjoy Fighting type Pokémon?\n"
	.string "They are the only ones that\l"
	.string "can keep up with my training regimen.\p"
	.string "Their moves hit hard when super\n"
	.string "effective, doing slightly more\l"
	.string "damage than other types would\l"
	.string "on a super effective hit.\l"
	.string "That small boost can be the ticket\l"
	.string "you need to pierce through\l"
	.string "a stonewalling foe.$"

MossdeepCity_PokemonCenter_2F_Text_Infatuation:
	.string "Oh, to be a Pokémon in love...\n"
	.string "they are so very clumsy when\l"
	.string "they get Infatuated!\p"
	.string "Moves like Attract can cause\n"
	.string "the Infatuation status on\l"
	.string "opposite-gender Pokémon.\l"
	.string "When a Pokémon is in love, it will\l"
	.string "have a 25 percent chance to choose\l"
	.string "not to attack because of its love.\p"
	.string "In addition, Infatuated Pokémon\n"
	.string "take slightly more damage, and\l"
	.string "deal slightly less damage.\l"
	.string "They just can't bare to hurt the\l"
	.string "ones that they adore!$"

MossdeepCity_PokemonCenter_2F_Text_NamePhillipe:
	.string "Phillipe$"

MossdeepCity_PokemonCenter_2F_Text_HaveYouCaughtThisMon:
	.string "Salut! It is you again, mon\n"
	.string "super étoile! Honh honh,\l"
	.string "you have un parfaite timing,\l"
	.string "for I am in need of artistic\l"
	.string "inspiration again!\l"
	.string "Could you assister your\l"
	.string "amie, Phillipe, again?\p"
	.string "I would like to lay an eye on\n"
	.string "3 particular Pokémon.\p"
	.string "Slickslice, Minote, Spoink.\p"
	.string "Catch those trés and show me your\n"
	.string "Pokédex, and I will make it\l"
	.string "worth your troubles.$"

MossdeepCity_PokemonCenter_2F_Text_CaughtMonReminder:
	.string "Slickslice, Minote, Spoink...\n"
	.string "I very much would like to see them!\p"
	.string "Do you have them registered\l"
	.string "in your Pokédex?$"

MossdeepCity_PokemonCenter_2F_Text_GoCatchIt:
	.string "I see you have not the required\n"
	.string "Pokémon, amie. You should check\l"
	.string "their locations in your Pokédex.\p"
	.string "Bonne chance!$"

MossdeepCity_PokemonCenter_2F_Text_YouveUnlockedNewBall:
	.string "...\p"
	.string "Ah! There they are! Lovely catches!\p"
	.string "Spoink, hopping up and down...\n"
	.string "Minote's neon colouration...\l"
	.string "Slickslice's dopey lovable face...\p"
	.string "Inspiration strikes! Incroyable!\n"
	.string "I must get to painting.\p"
	.string "Merci, trainer. I will put in a good\n"
	.string "word for you with Purplina;\l"
	.string "you should soon be able to\l"
	.string "purchase Friend Balls from her.\p"
	.string "Au revoir!$"

MossdeepCity_PokemonCenter_2F_Text_GoDoPreviousQuest:
	.string "go do the last one(s)$"

MossdeepCity_PokemonCenter_2F_Text_NoMoreQuest:
	.string "Bon aprés-midi, trainer.\n"
	.string "I have naught in the way of new\l"
	.string "jobs for you this very moment.\p"
	.string "Perhaps when we next meet,\n"
	.string "we shall work together again.$"

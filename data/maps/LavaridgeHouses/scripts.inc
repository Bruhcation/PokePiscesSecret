LavaridgeHouses_MapScripts::
	.byte 0

LavaridgeHouses_EventScript_DurinGrandma::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_11, LavaridgeHouses_EventScript_DurinGrandmaPostEat
	goto_if_ge VAR_DURIN_RESISTANCE, 5, LavaridgeHouses_EventScript_DurinGrandmaPostEat
	msgbox LavaridgeHouses_Text_MyGrandkidsDidntShow, MSGBOX_DEFAULT
	multichoice 19, 4, MULTI_EAT_OR_DONT_EAT, TRUE
	copyvar VAR_TEMP_1, VAR_RESULT
	switch VAR_TEMP_1
	case 0, LavaridgeHouses_EventScript_DurinGrandmaEat
	case 1, LavaridgeHouses_EventScript_DurinGrandmaDontEat
	release
	end

LavaridgeHouses_EventScript_DurinGrandmaEat::
	call LavaridgeHouses_EventScript_DurinResistanceCheck
	setflag FLAG_TEMP_11
	msgbox LavaridgeHouses_Text_DurinGrandmaEat, MSGBOX_AUTOCLOSE
	release
	end

LavaridgeHouses_EventScript_DurinGrandmaDontEat::
	msgbox LavaridgeHouses_Text_DurinGrandmaDontEat, MSGBOX_AUTOCLOSE
	release
	end

LavaridgeHouses_EventScript_DurinGrandmaPostEat::
	msgbox LavaridgeHouses_Text_DurinGrandmaPost, MSGBOX_AUTOCLOSE
	release
	end

LavaridgeHouses_EventScript_DurinResistanceCheck::
	switch VAR_DURIN_RESISTANCE
	case 1, LavaridgeHouses_EventScript_EatResist0
	case 2, LavaridgeHouses_EventScript_EatResist1
	case 3, LavaridgeHouses_EventScript_EatResist2
	case 4, LavaridgeHouses_EventScript_EatResist3
	case 5, LavaridgeHouses_EventScript_EatResistMax
	return

LavaridgeHouses_EventScript_EatResist0::
	playse SE_FIELD_POISON
	msgbox LavaridgeHouses_Text_EatResist0, MSGBOX_DEFAULT
	addvar VAR_DURIN_RESISTANCE, 1
	return

LavaridgeHouses_EventScript_EatResist1::
	playse SE_FIELD_POISON
	msgbox LavaridgeHouses_Text_EatResist1, MSGBOX_DEFAULT
	addvar VAR_DURIN_RESISTANCE, 1
	return

LavaridgeHouses_EventScript_EatResist2::
	playse SE_FIELD_POISON
	msgbox LavaridgeHouses_Text_EatResist2, MSGBOX_DEFAULT
	addvar VAR_DURIN_RESISTANCE, 1
	return

LavaridgeHouses_EventScript_EatResist3::
	msgbox LavaridgeHouses_Text_EatResist3, MSGBOX_DEFAULT
	addvar VAR_DURIN_RESISTANCE, 1
	return

LavaridgeHouses_EventScript_EatResistMax::
	msgbox LavaridgeHouses_Text_EatResistMax, MSGBOX_DEFAULT
	return

LavaridgeHouses_EventScript_TrickRoom::
	lock
	faceplayer
	checkitem ITEM_TM_TRICK_ROOM
	goto_if_eq VAR_RESULT, TRUE, LavaridgeHouses_EventScript_GaveTrickRoom
	msgbox LavaridgeHouses_Text_TrickRoom, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM_TRICK_ROOM
	closemessage
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	release
	end

LavaridgeHouses_EventScript_GaveTrickRoom::
	msgbox LavaridgeHouses_Text_GaveTrickRoom, MSGBOX_AUTOCLOSE
	release
	end

LavaridgeHouses_EventScript_Mustybane::
	msgbox LavaridgeHouses_Text_Mustybane, MSGBOX_NPC
	end

LavaridgeHouses_EventScript_BlackBelt1::
	msgbox LavaridgeHouses_Text_BlackBelt1, MSGBOX_NPC
	end

LavaridgeHouses_EventScript_BlackBelt2::
	msgbox LavaridgeHouses_Text_BlackBelt2, MSGBOX_NPC
	end

LavaridgeHouses_Text_BlackBelt1:
	.string "The Lavaridge Gym does not\n"
	.string "particularly have a puzzle.\l"
	.string "No, instead, they will interrogate\l"
	.string "you as soon as you come in.\p"
	.string "You have to be prepared for them\n"
	.string "to drill you about anything.\l"
	.string "Wrong answers get punished...$"

LavaridgeHouses_Text_BlackBelt2:
	.string "Show some backbone when you\n"
	.string "challenge the gym! Don't give\l"
	.string "cowardly answers. They want to\l"
	.string "see that you're a tough cookie!$"

LavaridgeHouses_Text_TrickRoom:
	.string "I'm pretty slow. Not like, mind wise,\n"
	.string "don't start snickering.\l"
	.string "I meant feet wise. I like to\l"
	.string "take my time, and my Pokemon do too.\p"
	.string "The perfect move for them is\n"
	.string "Trick Room! ...And you know what,\l"
	.string "since you didn't laugh at me,\l"
	.string "I'll let you have the TM.$"

LavaridgeHouses_Text_GaveTrickRoom:
	.string "Going at a nice leisurely pace\n"
	.string "lets you appreciate the\l"
	.string "beauty of life! Or at least, that's\l"
	.string "my excuse.$"

LavaridgeHouses_Text_EatResist0:
	.string "(You take a bite of the berry...)\p"
	.string "(It tastes like week-old compost\n"
	.string "overrun with mold. Your\l"
	.string "stomach instantly and viscerally\l"
	.string "rejects the food. You\l"
	.string "instantly feel ill, as does\l"
	.string "your party.)$"

LavaridgeHouses_Text_EatResist1:
	.string "(Bad again. Bad bad bad.\n"
	.string "Your tongue frowns at you\l"
	.string "as you attempt to swallow\l"
	.string "the rank, festering fruit.\l"
	.string "It goes down somewhat easier.\l"
	.string "But was it worth it?)$"

LavaridgeHouses_Text_EatResist2:
	.string "(Yuck. The taste being familiar\n"
	.string "does not help in any way.\l"
	.string "Must resist the urge to spit\l"
	.string "it out and muscle through.)$"

LavaridgeHouses_Text_EatResist3:
	.string "(...This time, you could\n"
	.string "stomach it. It certainly is\l"
	.string "terrible, but getting it down\l"
	.string "quickly doesn't let the\l"
	.string "taste linger too long.\l"
	.string "There's a possibility that you\l"
	.string "are getting resilient to\l"
	.string "Durin Berries.)$"

LavaridgeHouses_Text_EatResistMax:
	.string "(Down... the hatch.\n"
	.string "Quick and somewhat painless.)$"

LavaridgeHouses_Text_MyGrandkidsDidntShow:
	.string "Oh... good day to you.\p"
	.string "My grandkids unfortunately\n"
	.string "couldn't visit today. We\l"
	.string "had planned on it, but,\l"
	.string "last minute complications...\p"
	.string "I cut up a bushel of their\n"
	.string "favorite berries in\l"
	.string "anticipation... oh, dear.\l"
	.string "I may have to throw them out.\p"
	.string "(It would prove kind to\n"
	.string "indulge the grandma...)$"

LavaridgeHouses_Text_DurinGrandmaEat:
	.string "Oh, sweetheart. That was\n"
	.string "awfully kind to sit with me.\l"
	.string "You remind me of my eldest!\p"
	.string "Now the food won't go to\n"
	.string "waste, thank heavens...$"

LavaridgeHouses_Text_DurinGrandmaDontEat:
	.string "Don't you worry about\n"
	.string "me, sweetheart.\l"
	.string "I will be fine.$"

LavaridgeHouses_Text_DurinGrandmaPost:
	.string "The kiddos are little\n"
	.string "bottles of chaos sometimes...\l"
	.string "but we can't take youthful\l"
	.string "energy for granted.\l"
	.string "I'll continue to spoil them!$"

LavaridgeHouses_Text_Mustybane:
	.string "Mustybane...\p"
	.string "I've heard somewhere that it's some \n"
	.string "kind of variant of a dog Pokémon.\p"
	.string "There's no way that can be right,\n"
	.string "can it?$"

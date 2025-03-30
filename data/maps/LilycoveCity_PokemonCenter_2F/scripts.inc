.set LOCALID_NURSE, 1
.set LOCALID_PHILLIPE, 3

LilycoveCity_PokemonCenter_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_2F_OnTransition
	.byte 0

LilycoveCity_PokemonCenter_2F_OnTransition:
	setrespawn HEAL_LOCATION_BRUMIST
	call_if_lt VAR_BALL_QUEST_STATE, 3, LilycoveCity_PokemonCenter_2F_EventScript_RemovePhillipe
	call_if_gt VAR_BALL_QUEST_STATE, 3, LilycoveCity_PokemonCenter_2F_EventScript_RemovePhillipe
	end

LilycoveCity_PokemonCenter_2F_EventScript_RemovePhillipe::
	removeobject LOCALID_PHILLIPE
	setflag FLAG_TEMP_11
	return

LilycoveCity_PokemonCenter_2F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_BallQuestGuy::
	lock
	faceplayer
	speakername LilycoveCity_PokemonCenter_2F_Text_NamePhillipe
	goto_if_set FLAG_BALL_QUEST_DIALOGUE_TRUNCATOR, LilycoveCity_PokemonCenter_2F_EventScript_BallQuestGuyTruncated
	setflag FLAG_BALL_QUEST_DIALOGUE_TRUNCATOR
	msgbox LilycoveCity_PokemonCenter_2F_Text_HaveYouCaughtThisMon, MSGBOX_DEFAULT
	getcaughtmon SPECIES_LOTTABATS
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonCenter_2F_EventScript_Check2
	msgbox LilycoveCity_PokemonCenter_2F_Text_GoCatchIt, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_BallQuestGuyTruncated::
	msgbox LilycoveCity_PokemonCenter_2F_Text_CaughtMonReminder, MSGBOX_DEFAULT
	getcaughtmon SPECIES_LOTTABATS
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonCenter_2F_EventScript_Check2
	msgbox LilycoveCity_PokemonCenter_2F_Text_GoCatchIt, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_Check2::
	getcaughtmon SPECIES_MATCHLIT
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonCenter_2F_EventScript_Check3
	msgbox LilycoveCity_PokemonCenter_2F_Text_GoCatchIt, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_Check3::
	getcaughtmon SPECIES_FLAGUE
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonCenter_2F_EventScript_GiveNewBall
	msgbox LilycoveCity_PokemonCenter_2F_Text_GoCatchIt, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_GiveNewBall::
	addvar VAR_BALL_QUEST_STATE, 1
	clearflag FLAG_BALL_QUEST_DIALOGUE_TRUNCATOR
	msgbox LilycoveCity_PokemonCenter_2F_Text_YouveUnlockedNewBall, MSGBOX_AUTOCLOSE
	speakername NULL
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_GoDoPreviousQuest::
	msgbox LilycoveCity_PokemonCenter_2F_Text_GoDoPreviousQuest, MSGBOX_NPC
	speakername NULL
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_NoMoreQuest::
	msgbox LilycoveCity_PokemonCenter_2F_Text_NoMoreQuest, MSGBOX_NPC
	speakername NULL
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_Teleporter::
	lock
	faceplayer
	goto_if_unset FLAG_ZOTPYRE_PSYCHICS, LilycoveCity_PokemonCenter_2F_EventScript_WhereIsMySibling
	msgbox LilycoveCity_PokemonCenter_2F_Text_WouldYouLikeToWarp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LilycoveCity_PokemonCenter_2F_EventScript_WarpToShrine
	msgbox LilycoveCity_PokemonCenter_2F_Text_MaybeAnotherTime, MSGBOX_AUTOCLOSE
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_WhereIsMySibling::
	msgbox LilycoveCity_PokemonCenter_2F_Text_CanYouFindMyKin, MSGBOX_AUTOCLOSE
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_WarpToShrine::
	warp MAP_ROUTE122, 30, 20
	waitstate
	release
	end

LilycoveCity_PokemonCenter_2F_EventScript_CheckPP::
    msgbox LilycoveCity_PokemonCenter_2F_Text_CheckPP, MSGBOX_NPC
    end

LilycoveCity_PokemonCenter_2F_EventScript_PurplinaBalls::
    msgbox LilycoveCity_PokemonCenter_2F_Text_PurplinaBalls, MSGBOX_NPC
    end

LilycoveCity_PokemonCenter_2F_EventScript_Panic::
    msgbox LilycoveCity_PokemonCenter_2F_Text_Panic, MSGBOX_NPC
    end

LilycoveCity_PokemonCenter_2F_Text_CheckPP:
	.string "Have you been keeping a close eye\n"
	.string "of the PP of the moves on\l"
	.string "your Pokemon?\p"
	.string "When you go on long treks, it can be\n"
	.string "easy to lose track of how\l"
	.string "much PP you are using.\l"
	.string "Especially if your Pokemon have\l"
	.string "gotten afflicted with the Panic\l"
	.string "status, or have been targetted\l"
	.string "by moves like Spite and Grudge.\p"
	.string "Stock up on PP restoring items\n"
	.string "like Ethers. Trust me, and\l"
	.string "you will thank me someday.$"

LilycoveCity_PokemonCenter_2F_Text_PurplinaBalls:
	.string "I'm one of Purplina's few friends.\n"
	.string "She keeps a tight circle.\p"
	.string "I do know that she's grown fond\n"
	.string "of seeing you in the centers,\l"
	.string "even though she won't admit it\l"
	.string "to your face.\p"
	.string "Every time you complete a quest\n"
	.string "for the artist, or get a new\l"
	.string "gym badge, she stocks a new\l"
	.string "type of ball. Isn't that nice?$"

LilycoveCity_PokemonCenter_2F_Text_Panic:
	.string "Don't panic about Panic!\n"
	.string "The status, I mean.\p"
	.string "When your Pokemon are Panicking,\n"
	.string "not only do they have their\l"
	.string "PP usage upped by 1, but they\l"
	.string "also deal slightly less damage\l"
	.string "than they normally would.\p"
	.string "Get yourself a Ghost or Dark\n"
	.string "type Pokemon... both of them\l"
	.string "are immune to the status.$"

LilycoveCity_PokemonCenter_2F_Text_NamePhillipe:
	.string "Phillipe$"

LilycoveCity_PokemonCenter_2F_Text_WouldYouLikeToWarp:
	.string "I am able to warp you to my kin\n"
	.string "in Zotpyre Village.\p"
	.string "Is that something you are\n"
	.string "prepared to do?$"

LilycoveCity_PokemonCenter_2F_Text_MaybeAnotherTime:
	.string "Maybe another time, then!$"

LilycoveCity_PokemonCenter_2F_Text_CanYouFindMyKin:
	.string "Ohm.... Ohm....\p"
	.string "...Oh, rats. I seem to have\n"
	.string "lost my connection to my kin\l"
	.string "in Zotpyre Village...\p"
	.string "Perhaps the heavy fog has been\n"
	.string "interfering too heavily with\l"
	.string "our etherplane...$"

LilycoveCity_PokemonCenter_2F_Text_HaveYouCaughtThisMon:
	.string "Salut! It is you again, mon\n"
	.string "super étoile! Honh honh,\l"
	.string "you have un parfaite timing,\l"
	.string "for I am in need of artistic\l"
	.string "inspiration again!\l"
	.string "Could you assister your\l"
	.string "amie, Phillipe, again?\p"
	.string "I would like to lay an eye on\n"
	.string "3 particular Pokémon.\p"
	.string "Lottabats, Matchlit, and Flague.\p"
	.string "Catch those trés and show me your\n"
	.string "Pokédex, and I will make it\l"
	.string "worth your troubles.$"

LilycoveCity_PokemonCenter_2F_Text_CaughtMonReminder:
	.string "Lottabats, Matchlit, and Flague...\n"
	.string "I very much would like to see them!\p"
	.string "Do you have them registered\l"
	.string "in your Pokédex?$"

LilycoveCity_PokemonCenter_2F_Text_GoCatchIt:
	.string "I see you have not the required\n"
	.string "Pokémon, amie. You should check\l"
	.string "their locations in your Pokédex.\p"
	.string "Bonne chance!$"

LilycoveCity_PokemonCenter_2F_Text_YouveUnlockedNewBall:
	.string "...\p"
	.string "Ah! There they are! Lovely catches!\p"
	.string "Matchlit's enticing flame...\n"
	.string "Flague, commanding a mini army...\l"
	.string "...and Lottabats, in itself un army!\p"
	.string "Inspiration strikes! Incroyable!\n"
	.string "I must get to painting.\p"
	.string "Merci, trainer. I will put in a good\n"
	.string "word for you with Purplina;\l"
	.string "you should soon be able to\l"
	.string "purchase Dream Balls from her.\p"
	.string "Au revoir!$"

LilycoveCity_PokemonCenter_2F_Text_GoDoPreviousQuest:
	.string "go do the last one(s)$"

LilycoveCity_PokemonCenter_2F_Text_NoMoreQuest:
	.string "Bon aprés-midi, trainer.\n"
	.string "I have naught in the way of new\l"
	.string "jobs for you this very moment.\p"
	.string "Perhaps when we next meet,\n"
	.string "we shall work together again.$"

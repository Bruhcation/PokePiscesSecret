RustboroInteriors_MapScripts::
	.byte 0

RustboroInteriors_EventScript_CardTrader::
	lock
	faceplayer
	checkitem ITEM_MAGIC_CARD
	goto_if_eq VAR_RESULT, TRUE, RustboroInteriors_EventScript_TradeForCard
	checkitem ITEM_BUDDY_CARD
	goto_if_eq VAR_RESULT, TRUE, RustboroInteriors_EventScript_GaveYouMyCard
	msgbox RustboroInteriors_Text_WhatINeed, MSGBOX_AUTOCLOSE
	release
	end

RustboroInteriors_EventScript_TradeForCard::
	msgbox RustboroInteriors_Text_WillYouTradeCards, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, RustboroInteriors_EventScript_CardTrade
	release
	end

RustboroInteriors_EventScript_CardTrade::
	delay 4
	msgbox RustboroInteriors_Text_AboutThatCard, MSGBOX_DEFAULT
	closemessage
	removeitem ITEM_MAGIC_CARD
	giveitem ITEM_BUDDY_CARD
	closemessage
	release
	end

RustboroInteriors_EventScript_GaveYouMyCard::
	msgbox RustboroInteriors_Text_GaveYouMyCard, MSGBOX_AUTOCLOSE
	release
	end

RustboroInteriors_EventScript_DoubleWing::
	lock
	faceplayer
	checkitem ITEM_TM_DUAL_WINGBEAT
	goto_if_eq VAR_RESULT, TRUE, RustboroInteriors_EventScript_GaveDoubleWing
	msgbox RustboroInteriors_Text_DoubleWing, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM_DUAL_WINGBEAT
	closemessage
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	release
	end

RustboroInteriors_EventScript_GaveDoubleWing::
	msgbox RustboroInteriors_Text_GaveDoubleWing, MSGBOX_AUTOCLOSE
	release
	end

RustboroInteriors_Text_DoubleWing:
	.string "Smacking an enemy with one wing?\n"
	.string "Boring.\p"
	.string "Smacking an enemy with TWO wings?\n"
	.string "...Now we're talking.$"

RustboroInteriors_Text_GaveDoubleWing:
	.string "I'm glad this move is called Double\n"
	.string "Wing. Really rolls off the tongue.\p"
	.string "Dual Wingbeat would sound way worse.$"

RustboroInteriors_Text_WhatINeed:
	.string "Heyo! Do you have a Pokemon\n"
	.string "that you particularly have a\l"
	.string "strong bond with? Your best buddy?\p"
	.string "This here Garzilla is my trusted\n"
	.string "pal through and through!\l"
	.string "I've had her since childhood.\l"
	.string "She's a big ol' teddy bear!\p"
	.string "One hobby I like to share with\n"
	.string "my buddy is card collecting!\l"
	.string "She just likes the pretty pictures.\l"
	.string "Particularly, the ones adorning\l"
	.string "Magic Cards.\p"
	.string "I'm always looking to potentially\n"
	.string "trade cards if you have one!$"

RustboroInteriors_Text_WillYouTradeCards:
	.string "Heyo! Do you have a Pokemon\n"
	.string "that you particularly have a\l"
	.string "strong bond with? Your best buddy?\p"
	.string "This here Garzilla is my trusted\n"
	.string "pal through and through!\l"
	.string "I've had her since childhood.\l"
	.string "She's a big ol' teddy bear!\p"
	.string "One hobby I like to share with\n"
	.string "my buddy is card collecting!\l"
	.string "She just likes the pretty pictures.\l"
	.string "Particularly, the ones adorning\l"
	.string "Magic Cards.\p"
	.string "I'm always looking to potentially\n"
	.string "trade cards if you have one!\p"
	.string "(You flash the Magic Card\n"
	.string "at the young lady.)\p"
	.string "Sick art on this one! Cool find.\n"
	.string "I can give you something good\l"
	.string "in return. Want to trade now?$"

RustboroInteriors_Text_AboutThatCard:
	.string "Thanks a plenty! It may not\n"
	.string "be worth much, but here's my\l"
	.string "buddy's favorite card design!\l"
	.string "Don't worry, I have a few\l"
	.string "just for trading.$"

RustboroInteriors_Text_GaveYouMyCard:
	.string "Maybe I should get a\n"
	.string "Garzilla trading card commisioned!$"

.set LOCALID_NURSE, 1

NewMauvilleCenter1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauvilleCenter1_OnTransition
	.byte 0

NewMauvilleCenter1_OnTransition:
	setrespawn HEAL_LOCATION_MAUVILLE_NEW
	end

NewMauvilleCenter1_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

NewMauvilleCenter1_EventScript_UltimateRelearner::
    msgbox NewMauvilleCenter1_Text_UltimateRelearner, MSGBOX_SIGN
    end

NewMauvilleCenter1_Text_UltimateRelearner:
	.string "(This sign is advertising a “special”\n"
	.string "move tutor, “unlike any other”.\l"
	.string "Whoever this is, is apparently\l"
	.string "in the basement.)$"

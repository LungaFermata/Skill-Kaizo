EventScript_ChooseMonToTutor::
    lock
    faceplayer
    special ChooseMonForMoveRelearner
    waitstate
    goto_if_ge VAR_0x8004, PARTY_SIZE, EventScript_EndTutorMove
    special IsSelectedMonEgg
    goto_if_eq VAR_RESULT, TRUE, EventScript_CantTutorEgg
    goto_if_eq VAR_0x8005, 0, EventScript_NoMoveToTutorMon
    goto EventScript_ChooseMoveToTeach
    end

EventScript_ChooseMoveToTeach::
    msgbox gText_TeachWhichMove
    special TeachMoveRelearnerMove
    waitstate
    goto_if_eq VAR_0x8004, 0, EventScript_ChooseMonToTutor
    goto EventScript_EndTutorMove
    end

EventScript_NoMoveToTutorMon::
    msgbox gText_NoMoveICanTeachThatMon
    goto EventScript_ChooseMonToTutor
    end

EventScript_CantTutorEgg::
    msgbox gText_CantTeachAnEgg
    goto EventScript_ChooseMonToTutor
    end

EventScript_EndTutorMove::
    msgbox gText_ComeBackAgain
    release
    end

Common_EventScript_SkillShop::
	lock
	faceplayer
	message gText_SkillShopGreeting
	waitmessage
	pokemart EventScript_SkillShop
	msgbox gText_SkillShopEnd, MSGBOX_DEFAULT
	release
	end

	.align 2
EventScript_SkillShop::
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_PP_MAX
	.2byte ITEM_PP_UP
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_LIECHI_BERRY
	.2byte ITEM_GANLON_BERRY
	.2byte ITEM_PETAYA_BERRY
	.2byte ITEM_APICOT_BERRY
	.2byte ITEM_SALAC_BERRY	
	.2byte ITEM_LANSAT_BERRY
	.2byte ITEM_STARF_BERRY
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_FOCUS_BAND
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_METAL_COAT
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_MAGNET
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_POISON_BARB
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_CHARCOAL
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_METAL_POWDER
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_STICK
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_BIG_MUSHROOM
	.2byte ITEM_NONE
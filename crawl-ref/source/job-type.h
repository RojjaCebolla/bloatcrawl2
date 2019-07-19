#pragma once

enum job_type
{
    JOB_FIGHTER,
    JOB_WIZARD,
#if TAG_MAJOR_VERSION == 34
    JOB_PRIEST,
#endif
    JOB_GLADIATOR,
    JOB_NECROMANCER,
    JOB_ASSASSIN,
    JOB_BERSERKER,
    JOB_HUNTER,
    JOB_CONJURER,
    JOB_ENCHANTER,
    JOB_FIRE_ELEMENTALIST,
    JOB_ICE_ELEMENTALIST,
    JOB_SUMMONER,
    JOB_AIR_ELEMENTALIST,
    JOB_EARTH_ELEMENTALIST,
    JOB_SKALD,
    JOB_VENOM_MAGE,
    JOB_CHAOS_KNIGHT,
    JOB_TRANSMUTER,
#if TAG_MAJOR_VERSION == 34
    JOB_HEALER,
    JOB_STALKER,
#endif
    JOB_MONK,
    JOB_WARPER,
    JOB_WANDERER,
    JOB_ARTIFICER,                     //   Greenberg/Bane
    JOB_ARCANE_MARKSMAN,
#if TAG_MAJOR_VERSION == 34
    JOB_DEATH_KNIGHT,
#endif
    JOB_ABYSSAL_KNIGHT,
#if TAG_MAJOR_VERSION == 34
    JOB_JESTER,
#endif
    JOB_ANARCHIST,
    JOB_UNDERSTUDY,
    JOB_METEOROLOGIST,
    JOB_UNCLE,
    JOB_ENTOMOLOGIST,
    JOB_DEPRIVED,
    JOB_FENCER,
    JOB_PHILOSOPHER,
    JOB_CAVEPERSON,
    JOB_BOUND,
    JOB_TORPOR_KNIGHT,
    JOB_PALADIN,
    JOB_NIGHT_KNIGHT,
    JOB_DANCER,
    JOB_INHERITOR,
    JOB_SLIME_PRIEST,
    JOB_BLOOD_KNIGHT,
    JOB_LIBRARIAN,
    JOB_DEATH_BISHOP,
    JOB_ZINJA,
    NUM_JOBS,                          // always after the last job

    JOB_UNKNOWN = 100,
    JOB_RANDOM,
    JOB_VIABLE,
};
COMPILE_CHECK(NUM_JOBS < JOB_UNKNOWN);

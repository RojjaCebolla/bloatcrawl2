#pragma once

enum duration_type
{
    DUR_INVIS,
    DUR_CONF,
    DUR_PARALYSIS,
    DUR_SLOW,
    DUR_MESMERISED,
    DUR_HASTE,
    DUR_MIGHT,
    DUR_BRILLIANCE,
    DUR_AGILITY,
    DUR_FLIGHT,
    DUR_BERSERK,
    DUR_POISONING,

    DUR_CONFUSING_TOUCH,
#if TAG_MAJOR_VERSION == 34
    DUR_SURE_BLADE,
#endif
    DUR_CORONA,
    DUR_DEATHS_DOOR,
    DUR_FIRE_SHIELD,

#if TAG_MAJOR_VERSION == 34
    DUR_BUILDING_RAGE,
#endif
    DUR_EXHAUSTED,              // fatigue counter for berserk

    DUR_LIQUID_FLAMES,
    DUR_ICY_ARMOUR,
#if TAG_MAJOR_VERSION == 34
    DUR_REPEL_MISSILES,
    DUR_JELLY_PRAYER,
#endif
    DUR_PIETY_POOL,             // distribute piety over time
    DUR_DIVINE_VIGOUR,          // duration of Ely's Divine Vigour
    DUR_DIVINE_STAMINA,         // duration of Zin's Divine Stamina
    DUR_DIVINE_SHIELD,          // duration of TSO's Divine Shield
    DUR_REGENERATION,
    DUR_SWIFTNESS,
#if TAG_MAJOR_VERSION == 34
    DUR_CONTROLLED_FLIGHT,
#endif
    DUR_TELEPORT,
#if TAG_MAJOR_VERSION == 34
    DUR_CONTROL_TELEPORT,
#endif
    DUR_BREATH_WEAPON,
    DUR_TRANSFORMATION,
    DUR_DEATH_CHANNEL,
#if TAG_MAJOR_VERSION == 34
    DUR_DEFLECT_MISSILES,
    DUR_SEE_INVISIBLE,
#endif
    DUR_EXCRUCIATING_WOUNDS,
    DUR_DEMONIC_GUARDIAN,       // demonic guardian timeout
    DUR_POWERED_BY_DEATH,
    DUR_SILENCE,
#if TAG_MAJOR_VERSION == 34
    DUR_CONDENSATION_SHIELD,
    DUR_MAGIC_ARMOUR,
#endif
    DUR_GOURMAND,
#if TAG_MAJOR_VERSION == 34
    DUR_BARGAIN,
    DUR_INSULATION,
#endif
    DUR_RESISTANCE,
#if TAG_MAJOR_VERSION == 34
    DUR_SLAYING,
#endif
    DUR_STEALTH,
#if TAG_MAJOR_VERSION == 34
    DUR_MAGIC_SHIELD,
#endif
    DUR_SLEEP,
#if TAG_MAJOR_VERSION == 34
    DUR_TELEPATHY,
#endif
    DUR_PETRIFIED,
    DUR_LOWERED_MR,
    DUR_REPEL_STAIRS_MOVE,
    DUR_REPEL_STAIRS_CLIMB,
    DUR_CLOUD_TRAIL,
    DUR_SLIMIFY,
    DUR_TIME_STEP,
    DUR_ICEMAIL_DEPLETED,       // Wait this many turns for Icemail to return
#if TAG_MAJOR_VERSION == 34
    DUR_MISLED,
#endif
    DUR_QUAD_DAMAGE,
    DUR_AFRAID,
    DUR_MIRROR_DAMAGE,
    DUR_SCRYING,
    DUR_TORNADO,
    DUR_LIQUEFYING,
    DUR_HEROISM,
    DUR_FINESSE,
    DUR_LIFESAVING,
    DUR_PARALYSIS_IMMUNITY,
    DUR_DARKNESS,
    DUR_PETRIFYING,
    DUR_SHROUD_OF_GOLUBRIA,
    DUR_TORNADO_COOLDOWN,
#if TAG_MAJOR_VERSION == 34
    DUR_NAUSEA,
#endif
    DUR_AMBROSIA,
#if TAG_MAJOR_VERSION == 34
    DUR_TEMP_MUTATIONS,
#endif
    DUR_DISJUNCTION,
    DUR_VEHUMET_GIFT,
#if TAG_MAJOR_VERSION == 34
    DUR_BATTLESPHERE,
#endif
    DUR_SENTINEL_MARK,
    DUR_SICKENING,
    DUR_WATER_HOLD,
    DUR_WATER_HOLD_IMMUNITY,
    DUR_FLAYED,
#if TAG_MAJOR_VERSION == 34
    DUR_RETCHING,
#endif
    DUR_WEAK,
    DUR_DIMENSION_ANCHOR,
#if TAG_MAJOR_VERSION == 34
    DUR_ANTIMAGIC,
    DUR_SPIRIT_HOWL,
#endif
    DUR_INFUSION,
    DUR_SONG_OF_SLAYING,
#if TAG_MAJOR_VERSION == 34
    DUR_SONG_OF_SHIELDING,
#endif
    DUR_TOXIC_RADIANCE,
    DUR_RECITE,
    DUR_GRASPING_ROOTS,
    DUR_SLEEP_IMMUNITY,
    DUR_FIRE_VULN,
    DUR_ELIXIR_HEALTH,
    DUR_ELIXIR_MAGIC,
#if TAG_MAJOR_VERSION == 34
    DUR_ANTENNAE_EXTEND,
#endif
    DUR_TROGS_HAND,
    DUR_BARBS,
    DUR_POISON_VULN,
    DUR_FROZEN,
    DUR_SAP_MAGIC,
#if TAG_MAJOR_VERSION == 34
    DUR_MAGIC_SAPPED,
#endif
    DUR_PORTAL_PROJECTILE,
    DUR_FORESTED,
    DUR_DRAGON_CALL,
    DUR_DRAGON_CALL_COOLDOWN,
    DUR_ABJURATION_AURA,
    DUR_MESMERISE_IMMUNE,
    DUR_NO_POTIONS,
    DUR_QAZLAL_FIRE_RES,
    DUR_QAZLAL_COLD_RES,
    DUR_QAZLAL_ELEC_RES,
    DUR_QAZLAL_AC,
    DUR_CORROSION,
#if TAG_MAJOR_VERSION == 34
    DUR_FORTITUDE,
#endif
    DUR_HORROR,
    DUR_NO_SCROLLS,
#if TAG_MAJOR_VERSION == 34
    DUR_NEGATIVE_VULN,
#endif
    DUR_CLEAVE,
    DUR_GOZAG_GOLD_AURA,
    DUR_COLLAPSE,
    DUR_BRAINLESS,
    DUR_CLUMSY,
    DUR_DEVICE_SURGE,
    DUR_DOOM_HOWL,
#if TAG_MAJOR_VERSION == 34
    DUR_DOOM_HOWL_IMMUNITY,
#endif
    DUR_VERTIGO,
    DUR_ANCESTOR_DELAY,
    DUR_SANGUINE_ARMOUR,
    DUR_NO_CAST,
    DUR_CHANNEL_ENERGY,
    DUR_SPWPN_PROTECTION,
    DUR_NO_HOP,
    DUR_HEAVENLY_STORM,
    DUR_DEATHS_DOOR_COOLDOWN,
    DUR_BERSERK_COOLDOWN,
    DUR_RECITE_COOLDOWN,
    DUR_PHASE_SHIFT,
    DUR_BLADE_OF_DISASTER,
    DUR_NO_MORE_DISASTER,
    NUM_DURATIONS
};

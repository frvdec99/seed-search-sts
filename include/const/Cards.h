//
// Created by frvdec on 2023/8/1.
//

#ifndef SEED_SEARCH_STS_CARDS_H
#define SEED_SEARCH_STS_CARDS_H

#include <cstdlib>

namespace StS {
    enum class CardId : uint16_t {
        INVALID = 0,
        ACCURACY,
        ACROBATICS,
        ADRENALINE,
        AFTER_IMAGE,
        AGGREGATE,
        ALCHEMIZE,
        ALL_FOR_ONE,
        ALL_OUT_ATTACK,
        ALPHA,
        AMPLIFY,
        ANGER,
        APOTHEOSIS,
        APPARITION,
        ARMAMENTS,
        ASCENDERS_BANE,
        AUTO_SHIELDS,
        A_THOUSAND_CUTS,
        BACKFLIP,
        BACKSTAB,
        BALL_LIGHTNING,
        BANDAGE_UP,
        BANE,
        BARRAGE,
        BARRICADE,
        BASH,
        BATTLE_HYMN,
        BATTLE_TRANCE,
        BEAM_CELL,
        BECOME_ALMIGHTY,
        BERSERK,
        BETA,
        BIASED_COGNITION,
        BITE,
        BLADE_DANCE,
        BLASPHEMY,
        BLIND,
        BLIZZARD,
        BLOODLETTING,
        BLOOD_FOR_BLOOD,
        BLUDGEON,
        BLUR,
        BODY_SLAM,
        BOOT_SEQUENCE,
        BOUNCING_FLASK,
        BOWLING_BASH,
        BRILLIANCE,
        BRUTALITY,
        BUFFER,
        BULLET_TIME,
        BULLSEYE,
        BURN,
        BURNING_PACT,
        BURST,
        CALCULATED_GAMBLE,
        CALTROPS,
        CAPACITOR,
        CARNAGE,
        CARVE_REALITY,
        CATALYST,
        CHAOS,
        CHARGE_BATTERY,
        CHILL,
        CHOKE,
        CHRYSALIS,
        CLASH,
        CLAW,
        CLEAVE,
        CLOAK_AND_DAGGER,
        CLOTHESLINE,
        CLUMSY,
        COLD_SNAP,
        COLLECT,
        COMBUST,
        COMPILE_DRIVER,
        CONCENTRATE,
        CONCLUDE,
        CONJURE_BLADE,
        CONSECRATE,
        CONSUME,
        COOLHEADED,
        CORE_SURGE,
        CORPSE_EXPLOSION,
        CORRUPTION,
        CREATIVE_AI,
        CRESCENDO,
        CRIPPLING_CLOUD,
        CRUSH_JOINTS,
        CURSE_OF_THE_BELL,
        CUT_THROUGH_FATE,
        DAGGER_SPRAY,
        DAGGER_THROW,
        DARKNESS,
        DARK_EMBRACE,
        DARK_SHACKLES,
        DASH,
        DAZED,
        DEADLY_POISON,
        DECAY,
        DECEIVE_REALITY,
        DEEP_BREATH,
        DEFEND_BLUE,
        DEFEND_GREEN,
        DEFEND_PURPLE,
        DEFEND_RED,
        DEFLECT,
        DEFRAGMENT,
        DEMON_FORM,
        DEUS_EX_MACHINA,
        DEVA_FORM,
        DEVOTION,
        DIE_DIE_DIE,
        DISARM,
        DISCOVERY,
        DISTRACTION,
        DODGE_AND_ROLL,
        DOOM_AND_GLOOM,
        DOPPELGANGER,
        DOUBLE_ENERGY,
        DOUBLE_TAP,
        DOUBT,
        DRAMATIC_ENTRANCE,
        DROPKICK,
        DUALCAST,
        DUAL_WIELD,
        ECHO_FORM,
        ELECTRODYNAMICS,
        EMPTY_BODY,
        EMPTY_FIST,
        EMPTY_MIND,
        ENDLESS_AGONY,
        ENLIGHTENMENT,
        ENTRENCH,
        ENVENOM,
        EQUILIBRIUM,
        ERUPTION,
        ESCAPE_PLAN,
        ESTABLISHMENT,
        EVALUATE,
        EVISCERATE,
        EVOLVE,
        EXHUME,
        EXPERTISE,
        EXPUNGER,
        FAME_AND_FORTUNE,
        FASTING,
        FEAR_NO_EVIL,
        FEED,
        FEEL_NO_PAIN,
        FIEND_FIRE,
        FINESSE,
        FINISHER,
        FIRE_BREATHING,
        FISSION,
        FLAME_BARRIER,
        FLASH_OF_STEEL,
        FLECHETTES,
        FLEX,
        FLURRY_OF_BLOWS,
        FLYING_KNEE,
        FLYING_SLEEVES,
        FOLLOW_UP,
        FOOTWORK,
        FORCE_FIELD,
        FOREIGN_INFLUENCE,
        FORESIGHT,
        FORETHOUGHT,
        FTL,
        FUSION,
        GENETIC_ALGORITHM,
        GHOSTLY_ARMOR,
        GLACIER,
        GLASS_KNIFE,
        GOOD_INSTINCTS,
        GO_FOR_THE_EYES,
        GRAND_FINALE,
        HALT,
        HAND_OF_GREED,
        HAVOC,
        HEADBUTT,
        HEATSINKS,
        HEAVY_BLADE,
        HEEL_HOOK,
        HELLO_WORLD,
        HEMOKINESIS,
        HOLOGRAM,
        HYPERBEAM,
        IMMOLATE,
        IMPATIENCE,
        IMPERVIOUS,
        INDIGNATION,
        INFERNAL_BLADE,
        INFINITE_BLADES,
        INFLAME,
        INJURY,
        INNER_PEACE,
        INSIGHT,
        INTIMIDATE,
        IRON_WAVE,
        JAX,
        JACK_OF_ALL_TRADES,
        JUDGMENT,
        JUGGERNAUT,
        JUST_LUCKY,
        LEAP,
        LEG_SWEEP,
        LESSON_LEARNED,
        LIKE_WATER,
        LIMIT_BREAK,
        LIVE_FOREVER,
        LOOP,
        MACHINE_LEARNING,
        MADNESS,
        MAGNETISM,
        MALAISE,
        MASTERFUL_STAB,
        MASTER_OF_STRATEGY,
        MASTER_REALITY,
        MAYHEM,
        MEDITATE,
        MELTER,
        MENTAL_FORTRESS,
        METALLICIZE,
        METAMORPHOSIS,
        METEOR_STRIKE,
        MIND_BLAST,
        MIRACLE,
        MULTI_CAST,
        NECRONOMICURSE,
        NEUTRALIZE,
        NIGHTMARE,
        NIRVANA,
        NORMALITY,
        NOXIOUS_FUMES,
        OFFERING,
        OMEGA,
        OMNISCIENCE,
        OUTMANEUVER,
        OVERCLOCK,
        PAIN,
        PANACEA,
        PANACHE,
        PANIC_BUTTON,
        PARASITE,
        PERFECTED_STRIKE,
        PERSEVERANCE,
        PHANTASMAL_KILLER,
        PIERCING_WAIL,
        POISONED_STAB,
        POMMEL_STRIKE,
        POWER_THROUGH,
        PRAY,
        PREDATOR,
        PREPARED,
        PRESSURE_POINTS,
        PRIDE,
        PROSTRATE,
        PROTECT,
        PUMMEL,
        PURITY,
        QUICK_SLASH,
        RAGE,
        RAGNAROK,
        RAINBOW,
        RAMPAGE,
        REACH_HEAVEN,
        REAPER,
        REBOOT,
        REBOUND,
        RECKLESS_CHARGE,
        RECURSION,
        RECYCLE,
        REFLEX,
        REGRET,
        REINFORCED_BODY,
        REPROGRAM,
        RIDDLE_WITH_HOLES,
        RIP_AND_TEAR,
        RITUAL_DAGGER,
        RUPTURE,
        RUSHDOWN,
        SADISTIC_NATURE,
        SAFETY,
        SANCTITY,
        SANDS_OF_TIME,
        SASH_WHIP,
        SCRAPE,
        SCRAWL,
        SEARING_BLOW,
        SECOND_WIND,
        SECRET_TECHNIQUE,
        SECRET_WEAPON,
        SEEING_RED,
        SEEK,
        SELF_REPAIR,
        SENTINEL,
        SETUP,
        SEVER_SOUL,
        SHAME,
        SHIV,
        SHOCKWAVE,
        SHRUG_IT_OFF,
        SIGNATURE_MOVE,
        SIMMERING_FURY,
        SKEWER,
        SKIM,
        SLICE,
        SLIMED,
        SMITE,
        SNEAKY_STRIKE,
        SPIRIT_SHIELD,
        SPOT_WEAKNESS,
        STACK,
        STATIC_DISCHARGE,
        STEAM_BARRIER,
        STORM,
        STORM_OF_STEEL,
        STREAMLINE,
        STRIKE_BLUE,
        STRIKE_GREEN,
        STRIKE_PURPLE,
        STRIKE_RED,
        STUDY,
        SUCKER_PUNCH,
        SUNDER,
        SURVIVOR,
        SWEEPING_BEAM,
        SWIFT_STRIKE,
        SWIVEL,
        SWORD_BOOMERANG,
        TACTICIAN,
        TALK_TO_THE_HAND,
        TANTRUM,
        TEMPEST,
        TERROR,
        THE_BOMB,
        THINKING_AHEAD,
        THIRD_EYE,
        THROUGH_VIOLENCE,
        THUNDERCLAP,
        THUNDER_STRIKE,
        TOOLS_OF_THE_TRADE,
        TRANQUILITY,
        TRANSMUTATION,
        TRIP,
        TRUE_GRIT,
        TURBO,
        TWIN_STRIKE,
        UNLOAD,
        UPPERCUT,
        VAULT,
        VIGILANCE,
        VIOLENCE,
        VOID,
        WALLOP,
        WARCRY,
        WAVE_OF_THE_HAND,
        WEAVE,
        WELL_LAID_PLANS,
        WHEEL_KICK,
        WHIRLWIND,
        WHITE_NOISE,
        WILD_STRIKE,
        WINDMILL_STRIKE,
        WISH,
        WORSHIP,
        WOUND,
        WRAITH_FORM,
        WREATH_OF_FLAME,
        WRITHE,
        ZAP,
    };

    enum class CardRarity {
        COMMON = 0,
        UNCOMMON,
        RARE,
        BASIC,
        SPECIAL,
        CURSE,
        INVALID,
    };

    enum class CardColor {
        RED = 0,
        GREEN,
        BLUE,
        PURPLE,
        COLORLESS,
        CURSE,
        INVALID,
    };

    enum class CardType {
        ATTACK=0,
        SKILL,
        POWER,
        CURSE,
        STATUS,
        INVALID,
    };

}

#endif //SEED_SEARCH_STS_CARDS_H
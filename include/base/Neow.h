//
// Created by frvdec on 2023/8/1.
//

// copy from https://github.com/gamerpuppy/sts_lightspeed/blob/master/include/game/Neow.h

#ifndef SEED_SEARCH_STS_NEOW_H
#define SEED_SEARCH_STS_NEOW_H

#include <array>
#include "base/Random.h"
#include "base/CardReward.h"
#include "Game.h"

namespace StS {
    namespace Neow {
        enum class Bonus {
            THREE_CARDS=0,
            ONE_RANDOM_RARE_CARD,
            REMOVE_CARD,
            UPGRADE_CARD,
            TRANSFORM_CARD,
            RANDOM_COLORLESS,

            THREE_SMALL_POTIONS,
            RANDOM_COMMON_RELIC,
            TEN_PERCENT_HP_BONUS,
            THREE_ENEMY_KILL,
            HUNDRED_GOLD,

            RANDOM_COLORLESS_2,
            REMOVE_TWO,
            ONE_RARE_RELIC,
            THREE_RARE_CARDS,
            TWO_FIFTY_GOLD,
            TRANSFORM_TWO_CARDS,
            TWENTY_PERCENT_HP_BONUS,

            BOSS_RELIC,
            INVALID,
        };

        static constexpr const char* const bonusStrings[] = {
                "Choose a card to obtain.",
                "Obtain a random rare card.",
                "Remove a card.",
                "Upgrade a card.",
                "Transform a card.",
                "Choose a colorless card to obtain.",

                "Obtain three potions.",
                "Obtain a random common relic.",
                "Max Hp +10%.",
                "Obtain Neow's Lament.",
                "Obtain 100 gold.",

                "Choose a rare colorless card to obtain.",
                "Remove two cards.",
                "Obtain a random rare relic.",
                "Choose a rare card to obtain.",
                "Obtain 250 gold.",
                "Transform two cards in your cards.",
                "Max Hp +20%.",

                "Obtain a random boss relic.",
                "INVALID",
        };

        enum class Drawback {
            INVALID=0,
            NONE,
            TEN_PERCENT_HP_LOSS,
            NO_GOLD,
            CURSE,
            PERCENT_DAMAGE,
            LOSE_STARTER_RELIC,
        };

        static constexpr const char* const drawbackStrings[] = {
                "INVALID",
                "NONE",
                "Max Hp -10%.",
                "Lose all gold.",
                "Obtain a curse.",
                "Take 30% Hp damage.",
                "Lose your starter relic.",
        };

        class Option {
        public:
            Bonus r;
            Drawback d;
#ifdef DEBUG
            void debug() const {
                printf("bonus = %s drawback = %s\n",
                       bonusStrings[static_cast<uint16_t>(r)],
                       drawbackStrings[static_cast<uint16_t>(d)]);
            }
#endif
        };

        std::array<Option, 4> getOptions(Random &r);
        CardReward getColorlessCardReward(Random &neowRng, Random& cardRng, bool rareOnly);

    }
}

#endif //SEED_SEARCH_STS_NEOW_H

//
// Created by frvdec on 2023/8/1.
//

#ifndef SEED_SEARCH_STS_CARDPOOLS_H
#define SEED_SEARCH_STS_CARDPOOLS_H

#include "const/Cards.h"

namespace StS {
    namespace ColorlessRarityCardPool {
        static constexpr CardId colorlessCardBlob[]{CardId::BANDAGE_UP, CardId::BLIND, CardId::DARK_SHACKLES,
                                                    CardId::DEEP_BREATH, CardId::DISCOVERY, CardId::DRAMATIC_ENTRANCE,
                                                    CardId::ENLIGHTENMENT, CardId::FINESSE, CardId::FLASH_OF_STEEL,
                                                    CardId::FORETHOUGHT, CardId::GOOD_INSTINCTS, CardId::IMPATIENCE,
                                                    CardId::JACK_OF_ALL_TRADES, CardId::MADNESS, CardId::MIND_BLAST,
                                                    CardId::PANACEA, CardId::PANIC_BUTTON, CardId::PURITY,
                                                    CardId::SWIFT_STRIKE, CardId::TRIP, CardId::APOTHEOSIS,
                                                    CardId::CHRYSALIS, CardId::HAND_OF_GREED, CardId::MAGNETISM,
                                                    CardId::MASTER_OF_STRATEGY, CardId::MAYHEM, CardId::METAMORPHOSIS,
                                                    CardId::PANACHE, CardId::SADISTIC_NATURE, CardId::SECRET_TECHNIQUE,
                                                    CardId::SECRET_WEAPON, CardId::THE_BOMB, CardId::THINKING_AHEAD,
                                                    CardId::TRANSMUTATION, CardId::VIOLENCE,};
        static constexpr int colorlessGroupSize[3] = {0, 20, 15};
        static constexpr int colorlessGroupOffset[3] = {0, 0, 20};

        static int getGroupSize(CardRarity rarity) {
            return colorlessGroupSize[(int) rarity];
        }

        static CardId getCardAt(CardRarity rarity, int offset) {
            int startIdx = colorlessGroupOffset[(int) rarity];
            return colorlessCardBlob[startIdx + offset];
        }

    }
}

#endif //SEED_SEARCH_STS_CARDPOOLS_H

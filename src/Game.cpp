//
// Created by frvdec on 2023/8/1.
//

#include "Game.h"

namespace StS {
    namespace Game {
        CardId getRandomColorlessCardNeow(Random &rng, CardRarity rarity) {
            int size = ColorlessRarityCardPool::getGroupSize(rarity);
            int idx = rng.random(size-1);
            return ColorlessRarityCardPool::getCardAt(rarity, idx);
        }
    }
}

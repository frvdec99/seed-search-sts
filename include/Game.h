//
// Created by frvdec on 2023/8/1.
//

#ifndef SEED_SEARCH_STS_GAME_H
#define SEED_SEARCH_STS_GAME_H

#include "base/CardReward.h"
#include "base/Random.h"

namespace StS {
    namespace Game {
        CardId getRandomColorlessCardNeow(Random &rng, CardRarity rarity);
    }
}

#endif //SEED_SEARCH_STS_GAME_H

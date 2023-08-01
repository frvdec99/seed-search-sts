//
// Created by frvdec on 2023/8/1.
//

#ifndef SEED_SEARCH_STS_CARDREWARD_H
#define SEED_SEARCH_STS_CARDREWARD_H

#include <array>
#include "base/Card.h"

namespace StS {
    class CardReward {
    public:
        int cur_size;
        std::array<Card, 4> reward;
        CardReward() { cur_size = 0; }

        Card& operator[](int idx) { return reward[idx]; }
        const Card& operator[](int idx) const { return reward[idx]; }

        void push_back(const Card& card) { reward[cur_size++] = card; }
    };
}


#endif //SEED_SEARCH_STS_CARDREWARD_H

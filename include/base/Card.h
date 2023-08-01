//
// Created by frvdec on 2023/8/1.
//

#ifndef SEED_SEARCH_STS_CARD_H
#define SEED_SEARCH_STS_CARD_H

#include "const/Cards.h"
#include "const/CardPools.h"

namespace StS {
    class Card {
    public:
        CardId id = CardId::INVALID;
        Card() = default;
        explicit Card(CardId id) { this->id = id; }
    };
}

#endif //SEED_SEARCH_STS_CARD_H

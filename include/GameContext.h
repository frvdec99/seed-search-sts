//
// Created by frvdec on 2023/8/1.
//

#ifndef SEED_SEARCH_STS_GAMECONTEXT_H
#define SEED_SEARCH_STS_GAMECONTEXT_H

#include "base/Neow.h"

namespace StS {
    class GameContext {
    public:
        const std::uint64_t seed;
        Random neowRng;
        Random cardRng;

        std::array<Neow::Option, 4> neowOptions{};

        GameContext(std::uint64_t seed, int ascension) :
            seed(seed),
            neowRng(seed),
            cardRng(seed) {
            neowOptions = Neow::getOptions(neowRng);
        }

        void chooseNeowOption(const Neow::Option& o, bool& flag);
    };
}

#endif //SEED_SEARCH_STS_GAMECONTEXT_H

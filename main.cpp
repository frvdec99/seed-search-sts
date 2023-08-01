//
// Created by frvdec on 2023/8/1.
//

#include <cstdio>
#include <iostream>
#include <random>
#include "GameContext.h"
#include "tools/SeedHelper.h"

int main () {
    std::mt19937_64 rng(998244353);
    std::uniform_int_distribution<uint64_t> distribution;
    int seed_number = 20;
    while(seed_number > 0) {
        uint64_t seed = distribution(rng);
        StS::GameContext context(seed, 20);
//        for(int i = 0; i < 4; ++i) context.neowOptions[i].debug();
//        printf("\n");
        bool flag = true;
        context.chooseNeowOption(context.neowOptions[2], flag);
        if(flag) {
            seed_number--;
            printf("%s\n", StS::SeedHelper::getString(seed).c_str());
        }
    }

    return 0;
}

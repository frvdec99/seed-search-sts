//
// Created by frvdec on 2023/8/1.
//

#ifndef SEED_SEARCH_STS_SEED_H
#define SEED_SEARCH_STS_SEED_H

#include <string>


namespace StS::SeedHelper {
        constexpr int SEED_BASE = 35;

        int getDigitValue(const char& c);
        std::string getString(const std::uint64_t& seed);
        std::uint64_t getLong(const std::string &seed);
}


#endif //SEED_SEARCH_STS_SEED_H

//
// Created by frvdec on 2023/8/1.
//

#include "tools/SeedHelper.h"

namespace StS::SeedHelper {
        int getDigitValue(const char& c) {
            if (c < 'A') return c - '0';
            if (c < 'O') return c - 'A' + 10;
            return c - 'A' + 9;
        }

        std::string getString(const std::uint64_t& seed) {
            constexpr auto chars = "0123456789ABCDEFGHIJKLMNPQRSTUVWXYZ";

            auto uSeed = static_cast<std::uint64_t>(seed);
            std::string str;

            do {
                int rem = static_cast<int>(uSeed % SEED_BASE);
                uSeed /= SEED_BASE;
                str += chars[rem];
            } while (uSeed != 0);

            for (int i = 0; i < str.size() / 2; i++) {
                std::swap(str[i], str[str.size() - 1 - i]);
            }
            return str;
        }

        std::uint64_t getLong(const std::string &seed) {
            std::uint64_t ret = 0;
            for (char it : seed) {
                ret *= SEED_BASE;
                int c = toupper(it);
                int value = getDigitValue(char(c));
                ret += value;
            }
            return ret;
        }

}


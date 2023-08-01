//
// Created by frvdec on 2023/8/1.
//

#include "GameContext.h"

namespace StS {
    void GameContext::chooseNeowOption(const Neow::Option &o, bool& flag) {
        CardReward reward;
        bool has_panache = false;
        bool has_secret_technique = false;
        bool has_apotheosis = false;
        bool has_hand_of_greed = false;
        switch (o.d) {
            case Neow::Drawback::TEN_PERCENT_HP_LOSS:
                // TODO
                break;

            case Neow::Drawback::NO_GOLD:
                // TODO
                flag = false;
                break;

            case Neow::Drawback::PERCENT_DAMAGE:
                // TODO
                flag = false;
                break;

            case Neow::Drawback::LOSE_STARTER_RELIC:
                // TODO
                flag = false;
                break;

            case Neow::Drawback::NONE:
            default:
                break;
        }

        if (o.d == Neow::Drawback::CURSE) {
            flag = false;
            int roll = cardRng.random(static_cast<int>(9));
            // TODO
        }

        switch (o.r) {
            case Neow::Bonus::THREE_CARDS:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::ONE_RANDOM_RARE_CARD: {
                // TODO
                flag = false;
                break;
            }

            case Neow::Bonus::REMOVE_CARD:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::UPGRADE_CARD:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::TRANSFORM_CARD:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::RANDOM_COLORLESS:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::THREE_SMALL_POTIONS:  {
                // TODO
                flag = false;
                break;
            }

            case Neow::Bonus::RANDOM_COMMON_RELIC:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::TEN_PERCENT_HP_BONUS:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::THREE_ENEMY_KILL:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::HUNDRED_GOLD:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::RANDOM_COLORLESS_2:
                reward = Neow::getColorlessCardReward(neowRng, cardRng, true);
                for(int i = 0; i < 3; ++i) {
                    if(reward[i].id == CardId::PANACHE) has_panache = true;
                    if(reward[i].id == CardId::SECRET_TECHNIQUE) has_secret_technique = true;
                    if(reward[i].id == CardId::APOTHEOSIS) has_apotheosis = true;
                    if(reward[i].id == CardId::HAND_OF_GREED) has_hand_of_greed = true;
                }
                if(!has_panache || !has_secret_technique || has_apotheosis || has_hand_of_greed) flag = false;
                break;

            case Neow::Bonus::REMOVE_TWO:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::ONE_RARE_RELIC:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::THREE_RARE_CARDS:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::TWO_FIFTY_GOLD:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::TRANSFORM_TWO_CARDS:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::TWENTY_PERCENT_HP_BONUS:
                // TODO
                flag = false;
                break;

            case Neow::Bonus::BOSS_RELIC: {
                // TODO
                flag = false;
                break;
            }

            case Neow::Bonus::INVALID:
                assert(false);
                break;
        }
    }
}

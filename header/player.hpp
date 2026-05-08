#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include "items.hpp"

class Player {
public:
    void put_armor (Armor armor) {
        switch (armor.a_type) {
            case Armor::Type::head:
                break;
            case Armor::Type::chest:
                break;
            case Armor::Type::leggings:
                break;
            case Armor::Type::boots:
                break;
            default:
                break;
        }
    }

    void give_item() {

    }

private:
    struct player_armor {
        Armor head;
        Armor chest;
        Armor leggings;
        Armor boots;
    };

    int money = 0;
};

#endif
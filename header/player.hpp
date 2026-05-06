#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include "items.hpp"

class Player {
public:
    void put_armor () {

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
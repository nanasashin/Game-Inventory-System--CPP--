#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include "items.hpp"

class Player {
public:
    Player(std::string name) : name(name) {}

    void put_armor(Armor armor) {
        if (player_armor[armor.a_type].name == "") {
            player_armor[armor.a_type] = armor;
        }
    }

    void put_weapon(Weapon weapon) {
        if (player_weapon.name == "") {
            player_weapon = weapon;
        }
    }

private:
    InventoryHandler inventory;
    std::string name;

    Armor player_armor[4];
    Weapon player_weapon;

    int money = 0;
};

#endif
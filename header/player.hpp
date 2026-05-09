#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <iostream>
#include "items.hpp"
#include "parameter.hpp"

using P = Parameter;

class Player {
public:
    Player(std::string name) : name(name) {}

    void equip_armor(Armor armor) {
        if (player_armor[armor.a_type].name == "") {
            player_armor[armor.a_type] = armor;
        }
    }

    void equip_weapon(Weapon weapon) {
        if (player_weapon.name == "") {
            player_weapon = weapon;
        }
    }

    void add_item_in_inventory (Item item) {
        inventory.add_item(item);
        
    }

    void display_inventory_item() {
        inventory.display_inventory();
    }

    void damage_player(int value) {
        parameter.update_value(P::health, P::decrease, P::UpdateValue{10});
    }

private:
    InventoryHandler inventory;
    std::string name;
    Armor player_armor[Armor::MAX_ARMOR];
    Weapon player_weapon;
    Parameter parameter{100, 100, 100};

    int money = 0;
};

#endif
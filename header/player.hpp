#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include "items.hpp"

class Player {
public:
<<<<<<< HEAD
    Player(InventoryHandler inventory) : inventory(inventory) {} 

    void put_armor (Armor armor) {
=======
    void put_armor (Armor armor, ArmorType armor_type) {
>>>>>>> parent of e831f43 (Update #2)
        switch (armor_type) {
            case ArmorType::head:
                break;
            case ArmorType::chest:
                break;
            case ArmorType::leggings:
                break;
            case ArmorType::boots:
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
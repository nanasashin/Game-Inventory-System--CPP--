#ifndef ITEMS_HPP_
#define ITEMS_HPP_

#include <vector>
#include <string>

struct Money {
    int value;
};

struct Armor {
    enum Type {head, chest, leggings, boots};

    std::string name;
    Type a_type;
};

struct Weapon {
    enum Type {longsword, dagger, bow, staff};
    
    std::string name = "";
    Type w_type;
};

struct Item {
    enum Type {armor, food, crafting, building};

    std::string name = "";
    Type type;
    Money sell_price;
    int quantity = 0;
};

#endif
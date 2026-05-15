#ifndef ITEMS_HPP_
#define ITEMS_HPP_

#include <vector>
#include <string>
#include <map>

struct Money {
    int value;
};

struct Armor {
    enum Type {head, chest, leggings, boots, MAX_ARMOR};

    std::string name;
    Type a_type;
    std::map<std::string, Parameter>;
};

struct Weapon {
    enum Type {longsword, dagger, bow, staff};
    
    std::string name = "";
    Type w_type;
};

struct Item {
    enum Type {armor, food, crafting, building, weapon, MAX_ITEM_TYPE};

    std::string name = "";
    Type type;
    Money sell_price;
    int quantity = 0;
};



#endif
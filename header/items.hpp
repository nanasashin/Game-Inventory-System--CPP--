#ifndef ITEMS_HPP_
#define ITEMS_HPP_

#include <vector>
#include <string>

struct Armor {
    enum Type {head, chest, leggings, boots};

    std::string name;
    Type a_type;
};

struct Money {
    int value;
};

struct Item {
    enum Type {armor, food, crafting, building};

    std::string name;
    Type type;
    int sell_price;
    int quantity = 0;
};

#endif
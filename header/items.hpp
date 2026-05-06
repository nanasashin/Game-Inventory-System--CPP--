we#ifndef ITEMS_HPP_
#define ITEMS_HPP_

#include <vector>
#include <string>

class Armor {
public:
    Armor(std::string name) : name(name) {}

private:
    std::string name;
};

enum ItemType {
    armor,
    food,
    crafting, 
    building,
};

enum ArmorType {
    head,
    chest,
    leggings,
    boots
}

struct Item {
    std::string name;
    ItemType type;
    int sell_price;
    int quantity = 0;
};

struct Money {
    int value;  
};

struct text_size {
    int item;
    int price;
    int quantity;
};

#endif
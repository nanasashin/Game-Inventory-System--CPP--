#ifndef ITEMS_HPP_
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
};

struct Money {
    int value;  
};

struct Item {
    std::string name;
    ItemType type;
    Money sell_price;
    int quantity = 0;
};

enum TextSize {
    name = 30,
    price = 6,
    quantity = 4,
    type = 10,
};

#endif
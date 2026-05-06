#ifndef INVENTORY_HPP_
#define INVENTORY_HPP_

#include <string>
#include <map>

enum item_type {
    armor,
    food,
    crafting, 
    building,
};

struct item {
    std::string name;
    item_type type;
    int quantity = 0;
};

class inventory {
public:
    void add_item() {
        
    }

    void sell_item() {

    }

private:
    std::map<std::string, item> inventory_vector;
};

#endif
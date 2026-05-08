#ifndef ITEMS_HPP_
#define ITEMS_HPP_

#include <vector>
#include <string>

class Armor {
public:
    enum Type {
        head,
        chest,
        leggings, 
        boots
    };

private:
    std::string name;
    Type a_type;

public:
    Armor(std::string name, Type a_type) : name(name), a_type(a_type) {}
};



class Consumables {
public:
    struct Gold {
        int value = 0;  
    };
};



class Item {
public:
    enum Type {
        armor,
        food,
        crafting, 
        building,
    };

    struct item {
        
    }

private:
    std::string name;
    Consumables::Gold sell_price;
    int quantity;
    Type i_type;

public:
    Item(std::string name, Type i_type, int quantity=1) : name(name), i_type(i_type), quantity(quantity) {}
    
    std::string get_name() {
        return name;
    }
};


#endif
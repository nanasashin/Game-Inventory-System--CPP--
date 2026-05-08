#ifndef INVENTORY_HPP_
#define INVENTORY_HPP_

#include <string>
#include <map>
#include "items.hpp"
#include "utils.hpp"

class InventoryHandler{
public:
    void add_item(Item item) {
        if (item_in_inventory(item.name)) {
            inventory[item.name] = item;
        }
    }

    Money sell_item(Item item, int amount) {
        if (item_in_inventory(item.name)) {
            int temp = item.quantity;
            item.quantity - amount;
            if (item.quantity <= 0) {
                delete_item(item.name);
            }
            return Money {temp * amount};
        }
    }

    void display_inventory() {
        if (!inventory_is_empty()) {

        }
    }

    Item search_item(std::string name) {
        if (item_in_inventory(name)) {
            return inventory[name];
        } 
        return Item{};
    }

private:
    std::map<std::string, Item> inventory;

    Money money;

    bool item_in_inventory(std::string name) {
        if (inventory.count(name) == 0) throw std::invalid_argument("Item not Found");
        return true;
    }


    bool inventory_is_empty() {
        if (inventory.empty()) throw std::invalid_argument("Inventory is Empty");
        return true;
    }

    void delete_item(std::string name) {
        if (!item_in_inventory(name)) throw std::invalid_argument("No Item to Delete");
        inventory.erase(name);
    }
};

#endif
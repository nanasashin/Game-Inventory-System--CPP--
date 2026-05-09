#ifndef INVENTORY_HPP_
#define INVENTORY_HPP_

#include <string>
#include <map>
#include "items.hpp"
#include "utils.hpp"

class InventoryHandler{
public:
    void add_item(Item item) {
        if (!item_in_inventory(item.name)) inventory[item.name] = item;
        else inventory[item.name].quantity += item.quantity;
    }

    Money sell_item(Item item, int amount) {
        if (item_in_inventory(item.name)) {
            int temp = item.quantity;
            item.quantity - amount;
            if (item.quantity <= 0) delete_item(item.name);
            return Money {temp * amount};
        }
    }

    void display_inventory() {
        if (!inventory_is_empty()) {
            Utils::print_inventory_header();
            for (const auto& [key, value] : inventory) {
                Utils::print_item(value);
            }
            Utils::print_inventory_footer();
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
        if (inventory.count(name) == 0) return false;
        return true;
    }


    bool inventory_is_empty() {
        if (inventory.empty()) return true;
        return false;
    }

    void delete_item(std::string name) {
        if (!item_in_inventory(name)) return;
        inventory.erase(name);
    }
};

#endif
#ifndef UTILS_HPP_
#define UTILS_HPP_

#include <iostream>
#include <string>
#include "items.hpp"

class Utils {
public:
    static void print_item(Item item) {
        std::string i_type;
        switch (item.type)
        {
            case ItemType::armor: i_type = "Armor"; break;
            case ItemType::food: i_type = "Food"; break;
            case ItemType::crafting: i_type = "Crafting"; break;
            case ItemType::building: i_type = "Building"; break;
        }

        std::cout << " | " << text_handler(i_type, TextSize::type) 
                << " | " << text_handler(item.name, TextSize::name) 
                << " | " << text_handler(std::to_string(item.quantity), TextSize::quantity) 
                << " | " << text_handler(std::to_string(item.sell_price.value), TextSize::price) << "\n";
    }

private:
    static std::string text_handler(std::string text, int max_size) {
        while (text.length() < max_size) {
             text += " ";
        }
        return text;
    }
};

#endif
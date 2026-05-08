#ifndef UTILS_HPP_
#define UTILS_HPP_

#include <iostream>
#include "items.hpp"

class Utils {
private:
    enum TextSize {
        name = 30,
        price = 6,
        quantity = 4,
        type = 10,
    };

public:
    static void print_item(Item item) {
        std::string temp;
        switch (item.type) {
            case Item::armor: temp = "Armor"; break;
            case Item::food: temp = "Food"; break;
            case Item::crafting: temp = "Crafting"; break;
            case Item::building: temp = "Buidling"; break;
        }

        std::cout
            << " | " << text_handler(temp, TextSize::type)
            << " | " << text_handler(item.name, TextSize::name)
            << " | " << text_handler(std::to_string(item.quantity), TextSize::quantity)
            << " | " << text_handler(std::to_string(item.sell_price.value), TextSize::price)
        ;
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
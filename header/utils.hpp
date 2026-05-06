#ifndef UTILS_HPP_
#define UTILS_HPP_

#include <iostream>
#include "items.hpp"

class Utils {
public:
    void print_item(Item item, TextSize text_size) {
         
    }

private:
    std::string text_handler(std::string text, int max_size) {
        while (text.length() < max_size) {
             text += " ";
        }
        return text;
    }
}

#endif
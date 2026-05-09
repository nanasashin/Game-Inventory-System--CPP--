#include <iostream>
#include "../header/inventory.hpp"
#include "../header/items.hpp"
#include "../header/player.hpp"

int main() {
    Player player("nanashi");
    player.add_item_in_inventory(Item{"knife", Item::weapon, Money{10}, 5});
    player.add_item_in_inventory(Item{"wooden door", Item::building, Money{2}, 2});
    player.add_item_in_inventory(Item{"chain helmet", Item::armor, Money{50}, 5});
    player.add_item_in_inventory(Item{"apple", Item::food, Money{5}, 2});
    player.add_item_in_inventory(Item{"wooden stick", Item::crafting, Money{1}, 2});

    player.display_inventory_item();
    return 0;
}
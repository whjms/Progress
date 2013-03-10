/* A class that is meant to contain lists of item materials, qualities,
 * origins, and types.
 */
#include "quests.h"
#include <stdlib.h>
#include <iostream>

ItemGenerator::ItemGenerator() {
    this->initItemTypeVector();
    /*this->initMaterialVector();
    this->initOriginVector();
    this->initQualityVector();*/
}

void ItemGenerator::initItemTypeVector() {
    // Weapons
    itemTypes.push_back("sword");
    itemTypes.push_back("dagger");
    itemTypes.push_back("lance");
    itemTypes.push_back("bow");
    itemTypes.push_back("crossbow");
    itemTypes.push_back("axe");
    itemTypes.push_back("mace");
    itemTypes.push_back("spear");
    itemTypes.push_back("greatsword");
    itemTypes.push_back("rapier");
    itemTypes.push_back("club");
    itemTypes.push_back("wand");
    itemTypes.push_back("rock");
    itemTypes.push_back("staff");

    // Loot
    itemTypes.push_back("chalice");
    itemTypes.push_back("gem");
    itemTypes.push_back("sachel");
    itemTypes.push_back("");

    // Misc items

    // Clothing

    // Armor
}

std::string ItemGenerator::getItem() {
    return "...";
}

/* A class that is meant to contain lists of item materials, qualities,
 * origins, and types. Used by MainWindow to generate quests.
 */
#include "quests.h"
#include <stdlib.h>
#include <iostream>

Quests::Quests() {
    this->initItemTypeVector();
    this->initQuestTypeVector();
    /*this->initMaterialVector();
    this->initOriginVector();
    this->initQualityVector();*/
}

void Quests::initItemTypeVector() {
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

    // Misc items

    // Clothing

    // Armor
}

void Quests::initQuestTypeVector() {
    questTypes.push_back("find");
    questTypes.push_back("steal");
    questTypes.push_back("return");
    questTypes.push_back("craft");
}

std::string Quests::getQuest() {
    std::string type = questTypes.at(rand() % questTypes.size());
    return type + "...";
}

/* A class that is meant to contain lists of item materials, qualities,
 * origins, and types.
 */
#include "itemgenerator.h"
#include "item.h"
#include <stdlib.h>
#include <iostream>

ItemGenerator::ItemGenerator() {
    this->initItemTypeVector();
    this->initMaterialVector();
    this->initEffectVector();
    this->initQualityVector();
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
    itemTypes.push_back("ring");
    itemTypes.push_back("necklace");
    itemTypes.push_back("statue");
    itemTypes.push_back("skull");

    // Misc items

    // Armor
    itemTypes.push_back("helm");
    itemTypes.push_back("breastplate");
    itemTypes.push_back("mail");
    itemTypes.push_back("gauntlets");
    itemTypes.push_back("leggings");
    itemTypes.push_back("shoulder pads");
    itemTypes.push_back("gloves");
    itemTypes.push_back("boots");
    itemTypes.push_back("shield");
    itemTypes.push_back("hood");
}

void ItemGenerator::initMaterialVector() {
    materials.push_back("steel");
    materials.push_back("bronze");
    materials.push_back("silver");
    materials.push_back("gold");
    materials.push_back("platinum");
    materials.push_back("diamond");
    materials.push_back("adamantium");
}

void ItemGenerator::initQualityVector() {
    qualities.push_back("Bad");
    qualities.push_back("Poor");
    qualities.push_back("Inferior");
    qualities.push_back("Mediocre");
    qualities.push_back("Average");
    qualities.push_back("Good");
    qualities.push_back("Excellent");
    qualities.push_back("Great");
    qualities.push_back("Amazing");
    qualities.push_back("Heroic");
    qualities.push_back("Stunning");
    qualities.push_back("Epic");
}

void ItemGenerator::initEffectVector() {
    effects.push_back("speed");
    effects.push_back("strength");
    effects.push_back("dexterity");
    effects.push_back("endurance");
    effects.push_back("wisdom");
    effects.push_back("intelligence");
    effects.push_back("clarity");
    effects.push_back("meditation");
    effects.push_back("agility");
    effects.push_back("sneaking");
    effects.push_back("healing");
    effects.push_back("criticality");
    effects.push_back("wealth");
    effects.push_back("experience");
    effects.push_back("constitution");
    effects.push_back("luck");
}

Item ItemGenerator::getItem() {
    std::string type = itemTypes[rand() % itemTypes.size()];
    std::string material = materials[rand() % materials.size()];
    std::string quality = qualities[rand() % qualities.size()];
    std::string effect = effects[rand() % effects.size()];
    Item item(type, quality, material, effect);
    return item;
}

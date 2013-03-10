/* A class that is meant to contain lists of item materials, qualities,
 * origins, and types. Used by MainWindow to generate quests.
 */
#include "items.h"

Items::Items() {
    this->initItemTypeVector();
    /*this->initMaterialVector();
    this->initOriginVector();
    this->initQualityVector();*/
}

void Items::initItemTypeVector() {
    // Weapons
    itemTypes.push_back("sword");
    itemTypes.push_back("dagger");
    itemTypes.push_back("lance");
    itemTypes.push_back("bow");
    itemTypes.push_back("crossbow");


    // Loot
    itemTypes.push_back("chalice");

    // Misc items

    // Clothing

    // Armor
}

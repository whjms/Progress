#include "item.h"

/* Sets this Item's properties via constructor
 */
Item::Item(std::string _type, std::string _quality, std::string _material,
     std::string _effect):
    effect(_effect),
    type(_type),
    quality(_quality),
    material(_material) {}

std::string Item::toString() {
    return quality + " " + material + " " + type + " of " + effect;
}

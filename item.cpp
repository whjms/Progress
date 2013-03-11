#include "item.h"
/* A class that contains all of the properties of items. Used by the Quest
 * and ItemGenerator classes.
 */

/* Sets this Item's properties via constructor
 */
Item::Item(std::string _type, std::string _quality, std::string _material,
     std::string _effect)
    :
    type(_type),
    quality(_quality),
    material(_material),
    effect(_effect)
{
}

/* Outputs a string representation of this Item
 * (e.g. 'Poor steel boots of speed')
 */
std::string toString() {
    return quality + " " + material + " " + type + " of " + effect;
}

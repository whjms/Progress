/* A class that contains all of the properties of items. Used by the Quest
 * and ItemGenerator classes.
 */
#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item
{
public:
    Item(std::string _type, std::string _quality, std::string _material,
         std::string _effect);

    /* Outputs a string representation of this Item
     * (e.g. 'Poor steel boots of speed')
     */
    std::string toString();

private:
    std::string type;
    std::string quality;
    std::string material;
    std::string effect;
};

#endif // ITEM_H

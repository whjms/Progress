#ifndef ITEMS_H
#define ITEMS_H
#include <string>
#include <vector>
#include "item.h"

class ItemGenerator
{
public:
    ItemGenerator();
    Item getItem();
    void test();

private:
    std::vector<std::string> itemTypes;
    std::vector<std::string> materials;
    std::vector<std::string> qualities;
    std::vector<std::string> effects;
    void initMaterialVector();
    void initQualityVector();
    void initEffectVector();
    void initItemTypeVector();
};

#endif // ITEMS_H

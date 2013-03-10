#ifndef ITEMS_H
#define ITEMS_H
#include <string>
#include <vector>

class Items
{
public:
    Items();
    std::string getQuest();

private:
    std::vector<std::string> itemTypes;
    std::vector<std::string> materials;
    std::vector<std::string> qualities;
    std::vector<std::string> origins;
    void initMaterialVector();
    void initQualityVector();
    void initOriginVector();
    void initItemTypeVector();
};

#endif // ITEMS_H

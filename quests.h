#ifndef QUESTS_H
#define QUESTS_H
#include <string>
#include <vector>

class Quests
{
public:
    Quests();
    std::string getQuest();
    void test();

private:
    std::vector<std::string> itemTypes;
    std::vector<std::string> materials;
    std::vector<std::string> qualities;
    std::vector<std::string> origins;
    std::vector<std::string> questTypes;
    void initMaterialVector();
    void initQualityVector();
    void initOriginVector();
    void initItemTypeVector();
    void initQuestTypeVector();
};

#endif // QUESTS_H

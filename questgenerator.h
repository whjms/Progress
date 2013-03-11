/* A class that generates a Quest with a randomly generated action and item.
 * XP rewards are to be provided by MainWindow.
 */
#ifndef QUESTGENERATOR_H
#define QUESTGENERATOR_H
#include "itemgenerator.h"
#include "locationgenerator.h"
#include "quest.h"
#include <vector>
#include <string>

class QuestGenerator
{
public:
    QuestGenerator();

    /* Generate a random quest */
    Quest *getQuest(int reward, int length);

private:
    ItemGenerator itemGen;
    LocationGenerator locationGen;

    std::vector<std::string> actions;

    void initActionVector();
};

#endif // QUESTGENERATOR_H

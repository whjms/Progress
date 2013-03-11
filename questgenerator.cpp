#include "questgenerator.h"
#include <iostream>
#include <math.h>

QuestGenerator::QuestGenerator()
{
    initActionVector();
}


void QuestGenerator::initActionVector() {
    actions.push_back("Steal");
    actions.push_back("Find");
    actions.push_back("Return");
    actions.push_back("Craft");
}

Quest* QuestGenerator::getQuest(int reward, int length) {
    return new Quest(itemGen.getItem(), reward, length, actions[rand() % actions.size()]);
}


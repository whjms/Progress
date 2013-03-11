/*****************************************************************************
 * questgenerator.cpp                                                        *
 * Author: Qasim Ali                                                         *
 * Created: March 10, 2013                                                   *
 *---------------------------------------------------------------------------*
 * Generates a random Quest with a random Item and a random Location.        *
 * --------------------------------------------------------------------------*
 * Copyright 2013 Qasim Ali. Distributed under GNU GPL v3. For more          *
 * information, consult the LICENSE file located in this program's root      *
 * directory.                                                                *
 ****************************************************************************/
#include "questgenerator.h"
#include <iostream>
#include <math.h>
#include <cstdlib>

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
    return new Quest(itemGen.getItem(), reward, length,
                     actions[rand() % actions.size()],
                     locationGen.getLocation());
}


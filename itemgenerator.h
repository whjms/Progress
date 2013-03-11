/*****************************************************************************
 * itemgenerator.h                                                           *
 * Author: Qasim Ali                                                         *
 * Created: March 10, 2013                                                   *
 *---------------------------------------------------------------------------*
 * A class that contains lists of item materials, qualities, effects, and    *
 * types.                                                                    *
 * --------------------------------------------------------------------------*
 * Copyright 2013 Qasim Ali. Distributed under GNU GPL v3. For more          *
 * information, consult the LICENSE file located in this program's root      *
 * directory.                                                                *
 ****************************************************************************/
#ifndef ITEMS_H
#define ITEMS_H
#include <string>
#include <vector>
#include "item.h"

class ItemGenerator
{
public:
    ItemGenerator();

    /* Returns a randomly generated Item */
    Item getItem();

private:
    /* Vectors to store all possible Item properties */
    std::vector<std::string> itemTypes;
    std::vector<std::string> materials;
    std::vector<std::string> qualities;
    std::vector<std::string> effects;

    /* Functions to initialize Item property vectors. Called by
     * ItemGenerator's constructor.
     */
    void initMaterialVector();
    void initQualityVector();
    void initEffectVector();
    void initItemTypeVector();
};

#endif // ITEMS_H

/*****************************************************************************
 * locationgenerator.h                                                       *
 * Author: Qasim Ali                                                         *
 * Created: March 11, 2013                                                   *
 *---------------------------------------------------------------------------*
 * Generates a Location with randomly selected type and region. Possible     *
 * values for each field are generated within the 'init' functions.          *
 * --------------------------------------------------------------------------*
 * Copyright 2013 Qasim Ali. Distributed under GNU GPL v3. For more          *
 * information, consult the LICENSE file located in this program's root      *
 * directory.                                                                *
 ****************************************************************************/
#ifndef LOCATIONGENERATOR_H
#define LOCATIONGENERATOR_H
#include "location.h"
#include <vector>
#include <string>
#include <cstdlib>

class LocationGenerator
{
public:
    LocationGenerator();

    /* Return a randomly generated Location. */
    Location *getLocation();

private:
    std::vector<std::string> locationTypes;
    std::vector<std::string> regions;

    void initTypeVector();
    void initRegionVector();
};

#endif // LOCATIONGENERATOR_H

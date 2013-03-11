/*****************************************************************************
 * location.cpp                                                              *
 * Author: Qasim Ali                                                         *
 * Created: March 11, 2013                                                   *
 *---------------------------------------------------------------------------*
 * A simple method for assigning quests and other objects locations. Used by *
 * LocationGenerator and MainWindow to display the player's current location.*
 * --------------------------------------------------------------------------*
 * Copyright 2013 Qasim Ali. Distributed under GNU GPL v3. For more          *
 * information, consult the LICENSE file located in this program's root      *
 * directory.                                                                *
 ****************************************************************************/
#include "location.h"

Location::Location(std::string type, std::string region)
    :
      locationType(type),
      region(region)
{
}

std::string Location::toString() {
    return region + " " + locationType;
}

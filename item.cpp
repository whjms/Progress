/*****************************************************************************
 * item.cpp                                                                  *
 * Author: Qasim Ali                                                         *
 * Created: March 10, 2013                                                   *
 * --------------------------------------------------------------------------*
 * A class that contains all of the properties of items. Used by the Quest   *
 * and ItemGenerator classes.                                                *
 * --------------------------------------------------------------------------*
 * Copyright 2013 Qasim Ali. Distributed under GNU GPL v3. For more          *
 * information, consult the LICENSE file located in this program's root      *
 * directory.                                                                *
 ****************************************************************************/
#include "item.h"

/* Sets this Item's properties via constructor
 */
Item::Item(std::string _type, std::string _quality, std::string _material,
     std::string _effect):
    effect(_effect),
    type(_type),
    quality(_quality),
    material(_material) {}

std::string Item::toString() {
    return quality + " " + material + " " + type + " of " + effect;
}

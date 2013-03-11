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

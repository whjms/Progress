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
    Location *getLocation();

private:
    std::vector<std::string> locationTypes;
    std::vector<std::string> regions;

    void initTypeVector();
    void initRegionVector();
};

#endif // LOCATIONGENERATOR_H

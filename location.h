#ifndef LOCATION_H
#define LOCATION_H
#include <string>

class Location
{
public:
    Location(std::string type, std::string region);
    std::string toString();

private:
    std::string locationType;
    std::string region;
};

#endif // LOCATION_H

#include "locationgenerator.h"

LocationGenerator::LocationGenerator()
{
    initRegionVector();
    initTypeVector();
}

Location* LocationGenerator::getLocation() {
    return new Location(locationTypes[rand() % locationTypes.size()],
            regions[rand() % regions.size()]);
}


void LocationGenerator::initTypeVector() {
    locationTypes.push_back("Caverns");
    locationTypes.push_back("Cavern");
    locationTypes.push_back("Dungeons");
    locationTypes.push_back("Ruins");
    locationTypes.push_back("Castle");
    locationTypes.push_back("Keep");
    locationTypes.push_back("Forest");
    locationTypes.push_back("Tavern");
    locationTypes.push_back("Marshes");
    locationTypes.push_back("Swamps");
    locationTypes.push_back("Tundra");
    locationTypes.push_back("Wetlands");
    locationTypes.push_back("Beach");
    locationTypes.push_back("Desert");
    locationTypes.push_back("Market");
    locationTypes.push_back("Temple");
    locationTypes.push_back("Region");
    locationTypes.push_back("Village");
}

void LocationGenerator::initRegionVector() {
    regions.push_back("Northern");
    regions.push_back("Eastern");
    regions.push_back("Western");
    regions.push_back("Southern");
    regions.push_back("Old");
    regions.push_back("Jerall");
    regions.push_back("Coastal");
    regions.push_back("Dwarven");
    regions.push_back("Elven");
    regions.push_back("East Border");
    regions.push_back("Southern Border (Disputed)");
    regions.push_back("Border");
    regions.push_back("Deserted");
    regions.push_back("Wild");
    regions.push_back("Untamed");
    regions.push_back("Imperial");
    regions.push_back("Rebel");
    regions.push_back("Native");
}

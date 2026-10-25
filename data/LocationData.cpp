#include <data/LocationData.h>
#include "classes/Location.h"
#include <unordered_map>
#include <string>

Location create_location(const std::string &name)
{
    static const std::unordered_map<std::string, Location> locations
        {{"init", Location("Init", "A dark and musty dungeon. There is a rusty gate on the opposite side of the room and a candle in the center.")}};

    return locations.at(name);
}
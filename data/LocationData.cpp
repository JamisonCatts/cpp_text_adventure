#include <unordered_map>
#include <string>

#include <data/LocationData.h>
#include "classes/Location.h"
#include "classes/Point.h"

Location create_location(const std::string &name)
{   


    static std::unordered_map<std::string, Location> locations;
    Location init("init", "A dark and musty dungeon. There is a rusty gate on the opposite side of the room and a candle in the center.");
    init.add_point(Point("table", "A table in the middle of the room. There is a single candle sitting on top of it."));
    locations.insert({"init", init});

    return locations.at(name);
}
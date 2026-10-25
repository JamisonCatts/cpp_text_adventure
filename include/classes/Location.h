#include <string>
#include <unordered_set>
#include <vector>
#include <classes/Item.h>
#include <classes/Point.h>

#pragma once

class Location;

// IDEA: make a location_ref class that has the name of the room the path and then a possibly
// null pointer to the actual object
struct Passage
{
    std::string port;
    Location *next_loc;
};

class Location
{

    std::string name;
    // description is explaining to player
    std::string description;

private:
    std::vector<Item> items;

    // TODO: don't keep Locations loaded
    std::vector<Passage> adjacents;
    std::vector<Point> points;

public:
    std::string get_description() const;
    std::string get_point_desc(const std::string &word) const;
    bool has_point(const std::string &name) const;
    std::vector<std::string> get_ports();
    Location(std::string name, std::string description);
};

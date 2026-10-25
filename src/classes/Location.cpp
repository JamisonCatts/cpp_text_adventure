#include <algorithm>
#include <iterator>
#include <string>

#include <classes/Location.h>

Location::Location(std::string name, std::string description) : name(name), description(description){};

std::string Location::get_description() const
{
    return description;
}

std::vector<std::string> Location::get_ports()
{

    std::vector<std::string> ports;
    ports.reserve(adjacents.size());

    std::transform(adjacents.begin(), adjacents.end(), std::back_inserter(ports),
                   [](const Passage &p)
                   { return p.port; });

    return ports;
}

bool Location::has_point(const std::string &name) const
{


    auto it = std::find_if(
        points.begin(),
        points.end(),
        [&name](const Point& p) {
            return p.get_name() == name;
        });

    if (it != points.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string Location::get_point_desc(const std::string &word) const
{

    auto it = std::find_if(
        points.begin(),
        points.end(),
        [&word](const Point& p) {
            return p.get_name() == word;
        });

    if (it == points.end())
    {
        return "Invalid point name";
    }

    const auto desc = it->get_description();

    return desc;
};
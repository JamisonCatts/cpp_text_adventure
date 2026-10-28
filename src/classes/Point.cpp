#include <string>

#include <classes/Point.h>

Point::Point(std::string name, std::string description) : name(name), description(description){};

bool Point::operator==(const Point &other) const
{
    return name == other.get_name() && description == other.get_description();
}

std::string Point::get_description() const
{
    return description;
}

std::string Point::get_name() const
{
    return name;
}
#include <classes/Point.h>

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
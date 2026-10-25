#include <string>

#pragma once
class Point{


    private:
        std::string name;
        std::string description;


    public:
        std::string get_description() const;
        std::string get_name() const;
        bool operator==(const Point &other) const;
};
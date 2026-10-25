#include <iostream>

#include <classes/State.h>
#include <data/LocationData.h>

State::State(const std::string &location_name) : location(create_location(location_name)){
};

const Location &State::get_location() const {
    return this->location;
}



State current_state("init");


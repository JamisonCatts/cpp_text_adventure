#pragma once

#include <classes/Location.h>


class State {
    


    public:
        State(const std::string &location_name);
        
        const Location &get_location() const;
        
    private:
        
        Location location;
        

};

extern State current_state;
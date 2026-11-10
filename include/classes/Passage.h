#pragma once

#include<string>

#include<classes/Location.h>


class Passage
{
    // TODO:constructor
    private:
        std::string port;
        std::string open_message;
        std::string closed_message;
        Location *next_loc;
        bool open;

        // Called when actually need to load next loc
        void load_next();

    public:
        std::string move_to();
};
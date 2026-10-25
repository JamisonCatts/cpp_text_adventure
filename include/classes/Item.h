#include <string>

#pragma once

class Item{
    
    public: 
    
        std::string get_name() const;
    
        virtual void use();
    private:
        std::string name;
        

};
#include <classes/Passage.h>

std::string Passage::move_to(){

    if (open){
        return open_message;
    }
    else{
        return closed_message;
    }

}
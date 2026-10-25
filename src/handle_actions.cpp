#include <vector>
#include <string>
#include <algorithm>

#include <handle_actions.h>
#include <classes/State.h>
#include <classes/Location.h>



std::string handle_look(const std::vector<std::string> &following_words){
    
    const Location &curr_loc = current_state.get_location();

    if (following_words.size() == 0){
        return curr_loc.get_description();
    }
    else if (following_words.size() == 1){
        
        std::string word = following_words[0];

        if (!curr_loc.has_point(word)){
            return "That isn't near you";
        }
        else {
            return curr_loc.get_point_desc(word);
        }
    }
    else {
        return "Sumin else happened";
    }

}

void handle_move(const std::vector<std::string> &following_words){

    const auto &curr_loc = current_state.get_location();
    const auto &adjacents = curr_loc;
}
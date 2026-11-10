#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
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

std::string handle_move(const std::vector<std::string> &following_words){

    std::vector<std::string> following_copy = following_words;
    if (following_copy.at(0) == "at" || following_copy.at(0) == "to"){
        std::vector<std::string> copy(following_copy.begin() + 1, following_copy.end());
        following_copy = copy;
    }

    for (std::string &word : following_copy){
        std::cout << word << std::endl;
    }

    

    const auto &curr_loc = current_state.get_location();
    const auto &adjacents = curr_loc;
}
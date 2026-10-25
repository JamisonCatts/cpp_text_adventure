#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <optional>

#include <handle_input.h>
#include <classes/State.h>
#include <handle_actions.h>


std::string terminate_word = "HADOINGO";

namespace
{
    enum SuperWord {
        EXIT,
        ATTACK,
        LOOK,
        USE
    };
    // Checks first word of input to see if its in total set of valid words
    // if so, maps any synonym to a parent identifier
    // valid starters is defined as all values in super_words map on initialization
    std::unordered_map<SuperWord, std::unordered_set<std::string>> super_words =
        {
            {EXIT , {"exit", "quit", "terminate"}},
            {ATTACK, {"attack", "fight", "battle", "combat"}},
            {USE, {"use", "utilize", "activate"}}, 
            {LOOK, {"look", "search"}}
        };

    

}

std::vector<std::string> split(const std::string &str, char delimiter)
{
    std::vector<std::string> result;
    std::istringstream iss(str);
    std::string item;

    while (iss >> item)
    {
        result.push_back(item);
    }

    return result;
}

std::optional<SuperWord> find_super(const std::string &sub) {

    for (const auto& [key, value_set] : super_words) {
        if (value_set.find(sub) != value_set.end()) {
            return key;
        }
    }

    return std::nullopt;
}

/*
 */
std::string handle_input(std::string &input)
{
    // to_lowercase()
    std::transform(input.begin(), input.end(), input.begin(),
               [](unsigned char c) {
                   return std::tolower(c);
               });

    std::vector<std::string> splits = split(input, ' ');

    // check if only whitespace
    if (splits.size() == 0)
    {
        return "";
    }

    

    
    std::string first_word = splits[0];
    SuperWord super_word;
    auto res = find_super(first_word);

    // check if word actually in valid words
    if (!res.has_value()){
        return "Invalid action word";
        
    }
    else {
        super_word = res.value();
    }

    switch (super_word)
    {
    case EXIT:
            return terminate_word;
        break;
    case LOOK:
        
        break;
    
    default:
        break;
    }
    

    return "End of boingo";
}
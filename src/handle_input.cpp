#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <optional>

#include <handle_input.h>


namespace
{
    // Checks first word of input to see if its in total set of valid words
    // if so, maps any synonym to a parent identifier
    // valid starters is defined as all values in super_words map on initialization
    std::unordered_map<std::string, std::unordered_set<std::string>> super_words =
        {
            {"exit" , {"exit", "quit", "terminate"}},
            {"attack", {"attack", "fight", "battle", "combat"}},
            {"use", {"use", "utilize", "activate"}}, 
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

std::optional<std::string> find_super(const std::string &sub) {

    for (const auto& [key, value_set] : super_words) {
        if (value_set.find(sub) != value_set.end()) {
            return key;
        }
    }

    return std::nullopt;
}

/*
 */
int handle_input(std::string &input)
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
        return 0;
    }

    

    
    std::string first_word = splits[0];
    auto super_word = find_super(first_word);

    // check if word actually in valid words
    if (super_word != std::nullopt){

    }
    else {
        std::cout << "Invalid action word" << std::endl;
    }

    

    return 0;
}
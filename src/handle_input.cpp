#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <handle_input.h>
#include <unordered_set>
#include <unordered_map>

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


    std::unordered_set<std::string> valid_starters = []
    {
        std::unordered_set<std::string> result;

        for (const auto& [super_word, sub_words] : super_words)
        {
            
            for (const auto& sub_word : sub_words)
            {
                result.insert(sub_word);
            }
        }

        return result;
    }();
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

/*
 */
int handle_input(std::string &input)
{

    std::vector<std::string> splits = split(input, ' ');

    // check if only whitespace
    if (splits.size() == 0)
    {
        return 0;
    }

    if (splits[0] == "exit")
    {
        return 1;
    }

    for (auto &token : splits)
    {
        std::cout << token << std::endl;
    }

    return 0;
}
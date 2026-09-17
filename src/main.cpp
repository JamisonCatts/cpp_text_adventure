#include <iostream>
#include <sstream>
#include <vector>
#include <string>
// Change name eventually

void printInitial(){
    std::cout << "Welcome to Text Adventure\n" << std::endl;
    std::cout << "Type actions to interact with world\n" << std::endl;
    std::cout << "...\n" << std::endl;
    std::cout << "You awake in a dimly lit dungeon. There is a candle in the center of the room, and a rusty gate\n" << std::endl;
}

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    std::istringstream iss(str);
    std::string item;

    while (iss >> item){
        result.push_back(item);
    }

    return result;
}

/*
*/
int handleInput(std::string &input){

    
    std::vector<std::string> splits = split(input, ' ');

    // check if only whitespace
    if (splits.size() == 0){
        return 0;
    }

    if (splits[0] == "exit"){
        return 1;
    }

    for (auto &token : splits){
        std::cout << token << std::endl;
    }

    return 0;

}

int main() {

    printInitial();
    std::string userInput;
    
    auto terminate = true;
    // Main gameplay loop. Gets user input and processes
    while(terminate){
        std::getline(std::cin, userInput);
        terminate = !handleInput(userInput);
    }

    return 0;
}


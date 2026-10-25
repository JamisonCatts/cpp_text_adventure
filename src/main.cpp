#include <iostream>

#include <classes/State.h>
#include <handle_input.h>
// Change name eventually

std::string get_initial_message(){
    std::string ret = "";

    ret += "Welcome to Text Adventure\n";
    ret += "Type actions to interact with world\n";
    ret += "...\n";
    ret += "You awake in a dimly lit dungeon. There is a candle in the center of the room, and a rusty gate\n";

    return ret;
}



int main() {

    std::cout << get_initial_message();
    std::string userInput;
    

    // Main gameplay loop. Gets user input and processes
    std::string res;
    while(true){
        std::getline(std::cin, userInput);

        res = handle_input(userInput);

        if (res == terminate_word){
            break;
        }
        std::cout << res;
        std::cout << std::endl;
        
    }

    return 0;
}


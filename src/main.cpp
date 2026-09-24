#include <iostream>

#include <classes/State.h>
#include <handle_input.h>
// Change name eventually

void print_initial(){
    std::cout << "Welcome to Text Adventure\n" << std::endl;
    std::cout << "Type actions to interact with world\n" << std::endl;
    std::cout << "...\n" << std::endl;
    std::cout << "You awake in a dimly lit dungeon. There is a candle in the center of the room, and a rusty gate\n" << std::endl;
}


State current_state;

int main() {

    print_initial();
    std::string userInput;
    
    auto not_terminate = true;
    // Main gameplay loop. Gets user input and processes
    while(not_terminate){
        std::getline(std::cin, userInput);
        not_terminate = !handle_input(userInput);
    }

    return 0;
}


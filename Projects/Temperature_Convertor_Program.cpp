#include <iostream>

int main(){
    /*
    declare variables
    print statement, user input, menu
    if statement rather than switch case as its only 2 options
    << insertion operator, sends data from an output stream
    >> extraction operator, takes data from an input stream

    Notes:
    bro code used a char (F/C) for the options instead of 1/2/3 and used || to check for upper case and lower case input
    everything else is the same
    */

    int userChoice; //input from menu
    double temp; //the number the user is converting
    double result; //the final conversion

    std::cout << "     ===MENU===" << "\n";
    std::cout << "1. Convert from Celsius to Farenheit" << "\n";
    std::cout << "2. Convert from Farenheit to Celsius" << "\n";
    std::cout << "3. Exit menu" << "\n";

    std::cout << "\nPlease select your option (1-3): ";
    std::cin >> userChoice;

    if(userChoice == 1){
        std::cout << "Please enter the temperature (C): ";
        std::cin >> temp;

        result = (temp * 1.8) + 32;
        std::cout << result;
    } else if(userChoice == 2){
        std::cout << "Please enter the temperature (F): ";
        std::cin >> temp;

        result = (temp - 32) / 1.8;
        std::cout << result;
    } else if(userChoice == 3){
        std::cout << "Exiting menu..." << "\n";
        std::cout << "Successfully exited menu";
    } else{
        std::cout << "\nSomething went wrong";
    }

    return 0;
}
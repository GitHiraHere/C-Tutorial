#include <iostream>

int main(){
    /* && = check if two conditions are true
       || = check if at least one of the two conditions are true
       ! = reverses the logical state of its operand
       << insertion operator, sends data from an output stream
       >> extraction operator, takes data from an input stream
    */

    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    //temp > 0 && temp < 30 - if temp is greater than 0 AND less than 30
    //temp <= 0 || temp >= 30 if temp is less than or equal to 0 OR greater than or equal to 30
    // I know how to use not (!) so, going to skip that example
    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad :(";
    } else{
        std::cout << "The temperature is good!";
    }
    return 0;
}
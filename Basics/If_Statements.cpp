#include <iostream>

int main(){

    int age;
    // https://www.geeksforgeeks.org/cpp/left-shift-right-shift-operators-c-cpp/
    std::cout << "What is your age?: ";
    std::cin >> age;

    //https://cplusplus.com/doc/tutorial/operators/
    // we check the coniditions one by one from top down, so the order does matter
    if(age >= 18){
        std::cout << "Welcome to the site";
    }
    else if(age < 0){
        std::cout << "You have not been born yet";
    }
    else if(age > 100){
        std::cout << "You are too old to enter the site";
    }
    else{
        std::cout << "You are not old enough to enter";
    }

    return 0;
}
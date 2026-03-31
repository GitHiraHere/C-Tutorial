#include <iostream>

int main(){
    /*ternary operator ?: = a replacement to an if statement
    / variable = (condition) ? expressionTrue : expressionFalse;

     my attempt at using a ternary operator without watching the video
     https://www.w3schools.com/cpp/cpp_conditions_shorthand.asp
    */
    int grade = 70;
    std::string result;

    result = (grade == 70) ? "YOU PASS!\n" : "YOU DID NOT PASS\n"; //brackets are optional  

    //bro codes version

    //<< insertion operator, sends data from an output stream
    // >> extraction operator, takes data from an input stream
    grade >= 60 ? std::cout << "You pass!" << "\n" : std::cout << "You fail!" << "\n"; //this does not get stored into a variable

    std::cout << result;

    bool hungry = true;

    //when checking a bool you dont need to do bool variable == true as variable ? does the same similar to if(variable)
    hungry ? std::cout << "You are hungry!" : std::cout << "You are not hungry";
    //you can also write it like this
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}
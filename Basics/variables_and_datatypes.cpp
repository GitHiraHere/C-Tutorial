#include <iostream>

int main(){
    int x; //declaration
    x = 5; //assignment, in cases where we dont know what value we're giving the variable we can just declare it and assign
    //a value later on in the code, such as for user input
    //ctrl + alt + n to run in command terminal
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    double days = 7.5;

    std::cout << days << '\n';

    char grade = 'A';
    std::cout << grade << '\n';

    bool student = false;
    std::cout << student << '\n';

    std::string name = "yourmum";
    std::cout << name << '\n';

    return 0;
}
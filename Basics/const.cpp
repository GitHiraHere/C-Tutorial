#include <iostream>

//const keyword tells the compiler to prevent anything form modifying the variables value

int main(){

    const double PI = 3.14159; //a common naming convention for constants is to make the variables name entirely uppercase
    //PI = 32 for example would lead to an error stating we are trying to change a read only variable
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}

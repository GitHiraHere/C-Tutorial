#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double z;

    //the std max func tells you the greater of two values/variables
    //z = std::max(x, y);
    //z = std::min(x, y);
//rest of math functions are found in the cmath header file
    //z = pow(2, 3); //2 to the power of 3
    //z = sqrt(9); //square root of 9 is 3
    z = abs(-3); //absolute value if you put a negative number it gives u the positive number of that value, how far it is from 0
    double a = 3.99;
    double f;
    //f = round(a); // rounds a
    //f = ceil(a); //rounds up, ceiling
    f = floor(a); //rounds down

    std::cout << f;
    std::cout << "\n" << z; //insertion operator
    return 0;

    //more math functions: https://cplusplus.com/reference/cmath/
}
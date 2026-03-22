#include <iostream>
int main(){
    int students = 20;

    students+=1; //(21)
    std::cout << students;
    //you can also add by incrementing
    students++; //adds 1, typically used in loops (22)

    students-=1; //(21)
    students = students - 1; //(20)
    students --; //subtracts 1 (19)
    std::cout << "\n" << students;

    //same for multiplication and division aside from the increment/decrement operators

    //if we want the remainder of something we use the modulous operand
    int remainder = students % 2; //divide the group of students into 2 (19%2)

    std::cout << "\n" << remainder; //display the remainder (prints 1 - https://www.geeksforgeeks.org/cpp/modulo-operator-in-c-cpp-with-examples/)

    //using the modulous operator we can check if a number is even, divide by 2 if the remainder its even if not its odd

    //order of operations: parenthesis, multiplication & division, addition & subtraction
    return 0;
}
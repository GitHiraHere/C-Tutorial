#include <iostream>
/* I will be attempting this myself, and then will compare my solution to his
*   
* Notes: his was printed more nicely, and his \n character was at the end e.g. "text\n", other than that, everything else followed
* the same logic
*/

int main(){
    //using namespace std
    // Declaration
    char op; //cant use the word operator?
    double number1;
    double number2;
    double result;

    // Menu
    std::cout << "        ---MENU---"; //insertion operator, sends data from an output stream
    std::cout << "\n" << "Welcome to my calculator program :3";
    std::cout << "\n" << "Please enter an operator (+, -, /, *): ";
    std::cin >> op; //extraction operator, takes data from an input stream

    std::cout << "\n" << "Please enter the first number: ";
    std::cin >> number1;

    std::cout << "\n" << "Please enter the second number: ";
    std::cin >> number2;

    switch(op){
        case '+':
            result = number1 + number2;
            std::cout << "Your result is " << result;
            break;
        case '-':
        result = number1 - number2;
            std::cout << "Your result is " << result; // this handles negative numbers ?? huge!
            break;
        case '/':
            result = number1 / number2;
            std::cout << "Your result is " << result;
            break;
        case '*':
            result = number1 * number2;
            std::cout << "Your result is " << result;
            break;
        default: 
            std::cout << "That was an invalid choice, please choose from the following and try again (+, -, /, *)";
            break;
    }

    return 0;
}
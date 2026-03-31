#include <iostream>
// more examples: https://cplusplus.com/reference/string/string/

int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); //in case users use spaces

    if(name.length() > 12){ //if name length is greater than 12
        std::cout << "Your name cannot be over 12 characters!" << "\n";
    } else{
        std::cout << "Welcome " << name << "\n";
    }

    name.empty(); //returns a boolean value

    if(name.empty()){ //if name is empty
        std::cout << "Your name cannot be empty!" << "\n";
    } else{
        std::cout << "Welcome " << name << "\n";
    }

    //name.clear(); cleares the info from the variable
    name.append("@gmail.com"); //add something to the end of a variable
    std::cout << "Your username is now " << name << "\n";

    std::cout << name.at(0) << "\n"; // character at index 0
    name.insert(0, "@"); //insert an @ symbol at index 0
    std::cout << name << "\n";

    std::cout << name.find(' ') << "\n"; //finding if there are any spaces in my name, will print the index of the first whitespace

    std::cout << name.erase(0, 3); //eliminating the first 3 letters, it is NOT inclusive
    return 0;
}
#include <iostream>

//we're familiar with cout << (insertion operator)
//to accept input we do cin >> (extraction operator)

int main(){
    using namespace std;
    string name;
    int age;
    
    cout << "What is your age?: ";
    cin >> age;
    cout << "What is your name?: ";
    /*cin >> name; cin extraction operator name, we are storing the input in name
    // the problem with this is if there's a space, its truncated
     we can use the getline function to help with this
    */
     std::getline(std::cin >> std::ws, name); //now we can type a string with spaces
    //an issue that can occur is if u accept user input with cin followed by getline there is a \n character in the input buffer
    //we dont pick it up, so when we reach get line it accepts that \n char
    //to prevent that from happening we add >> std::ws ws for any whitespaces, this removes any newline char/spaces before user input

     
    cout << "Hello " << name << "\n"; 
    cout << "You are " << age << " years old";
    return 0;
}
#include <iostream>
//namespaces provide a solution for name conflicts in large projects, each entity needs a unique name. A namespace 
//allows identically named entities as long as the namespace is different

namespace first{
    int x = 1;
}

namespace second{
    int x = 1;
}

int main(){

    int x = 0;
    std::cout << x; //if I do not specify which namespace I am using we use the local version (in this case, x = 0)
    //if I want the version x in the first namespace I would take the entity and add its namespace as a prefix with 2 colons (Scope resolution operator)
    std::cout << "\n" << first::x;

    //another way to do this is using the line
    using namespace first;
    std::cout << "\n" << x; //x = 1 but if I need x from the second prefix I would still need to prefix it
    std::cout << "\n" << second::x;
    return 0;
}

int main2(){
    //another line we can use is the following
    using namespace std;
    //this can be used on strings and outputs
    string name = "dont have to use std::!";
    //this saves typing but there are thousands of functions std is used for and there is a high likelihood of naming conflict
    //an alternative is 
    using std::cout;
    using std::string; //these are safer alternatives
    //bro code wont use it but he's just explained thats what that line means
}
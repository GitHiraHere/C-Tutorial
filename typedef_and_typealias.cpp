#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; //common naming convention for an alias is to have _t at the end for type
typedef std::string text_t;

using text_t = std::string;
using number_t = int;
int main(){
    //type def is used for an alias of another data type, helps with readability and reduces typos, its a new identifier for 
    //an exisiting type

    pairlist_t pairlist;

    text_t firstName = "your mom"; //a string using typedef
    std::cout << firstName;

    //typedef has been replaced with using (works better with templates, using the using keyword is more recommended)
    number_t age = 4;
    std::cout << "\n" << age;
    //pretty much only use both of these when there is a clear benefit
    return 0;
}
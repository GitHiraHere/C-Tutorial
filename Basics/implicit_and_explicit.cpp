#include <iostream>
//type conversion is the conversion of a value to another
//we do this either implicitly = automatically
//or explicitly we precede value with new data type = within a set of paranthesis we put the new datatype before the var or value (int) x
int main(){
    int x = 3.14;
    std::cout << x; //we truncated the decimal portion and implictly changed the value into an integer

    //if we cast x as an int then assiged as a double, tht is explicit
    double y = (int) 3.14; //convert 3.14 to an int, then store it in the variable y, which is a double
    std::cout << "\n" << y;

    char test = (int) 100;
    std::cout << "\n" << test; //converts into d, ascii

    /*how is this useful? Imagine we have an online exam, we want to convert the correct number of questions (number) to a grade (char)
    int correct = 8;
    int questions = 10;
    double score = correct/questions * 100;

    std::cout << "\n" << score << "%"; //we get 0% as its integer division, we truncate the decimal portion then multiplying whatevers left
    to avoid this we then explicitly cast questions as a double
    */
   int correct = 8;
   int questions = 10;
   double score = correct/(double)questions * 100;

   std::cout << "\n" << score << "%";
    return 0; 
}
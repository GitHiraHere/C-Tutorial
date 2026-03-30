#include <iostream>
#include <cmath>

int main(){
    //Declaration of variables
    std::string input;
    int inputA;
    int inputB;
    int result;

    std::cout << "Are you 67 or tung tung sahur coded?: "; //insertion operator, sends data from an output stream
    std::cin >> input; //extraction operator, takes data from an input stream
    
    if("67"){
        std::cout << "Enter a number: ";
        std::cin >> inputA;

        std::cout << "Enter another number: ";
        std::cin >> inputB;

        result = pow(inputA, inputB);
        //https://emojicombos.com/ascii-art
        switch(result){
            case 32:// 2 to the power of 5 gets 32
            std::cout << "⋆.˚🦋༘⋆⋆.˚🦋༘⋆";

        }

    }else if("tung tung sahur"){

    }else{

    }
}
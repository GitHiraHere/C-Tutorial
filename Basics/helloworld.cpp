#include <iostream> //iostream is a headerfile that contains functions for basic input/output operations. by writing include iostream we're including that header file which gives us access to useful input output operations 

int main(){

    std::cout << "I like pizza" << std::endl; //std means follow standard, this means standard character output(<<), semi colons at the end of statements tells the compiler this statement is done, like a full stop
    //std::endl ends the line and is the \n of c++

    std::cout << "Showcasing backslash n" << '\n';
    //if we want to optomise the code to run faster we can use '\n', the benefit of using std is that it flushes the buffer
    
    //Flushing the buffer refers to the process of transferring data from a temporary storage area (the buffer) to the computer's
    //permanent memory. In programming, buffers are used to optimize read and write operations by storing data temporarily before 
    //it is sent to the output stream. When you use std::endl, it not only adds a newline but also flushes the output buffer, 
    //ensuring that all output is displayed immediately. This is crucial for real-time applications, as it prevents delays in 
    //feedback and ensures that data is processed and displayed as soon as possible.

    std::cout << "YIPPEE";
    return 0; //at the end of the function we want this, if we reach return 0 there is no problems, if we get return 1 there is an issue
}
// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a,b = 5; // same level of indentation as main function == means that a and b are global variables == accessable to all parts of the code
// you can declare variables inside functions which limits their scopes with curly brackets
//automatic/local variables == managed by the compiler and allocated in the stack segment of memory>> temporary

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout<<"a = " << a << std::endl;
    std::cout<<"b = " << b << std::endl;
    std::cout<<"flag = " << my_flag << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}

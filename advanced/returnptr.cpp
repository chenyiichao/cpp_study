#include <iostream>

int global = 0;

int * func() {
    
    return &global;
}


int main() {
    
    int * ptr = func();
    std::cout << "Value of global variable: " << global << std::endl;
    std::cout << "Value of local variable: " << *ptr << std::endl;
    
    return 0;
}





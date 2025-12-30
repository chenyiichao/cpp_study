
#include <iostream>

inline int add(int a, int b) {
    return a + b;
}

int main() 
{
    std::cout << "5 + 7 = " << add(5, 7) << std::endl;
    return 0;
}
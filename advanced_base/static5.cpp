#include <iostream>
#include <cstring>

using namespace std;

class Apple 
{
public:
    static void printMsg() {
        cout << "Welcome to Apple;";
    };
};

int main() {
    Apple::printMsg();
}
#include <iostream>

using namespace std;

int main() 
{
    int var = 20;
    int *ip;

    ip = &var;
    // *ip = var;

    cout << "value of var variable:";
    cout << var << endl;
 
    cout << "Address stored in ip variable:";
    cout << ip <<endl;

    cout << "Value of *ip variable:";
    cout << *ip << endl;


    return 0;
}
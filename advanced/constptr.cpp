#include <iostream>
using namespace std;

int main() {
    int n = 10; const int* p;
    p = &n;

    p = &n; // valid, but not recommended

    // *p = 20; // valid, but not recommended

    int m = 10; int * const p2 = &m; // pointer to const int

    *p2 = 20; // valid, but not recommended

    // p2 = &n; // invalid, cannot assign to pointer to const

    cout << "*p = " << *p << endl; // prints 10
    cout << "*p2 = " << *p2 << endl; // prints 20

    cout << "p = " << p << endl; // prints the address of n
    cout << "p2 = " << p2 << endl; // prints the address of m

    int nn = 10;
    const int* const p3 = &nn; // pointer to const int, const pointer to const int

    // p3 = &nn;
    // *p3 = 20; 
    cout << "*p3 = " << *p3 << endl; // prints 10
    cout << "p3 = " << p3 << endl; // prints the address of nn

    return 0;
}
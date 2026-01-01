#include <iostream>
using namespace std;

int main() {

    char a[10];
    cin.get(a, 20);
    cout << "a : " << a << endl;
    cout << sizeof(a) << endl;

    char b[10];
    cin.get(b,20);
    cout << "b : " << b << endl;
    cout << sizeof(b) << endl;

    char c[5];
    cin.get(c,10);
    cout << "c : " << c << endl;
    cout << sizeof(c) << endl;

    char d[10];
    cin.get(d,5);
    cout << "d : " << d << endl;
    cout << sizeof(d) << endl;

    return 0;
}
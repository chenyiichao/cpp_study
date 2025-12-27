#include <iostream>
using namespace std;

namespace A
{
    int a  = 100;
    namespace B
    {
        int b = 200;
    }
}

int a = 200;

int main()
{
    cout << "A::a = " << A::a << endl; // 100
    cout << "A::B::b = " << A::B::b << endl; // 200
    cout << "a = " << a << endl;  // 200

    // ::a 为全局变量a
    cout << "::a = " << ::a << endl; // 200

    int a = 30;
    cout << "a = " << a << endl; // 30
    cout << "::a = " << ::a << endl; // 200

    return 0;
}
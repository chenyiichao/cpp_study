#include <iostream>
using namespace std;

int main() {
//     char c[30] = "this is string";
//     cout.width(30);
//     cout.fill('*');
//     cout.setf(ios::left);
//     cout << c << "-------L1" << endl;
    double d = -1231.232;
    // cout.width(30);
    // cout.fill('-');
    // cout.setf(ios::right);
    // cout << d << "-------L2" << endl;
    cout.setf(ios::dec | ios::showbase | ios::showpoint);
    cout.width(30);
    cout << d << "-------L3" 
        << "\n";
    // cout.setf(ios::showpoint);
    cout.precision(10);
    cout.width(30);
    cout << d << "-------L4" << endl;   
    // cout.width(30);
    // cout.setf(ios::oct, ios::basefield);
    // cout << 100 << "-------L5" << endl;

    return 0;
}
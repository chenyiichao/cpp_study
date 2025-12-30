
#include <iostream>
#include <cstring>
using namespace std;

// template<typename T> ret-type func-name(parameter list)
// {
//     // 函数的主体
// }

using namespace std;

template<typename T>
inline T const& Max(T const& a, T const& b) 
{
    return a < b ? b : a;
}

int main()
{
    int i = 10;
    int j = 20;

    cout << "Max of(i, j) = " << Max(i, j) << endl;

    double f1 = 3.14;
    double f2 = 2.71;
    cout << "Max of (f1, f2) = " << Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max of (s1, s2) = " << Max(s1, s2) << endl;

    cout << (s1 < s2) << endl;
    return 0;
}


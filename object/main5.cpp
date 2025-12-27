#include <iostream>

using namespace std;

inline int Max(int x, int y) // 内联函数
{
    return (x > y) ? x : y;
}

int main()
{
    cout << "Max(20,10)" << Max(20, 10) << endl;
    return 0;
}
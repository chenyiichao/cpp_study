#include <iostream>

using namespace std;

int main()
{
    int a = 100;
    int b = 200;

    cout << "交换前,a :" << a << endl;
    cout << "交换前,b :" << b << endl;

    swap(a, b);

    cout << "交换后,a :" << a << endl;
    cout << "交换后,b :" << b << endl;

    return 0;
}

void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    return;
}
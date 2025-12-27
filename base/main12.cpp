#include <iostream>

using namespace std;

int main()
{
    int var = 1000;
    int *ptr = &var;
    int **pptr = &ptr;

    cout << "var 值为：" << var << endl;
    cout << "*ptr 值为：" << *ptr << endl;
    cout << "**pptr 值为：" << **pptr << endl;

    return 0;
}
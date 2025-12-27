#include <iostream>
using namespace std;


int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int* ptr = arr;

    cout << "指针当前指向的元素：" << *ptr << endl;

    ptr ++;

    cout << "递增后指针指向的元素：" << *ptr << endl;

    return 0;
}
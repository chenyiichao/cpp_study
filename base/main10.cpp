#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *ptr = &arr[1];

    cout << "当前指针指向的元素："  << *ptr << endl;

    ptr --;

    cout << "递减之后指针执行的元素：" << *ptr << endl;

    return 0;
}
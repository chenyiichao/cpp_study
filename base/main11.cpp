#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &a;
    int *ptr3 = &b;

    if(ptr1 == ptr2) {
        cout << "ptr1 和 ptr2指向相同的位置" << endl;
    } else {
        cout << "ptr1 和 ptr2指向不同的位置" << endl;
    }

    if(ptr1 == ptr3) {
        cout << "ptr1 和 ptr3指向相同的位置" << endl;
    } else {
        cout << "ptr1 和 ptr3指向不同的位置" << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

class MyClass {
public:
    int data;

    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    MyClass obj;
    obj.data = 10;

    MyClass *ptr = &obj;
    
    cout << "Data via pointer:" << ptr->data << endl;

    ptr->display();

    MyClass *p = new MyClass;
    p -> data = 20;
    p -> display();

    delete p;

    return 0;
}
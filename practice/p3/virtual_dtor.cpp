
#include <iostream>
using namespace std;

class A {
public:
    virtual ~A() {
        cout << "A destructor called" << endl;
    }
};

class B : public A {
    char* buf;
public:
    B(int size) {
        buf = new char[size];
    }
    ~B() {
        delete[] buf;
        cout << "Call B constructor" << endl;
    }
};

int main() {
    A *a = new B(10);
    delete a;

    return 0;
}
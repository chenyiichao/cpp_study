#include <iostream>
#include <string>
using namespace std;

class A {
public:
    void f(int i) { cout << "A::f(int)" << endl; }
};
class B : public A {
public:
    virtual void f(int i) { cout << "B::f(int)" << endl; }
};
class C : public B {
public:
    virtual void f(int i) { cout << "C::f(int)" << endl; }
};
class D : public C {
public:
    virtual void f(int i) { cout << "D::f(int)" << endl; }
};

int main() {
    A *pa, a;
    B *pb, b;
    C c;
    D d;

    pa = &a;
    pa->f(1); // calls A::f(int)
    pb = &b;
    pb->f(1); // calls B::f(int)
    pb = &c;
    pb->f(1); // calls C::f(int)
    pb = &d;
    pb->f(1); // calls D::f(int)

    return 0;
}




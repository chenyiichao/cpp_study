
#include <iostream>
using namespace std;

class A {
    int a ;

public:
    void setA(int x) { a = x;}
    int getA() { return a; }
};

class B :public A {
    int b;

public:
    void setB(int x) { b = x;}
    int getB() { return b; }
};

void f1(A a, int x) { a.setA(x);}
void f2(A *pa, int x) { pa -> setA(x);}
void f3(A &ra, int x) { ra.setA(x);}

int main() {
    A a1,*pa;
    B b1;
    a1.setA(10);
    b1.setA(20);

    a1 = b1;
    cout << a1.getA() << endl;
    cout << b1.getA() << endl;

    a1.setA(30);
    cout << a1.getA() << endl;
    cout << b1.getA() << endl;

    pa = &b1;
    pa -> setA(40);
    cout << A(*pa).getA() << endl;
    cout << pa -> getA() << endl;
    cout << b1.getA() << endl;

    b1.setA(50);
    cout << b1.getA() << endl;

    f1(b1, 100);
    cout << "--------------------" << endl;
    cout << b1.getA() << endl;
    f2(&b1, 200);
    cout << b1.getA() << endl;
    f3(b1, 300);
    cout << b1.getA() << endl;

    return 0;
}
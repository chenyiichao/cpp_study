#include <iostream>

using namespace std;

class Base1 {
public:
    Base1() : value(10) {}
    virtual ~Base1() {}
    void test1() { cout << "Base test1..." << endl; }
protected:
    int value;
};

// 默认私有继承
class Derived1 : Base1 {
public:
    void test2() { cout << "value is  " << value << endl; }
};

class Base {
public:
    Base(): value(20) {}
    virtual ~Base() {}
    void test1() {cout << "Base test1 ..." << endl; }

private :
    int value;
};

/**
 * 子类对父类成员的访问权限跟如何继承没有任何关系。
 */
class Derived : Base {
public:
    using Base::value;
    void test2() { cout << "value is " << value << endl; }
};

int main() {
    Derived1 d1;
    d1.test2();

    Derived d;
    d.test2();

    return 0;
}



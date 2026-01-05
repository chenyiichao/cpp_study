/**
 * @file geninhe.cpp
 * @brief 1.普通单继承,继承就是基类+派生类自身的大小(注意字节对齐)
 * 注意：类的数据成员按其声明顺序加入内存，无访问权限无关，只看声明顺序。
 * 2.虚单继承，派生类继承基类vptr
 * @author 光城
 * @version v1
 * @date 2019-07-21
 */

#include<iostream>

using namespace std;

class A {
    public:
        char a;
        int b;
};

class B:A {
    public:
        short a;
        long b;
};

class C {
    A a;
    char c;
};

class A1 {
    virtual void fun(){}
};

class C1: public A1 
{

};


int main() {
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
    
    cout << sizeof(C1) << endl;
}
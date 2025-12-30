
#include <iostream>
using namespace std;

class A {
public: 
    A() { cout << " Constructor A called " << endl; }
    ~A() { cout << " Destructor A called " << endl; }
};

class B :public A{
public:
    ~B() { cout << " Destructor B called " << endl; }
};

int main() {
    B b;   
}
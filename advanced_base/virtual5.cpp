#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Constructor: Base" << endl;
    }
    virtual ~Base() {
        cout << "Destructor : Base" << endl;
    }
};


class Derived: public Base {
public:
    Derived() { cout << "Constructor: Derived" << endl; }
    ~Derived() { cout << "Destructor: Derived"  << endl; }
};

int main() {
    Base *var = new Derived();
    delete var;
    return 0;
}
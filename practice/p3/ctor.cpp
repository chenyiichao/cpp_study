
#include <iostream>
using namespace std;

class Base {
    public:
        int x;
    
        Base(int a) {
            x = a;
            cout << "Base constructor called with " << a << endl;
        }
        ~Base() {
            cout << "Base destructor called" << endl;
        }
};

class Derived : public Base {
    public:
        int y;

        Derived(int a, int b) : Base(a) {
            y = b;
            cout << "Derived constructor called with " << a << " and " << b << endl;
        }
        ~Derived() {
            cout << "Derived destructor called" << endl;
        }
};

int main() {
    Derived d(10, 20);
    cout << "x = " << d.x << endl;
    cout << "y = " << d.y << endl;
    return 0;
}
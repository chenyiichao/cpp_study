#include <iostream>

using namespace std;
class Base{ 
public:
    inline virtual void who(){
        cout << "I am Base" << endl;
    }
    virtual ~Base(){
        cout << "~Base()" << endl;
    }
};

class Derived : public Base {
public:
    inline void who() 
    {
        cout << "I am Derived" << endl;
    }
    ~Derived(){
        cout << "~Derived()" << endl;
    }
};

int main() {
    Base b;
    b.who();

    Base *ptr = new Derived();
    ptr->who();

    delete ptr;
    ptr = nullptr;

    system("pause");
    return 0;
}
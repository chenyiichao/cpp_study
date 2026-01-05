#include <iostream>
using namespace std;

class Copyable {
public:
    Copyable(){}
    Copyable(const Copyable &o) {
        cout << "Copied" << endl;
    }
};

Copyable ReturnRvalue() {
    return Copyable();
}

void AcceptVal(Copyable a) {}
void AcceptRef(const Copyable &a) {}

int main() {
    cout << "pass by value:" << endl;
    AcceptVal(ReturnRvalue());
    cout << "pass by reference:" << endl;
    AcceptRef(ReturnRvalue());
    
}
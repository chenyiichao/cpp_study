/* []与() 运算符重载 */
#include <iostream>
#include <cstring>
using namespace std;

class X {
    
public:
    X(int ii):i(ii){};
    int operator()();
    int operator[](int o);
private:
    int i;
};

int X::operator()() {
    cout << "(" << this->i << ")" << endl;
    return i;
}

int X::operator[](int num) {
    cout << "[" << this-> i << "," << num << "]" << endl;
    return i;
}

int main() {
    X x1(89);
    x1();
    x1[100];
}
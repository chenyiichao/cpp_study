#include <iostream>
using namespace std;

// class A1 {
//     const int SIZE = 100;
//     int array[SIZE]; // error
// };


class A {
public:
    A(int size);
    const int SIZE;
};

A::A(int size) :SIZE(size)
{

}

int main(){
    A a(100);
    A b(200);

    cout << "a.size = " << a.SIZE << endl;
    cout << "b.size = " << b.SIZE << endl;
}
#include <iostream>
#include <cstring>

using namespace std;

class Apple {
public:
    static int i;

    Apple() {
        // do nothing
    };
};
int Apple::i = 0;

int main() {
    Apple obj1;
    Apple obj2;

    obj1.i = 2;
    obj2.i = 3;

    cout << obj1.i << " " << obj2.i << endl;

    return 0;
}
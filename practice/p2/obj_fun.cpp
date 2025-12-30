#include <iostream>
using namespace std;

class R {
public:
    R(int r1, int r2) {
        R1 = r1;
        R2 = r2;
    }
    // const 区分
    void print() ;
    void print() const;
private:
    int R1, R2;
};

void R::print() {
    cout << "common print" << endl;
    cout << "R1 = " << R1 << ", R2 = " << R2 << endl;
}

void R::print() const {
    cout << "const print" << endl;
    cout << "R1 = " << R1 << ", R2 = " << R2 << endl;
}

int main() {
    R r(5,4);
    r.print();

    const R r1(8,9);
    r1.print();

    return 0;
}

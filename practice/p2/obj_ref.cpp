
#include <iostream>

using namespace std;

void display(const double &r);

class A 
{
    public:
        A(int i, int j) {
            x = i;
            y = j;
        }
    private:
        int x, y;
};
    
int main() 
{
    double d(9.5);
    display(d);
    A const a(3,4);

    double p1 = 10.0;
    double &r = p1;

    return 0;
}

void display(const double &r) {
    // double p = 10.0;
    // r = &p;
    cout << "The value of r is " << r << endl;
}

#include <iostream>

using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;

        double get(void);
        void set(double l, double b, double h);
};

double Box::get(void)
{
    return length * breadth * height;   
}

void Box::set(double l, double b, double h)
{
    length = l;
    breadth = b;
    height = h;
}

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;

    double volumn = 0.0;

    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    volumn = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1 is " << volumn << endl;


    volumn = Box2.height * Box2.length * Box2.breadth;
    cout << "Volume of Box2 is " << volumn << endl;

    Box3.set(16.0, 8.0, 12.0);
    volumn = Box3.get();

    cout << "volumn of Box3 is " << volumn << endl;
    return 0;
}


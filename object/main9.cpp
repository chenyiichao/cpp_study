#include <iostream>

using namespace std;

class Box
{
    public:
        Box(double l = 2.0, double b = 3.0, double h = 4.0)
        {
            cout << "Constructor called." << endl;
            length = l;
            breadth = b;
            height = h;
        }
        double Volume()
        {
            return length * breadth * height;
        }
    private:
        double length;
        double breadth;
        double height;
}; 

int main()
{
    Box box1(1.0, 2.0, 3.0);
    Box box2(4.0, 5.0, 6.0);
    Box *ptrBox;

    //
    ptrBox = &box1;

    cout << "Volume of box1 is " << ptrBox->Volume() << endl;
    cout << "Volume of box1 is " << box1.Volume() << endl;

    ptrBox = &box2;

    cout << "Volume of box2 is " << ptrBox->Volume() << endl;

    return 0;
}


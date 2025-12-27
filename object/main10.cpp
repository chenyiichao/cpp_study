#include <iostream>

using namespace std;

class Box 
{
    public:
        static int objectCount;
        Box(double l = 2.0,double b = 3.0,double h = 4.0)
        {
            cout << "Constructor called." << endl;
            length = l;
            breadth = b;
            height = h;
            // Increment the object count
            objectCount++;
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

int Box::objectCount = 0;

int main(void)
{
    Box box1(1.0, 2.0, 3.0);
    Box box2(4.0, 5.0, 6.0);
    Box box3(7.0, 8.0, 9.0);

    cout << "Total objects: " << Box::objectCount << endl;

    return 0;
}
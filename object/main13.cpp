#include <iostream>
using namespace std;

class Box 
{
    private:
        double length;
        double breadth;
        double height;
    public:
        Box(double l, double b, double h)
        {
            length = l;
            breadth = b;
            height = h;
        }
        Box(void){}
        double getVolumn(void)
        {
            return length * breadth * height;
        }
        Box operator+(Box& b)
        {
            Box box ;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }
};


int main()
{
    Box box1(1.0,2.0,3.0);
    Box box2(1.0,2.0,3.0); 

    double volumn = 0.0;

    volumn = box1.getVolumn();
    cout << "Box 1 volumn is " << volumn << endl;

    volumn = box2.getVolumn();
    cout << "Box 2 volumn is " << volumn << endl;


    Box box3 = box1 + box2;

    volumn = box3.getVolumn();
    cout << "Box 3 volumn is " << volumn << endl;
    return 0;
}

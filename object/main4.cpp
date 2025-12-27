#include <iostream>

using namespace std;

class Box
{
    double width;
public:
    friend void printWidth(Box box);
    void setWidth(double w);
};

void Box::setWidth(double w)
{
    width = w;
};

void printWidth(Box box)
{
    cout << "Width of the box is " << box.width << endl;
}

int main()
{
    Box box;
    box.setWidth(10.0);

    printWidth(box);
    return 0;
}
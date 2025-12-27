#include <iostream>
using namespace std;

class Shape {
    virtual int area() = 0;
};

class Rectangle : public Shape {
private :
    int width, height;
public :
    Rectangle(int l, int b) : width(l), height(b) {}

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle r(5, 7);
    cout << "Area of Rectangle is " << r.area() << endl;
    return 0;
}
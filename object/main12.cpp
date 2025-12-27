#include <iostream>
using namespace std;

class Shape 
{
public:
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
protected:
    int width, height;
};

class PaintCost
{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};

class Rectangle : public Shape, public PaintCost
{
    public:
        int getArea()
        {
            return width * height;
        }
};

int main()
{
    Rectangle rect;
    int area;

    rect.setWidth(5);
    rect.setHeight(10);

    area = rect.getArea();

    cout << "Area: " << rect.getArea() << endl;
    cout << "Cost: " << rect.getCost(area) << endl;

    return 0;
}
/* 函数综合练习题.cpp */
/*
一圆型游泳池如图所示，现在需在其周围建一圆型过道，并在其四周围上栅栏。栅栏价格为35元/米，过道造价为20元/平方米。
过道宽度为3米，游泳池半径由键盘输入。要求编程计算并输出过道和栅栏的造价。

图形描述：大圆嵌套小圆：
小圆在大圆中间，小圆为游泳池，大圆与小圆间隔为过道。
*/
#include <iostream>
#include <cmath>

using namespace std;
const float PI = 3.14159;
const float FencePrice = 35;
const float ConcretePrice = 20;


struct Circle 
{
    public:
        double radius;
        Circle(double r) : radius(r) {
            radius = r;
        }
    double area();
    double circumference();
};

double Circle::area() {
    return PI * radius * radius;
}

double Circle::circumference() {
    return 2 * PI * radius;
}



int main()
{
    
    //  = 2 * π * r
    double a;
    cout << "Enter the radius of the swimming pool: ";
    cin >> a;

    Circle swimming_circle(a);
    Circle fence_circle(a + 3);

    double fence_price  =  fence_circle.circumference() * FencePrice;
    double concrete_price = (fence_circle.area() - swimming_circle.area() ) * ConcretePrice;

    cout << "The fence price is: " << fence_price <<  endl;
    cout << "The concrete price is: " << concrete_price << endl;    
    return 0;
}
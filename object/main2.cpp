#include <iostream>

using namespace std;

class Line
{
    public:
        void setLength(double len);
        double getLength();
        Line(); // 构造函数
        ~Line(); // 析构函数

    private:
        double length;
};

Line::Line()
{
    cout << "Object is being created " << endl;
}

Line::~Line()
{
    cout << "Object is being destroyed " << endl;
}

void Line::setLength(double len){
    length = len;
}

double Line::getLength(void)
{
    return length;
}

int main()
{
    Line line;

    line.setLength(6.0);
    cout << "Length of the line is " << line.getLength() << endl;

    return 0;
}
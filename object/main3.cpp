#include <iostream>

using namespace std;

class Line
{
    public:
        int getLength(void);
        Line(int len);
        Line(const Line& obj); // 拷贝函数
        ~Line(); // 析构函数
    private:
        int *ptr;
};

Line::Line(int len)
{
    cout << "Constructor is being called " << endl;
    ptr = new int;
    *ptr = len;
};

Line::Line(const Line& obj)
{
    cout << "Copy constructor is being called " << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
};

Line::~Line(void)
{
    cout << "Destructor is being called " << endl;
    delete ptr;
};


int Line::getLength(void)
{
    return *ptr;
};

void display(Line obj)
{
    cout << "Length of the line is " << obj.getLength() << endl;
}

int main()
{
    Line line1(10);

    Line line2 = line1; // 拷贝对象

    display(line1);
    display(line2);

    return 0;
}
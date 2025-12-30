
#include <iostream>

using namespace std;

class Point {
    protected:
        int x, y;
    public:
        Point(int a, int b) {
            x = a;
            y = b;
            cout << "Point created with coordinates (" << x << ", " << y << ")" << endl;
        }
};

class Line: public Point {
    protected:
        int len;
    public:
        Line(int a, int b, int c) : Point(a, b) {
            len = c;
            cout << "Line created with length " << len << endl;
        }
};

int main() {
    Line L1(1,2,3);
}
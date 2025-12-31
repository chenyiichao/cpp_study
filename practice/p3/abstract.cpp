
#include <iostream>

using namespace std;

class Firgure {
protected:
    double x, y;
public:
    void set(double i, double j){
        x = i;
        y = j;
    }
    virtual void area() = 0;
};

class Triangle : public Firgure {
public: 
    void area() {
        cout << "Triangle area: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Firgure {
public:
    void area() {
        cout << "Rectangle area: " << x * y << endl;
    }
};

int main() {
    Firgure *f = NULL;
    // Firgure f1;
    Triangle t;
    Rectangle r;

    t.set(10,20);
    f = &t;
    f -> area();

    r.set(10,20);
    f = &r;
    f -> area();
    
    Firgure &f2 = t;
    f2.set(20,20);
    f2.area();
     
    return 0;
}
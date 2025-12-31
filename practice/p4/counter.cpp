#include <iostream>
using namespace std;

class Counter {
private:
    int n;
public:
    Counter(int nn = 0):n(nn){};
    Counter& operator++(int);
    Counter& operator++();
    friend Counter& operator--(Counter& c);
    friend Counter& operator--(Counter& c , int n);
    void display() {
        cout << "value : " << this -> n << endl; 
    }
};

Counter& Counter::operator++(){
    n++;
    return *this;
}

Counter& Counter::operator++(int){
    Counter& t = *this;
    ++n;
    return t;
}

Counter& operator--(Counter& c){
    --c.n ;
    return c;
}

Counter& operator--(Counter& c,int){
    Counter& t = c;
    c.n--;
    return t;
}

int main() {
    Counter a;
    ++a;
    a.display();
    a++;
    a.display();
    --a;
    a.display();
    a--;
    a.display();
    
    return 0;
}
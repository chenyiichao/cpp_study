#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    void setValue(int value){
        this->value = value;
    }

    void printValue(){
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyClass obj;
    obj.setValue(42);
    obj.printValue();
    return 0;
}

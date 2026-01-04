#include <iostream>
#include <cstring>

using namespace std;

class Apple {
public:
    int i;
    Apple() {
        i = 0;
        cout << "Inside Contructor\n" ;
    }
    ~Apple() {
        cout << "Inside Destructor\n";
    }
};

int main() {
     int x = 0;
     if(x == 0) {
        Apple obj;
     }
     cout << "End of main" << endl;
}
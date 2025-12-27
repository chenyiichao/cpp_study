#include <iostream>
using namespace std;

namespace first_space {
    void func(){
        cout << "Hello from first_space" << endl;
    }
}

namespace second_space {
    void func(){
        cout << "Hello from second_space" << endl;
    }
}

using namespace second_space;

int main(){
    func();
    
    return 0;
}
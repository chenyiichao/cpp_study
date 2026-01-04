#include <iostream>
#include <cstring>

using namespace std;

#define MAX(a,b) ((a) > (b) ? (a) \
//  : (b))

 #define fun() {f1();f2();} 

int main() {
    int max_val = MAX(3, 6);    

    cout << max_val << endl;

}

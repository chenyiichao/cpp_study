/* 枚举类型.cpp */
#include <iostream>
using namespace std;

enum weekday { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
    weekday today = TUE;
    for (weekday i = today; i <= SAT; i = (weekday)(i + 1))
    {
        cout << i << " ";
    }
    
   
}
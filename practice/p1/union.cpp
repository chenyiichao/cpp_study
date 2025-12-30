
#include<iostream>
using namespace std;

union u {
    struct s{
        int a;
        int b;
        int c;
        int d;
    }s1;
    int k;
}u1;

int main() 
{
    u1.s1.a = 10;
    u1.s1.b = 20;
    u1.s1.c = 30;
    u1.s1.d = 40;
    u1.k = 50;

    cout<<"a = " << u1.s1.a <<endl;
    cout<<"b = " << u1.s1.b << endl;
    cout<<"c = " << u1.s1.c << endl;
    cout<<"d = " << u1.s1.d << endl;
    cout<<"k = " << u1.k << endl;   
    return 0;
}
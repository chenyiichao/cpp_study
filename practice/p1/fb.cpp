
#include <iostream>
using namespace std;

int f(int n);
int f1(int n); 

int main() 
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    cout << "f(" << n << ") = " << f(n) << endl;
    cout << "f1(" << n << ") = " << f1(n) << endl;

    return 0;
}

int f(int n) 
{
    if (n == 1) {
        return 1;
    }
    if( n == 2) {
        return 1;
    }
    return f(n-1) + f(n-2);
}

int f1(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * f1(n - 1);
  }
}
/* x的n次方.cpp */
#include <iostream>
using namespace std;
double power(double x, int n);

int main()
{
    cout << "Enter a number: " << endl;
    int n;
    cin >> n;

    double x = 2;
    double result = power(x, n);

    cout << "The result is: " << result << endl;

    return 0;
}

double power(double x, int n) 
{   
    double val = 1.0;
    while ( n --) {
        val *= x;
    }
    return val;
}
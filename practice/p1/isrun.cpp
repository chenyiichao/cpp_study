 
#include <iostream>

using namespace std;

int main() 
{
    cout << "entry a year:" << endl;
    int year;
    cin >> year;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        cout << "this year is run year" << endl;
    } else {
        cout << "this year is not run year" << endl;
    }
}
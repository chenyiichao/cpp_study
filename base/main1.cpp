#include <iostream>

using namespace std;

int main(){
    int a, b, max;
    cout << "The program gets two numbers and prints the greater one.\n";
    cout << "The first number:";
    cin >> a;
    cout << "The second number:";
    cin >> b;
    max = a > b ? a: b;
    cout << "The greater one is " << max << endl;
    return 0;

}
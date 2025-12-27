#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "The program gets some integers,and output their sum";
    cout << "To stop.please input 0.\n";
    cin >> n;
    while(n != 0){
        sum += n;
        cout << "The next integer:";
        cin >> n;
    }
    cout << "The sum is" << sum << "." << endl;
    return 0;
}
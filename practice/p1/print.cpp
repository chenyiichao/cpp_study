
#include <iostream>
using namespace std;

int main() 
{
    int i ,j ,k ,l;
    for(i = 2; i <= 8;i += 2) {
        for(j = 8 - i;j > 0; j --) 
        {
            cout << " ";
        }
        for (j = i; j > 0; j --)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    for ( i = 5; i >= 1; i -= 2)
    {
        for (j = i; j > 0; j --)
        {
            cout << "*" ;
        }
        for(j = 8 - i;j > 0; j --) 
        {
            cout << " ";
        }
        cout << endl;
    }
    
    
    
}
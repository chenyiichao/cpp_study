#include <iostream>

using namespace std;

double vals[] = {1.2, 3.4, 5.6, 7.8, 9.0};

double& setValues(int i){
    double& ref = vals[i];
    return ref; 
}

int main()
{
    cout << "Before calling setValues(1): " << vals[1] << endl;
    setValues(1) = 2.3;
    cout << "After calling setValues(1): " << vals[1] << endl;
    cout << "Before calling setValues(3): " << vals[3] << endl;
    setValues(3) = 4.5;
    cout << "After calling setValues(3): " << vals[3] << endl;
 
    for (int i = 0; i < 5 ; i++)
    {
        cout << "setValues(" << i << ")：" << setValues(i) << endl;
    }
    
    return 0;
}
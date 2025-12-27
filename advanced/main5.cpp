#include <iostream>

using namespace std;

class Box 
{
    public:
        Box(){
            cout << "Constructor called" << endl;
        }
        ~Box(){
            cout << "Destructor called" << endl;
        }
};

int main()
{
    double* pvalue = NULL;
    pvalue = new double;

    *pvalue = 29293.99;
    cout << "The value is: " << *pvalue << endl;

    delete pvalue;

    Box* myBoxArray = new Box[5];
    delete[] myBoxArray;
    

    return 0;
}
// Eg10-5.cpp
#include <iostream>
using namespace std;

void ErrHandler(int n) {
    try{
        if(n == 1)
            throw n;
        cout << "all is ok .." << endl;
    } catch(int n) {
        cout << "catch an integer..." << endl;
        throw n;
    }
}

int main() {
    try{
        ErrHandler(1);
    } catch(int n) {
        cout << "main catch an integer..." << endl;
    }
    cout << ".... end ...." << endl;
    return 0;
}
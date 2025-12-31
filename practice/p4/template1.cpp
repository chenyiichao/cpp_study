/* 类模板特化.cpp */
//设计一通用数组类，它能够直接存取数组元素，并能够对数组进行从大到小的排序。

#include <cstring>
#include <iostream>
using namespace std;

const int Size = 5;
template <class T> class Array {
private:
    T ts[Size];

public:
    Array(){
        for (int i = 0; i < Size; i++)
        {
            ts[i] = 0;
        }
    }
    T& operator[](int i);
    void Sort();
    void display();
};

template <class T> T& Array<T>::operator[](int i) {
    if(i < 0 || i > Size) {
        throw out_of_range("index out of range");
    }
    return ts[i];
}
template <class T> void Array<T>::Sort() {
    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = i; j < Size; j++)
        {
            if(ts[i] < ts[j]){
                T tmp = ts[i];
                ts[i] = ts[j];
                ts[j] = tmp;
            }
        }
    }
} 

template <class T> void Array<T>::display(){
    for (int i = 0; i < Size; i++)
    {
        cout << ts[i] << "\t" ;
    }
    cout << endl;
}

int main() {
    Array<int> arr;
    arr.display();
    arr[0] = 9;
    arr[1] = 1;
    arr[2] = 10;
    arr[4] = 5;
    arr.display();
    arr.Sort();
    arr.display();
}
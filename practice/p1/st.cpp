
#include<iostream>

using namespace std;

struct Student 
{
    int num;
    unsigned int age;
    char name[20];
};

int main()
{
    Student s1 = {10 , 20, "John"};

    cout << "Number: " << sizeof(s1.num) << endl;
    cout << "Age: " << sizeof(s1.age) << endl;
    cout << "Name: " << sizeof(s1.name) << endl;

    return 0;
}
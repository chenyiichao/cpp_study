// Eg12-12.cpp
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;
class Employee {
private:
    int number, age;
    string name;
    double sal;
public:
    Employee() {}
    Employee(int num, char* Name, int Age, double Salary) {
        number = num;
        name = Name;
        age = Age;
        sal = Salary;
    }
    void display() {
        cout << number << "\t" << name << "\t" << age << "\t" << sal << endl;
    }
};

int main() {
    ofstream out("./b.dat", ios::out);
    Employee e1(1, "张三", 23, 2320);
    Employee e2(2, "李四", 32, 3210);
    Employee e3(3, "王五", 34, 2220);
    Employee e4(4, "刘六", 27, 1220);

    // cout << "char of e1 :" << ((void *)&e1) << "sizeof(e1) : " << sizeof(e1) << endl;
    // cout << "char of e2 :" << ((char *)&e2) << "sizeof(e2) : " << sizeof(e2) << endl;
    out << &e1 << endl;
    out << &e2 << endl;
    out << &e3 << endl;
    out << &e4 << endl;

    // out.write((char *)&e1, sizeof(e1));
    // out.write((char *)&e2, 2*sizeof(e2));
    // out.write((char *)&e3, 3*sizeof(e3));
    // out.write((char *)&e4, 4*sizeof(e4));

    Employee e5(3, "王五", 40, 2220);
    out.seekp(2 * sizeof(e1));
    out.write((char *)&e5, sizeof(e5));
    
    out.close();

}
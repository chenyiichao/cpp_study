
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    Employee(string name,string id);
    string getName();
    string getId();
    float getSalary();
    virtual void print();
private:
    string Name;
    string Id;
};

Employee::Employee(string name,string id) {
    this->Name = name;
    this->Id = id;
}
string Employee::getName() {
    return Name;
}
string Employee::getId() {
    return Id;
}
float Employee::getSalary() {
    return 0.0;
}
void Employee::print() {
    cout << "Name: " << Name << "\t";
    cout << "Id: " << Id << endl;
}

class Manager : public Employee {
public:
    Manager(string name,string id,float salary): Employee(name,id) {
    this->weeklySalary = salary;        
    }
    void setSalary(float salary) {
    weeklySalary = salary;
    }
    float getSalary() {
    return weeklySalary;
    }
    void print() {
    cout << "Manager: " << getName() << "\t";
    cout << "Id: " << getId() << "\t";
    cout << "Salary: " << weeklySalary << endl; 
    }

private:
     float weeklySalary;
};

int main() {
    Employee e("John","1234"), *pM;
    Manager m("Mary","5678",50000), *ptr;
    ptr = &m;
    ptr->setSalary(60000);
    
    m.print();
    pM = &m;
    pM->print();
    Employee &rM = m;
    rM.print();

    return 0;
}


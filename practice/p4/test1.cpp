/* [] 运算符重载 */
#include <iostream>
#include <cstring>
using namespace std;

struct Person {
    double salary;
    char* name;
};

class SalaryManager {
    Person* person;
    int n;
    int max;

public:
    SalaryManager(int Max) {
        this->max = Max;
        n = 0;
        person = new Person[max];
    }
    double &operator[](char* Name){
        Person* tmp = person;
        for (int i = 0; i < n; i++)
        {   
            if(strcmp(tmp->name, Name) == 0){
                return tmp->salary;
            }
            tmp ++;
        }
        tmp = person + n++;
        tmp->name = new char[strlen(Name) + 1];
        strcpy(tmp->name, Name);
        tmp->salary = 0;
        return tmp->salary;
    }

    void display(){
        for (int i = 0; i < n; i++)
        {
            cout << person[i].name << "    " << person[i].salary << endl;
        }
        
    }
};

int main() {
    SalaryManager s(3);
    s["张三"] = 2188.88;
    s["里斯"] = 1230.07;
    s["王无"] = 3200.97;
    cout << "张三\t" << s["张三"] << endl;
    cout << "里斯\t" << s["里斯"] << endl;
    cout << "王无\t" << s["王无"] << endl;

    cout << "-------下为display的输出--------\n\n";
    s.display();
}
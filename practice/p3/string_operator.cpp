//设计一个字符串类String，通过运算符重载实现字符串的输入、输出以及+=、==、!=、<、>、>=、[]
//]等运算。
#include <iostream>
#include <cstring>
using namespace std;

class String {
    int length;
    char* sPtr;
private:
    void setString(char*);
    friend ostream &operator<<(ostream &os, String &s) {
        os << "value: " ;
        return os << s.sPtr;   
    }
    friend istream &operator>>(istream &is, String &s) {
        return is >> s.sPtr;
    }
public:
    String(const char * ch = "") {
        this->length = strlen(ch);
        strcpy(this->sPtr , ch);
    }
    String& operator=(String& s) {
        length = s.length;
        strcpy(this->sPtr, s.sPtr);
        return *this;
    }
    String operator+=(String &s);
    // bool operator==(String &s);
    // bool operator!=(String &s);
    // bool operator<(String &s);
    // bool operator>(String &s);
    // bool operator>=(String &s);
    // char& operator[](int);
    ~String(){};
};

String String::operator+=(String &s) {
    strcat(this->sPtr, s.sPtr);
    length = strlen(this->sPtr) + strlen(s.sPtr);
    return *this;
}   

int main() 
{
    String str("666"); 
    String str1("8888");
    str += str1;
    cout << str << endl;
}
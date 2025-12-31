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
        return os << "value: " << s.sPtr;
    }
    friend istream &operator>>(istream &is, String &s) {
        return is >> s.sPtr;
    }
public:
    String(const char * ch = "") {
        this->sPtr = new char(strlen(ch) + 1);
        strcpy(this->sPtr, ch);
        length = strlen(ch);
    }
    String& operator=(String& s) {
        length = s.length;
        strcpy(this->sPtr, s.sPtr);
        return *this;
    }
    String& operator+=(const String &s);
    bool operator==(String &s);
    bool operator!=(String &s);
    bool operator>(String &s);
    bool operator<(String &s);
    bool operator!();
    bool operator>=(String &s);
    char& operator[](int);
    ~String();
};

String& String::operator+=(const String &s) {
    length +=  s.length;
    char* tmp = this->sPtr;
    this->sPtr = new char[length + 1];
    strcpy(this->sPtr, tmp);
    strcat(this->sPtr, s.sPtr);
    delete[] tmp;
    return *this;
}   
bool String::operator==(String &s){
    return strcmp(this->sPtr, s.sPtr) == 0;
}
bool String::operator!=(String &s){
    return !(*this == s);
}
bool String::operator>(String &s){
    return strcmp(this->sPtr, s.sPtr) > 0;
}
bool String::operator<(String &s){
    return s > *this;
}
bool String::operator!(){
    return this->length ==0;
}
bool String::operator>=(String &s){
    return !(*this < s);
}
char& String::operator[](int n) {
    if(n < 0 || n > length) {
        throw std::out_of_range("index out of range");
    }
    return sPtr[n];
} 
String::~String(){
    delete[] sPtr;
}


int main() 
{   
    String s1("happy"), s2("new year"), s3;
  cout << "s1 is " << s1 << "\ns2 is " << s2 << "\ns3 is " << s3
       << "\n比较s2和s1:"
       << "\ns2 ==s1结果是 " << (s2 == s1 ? "true" : "false")
       << "\ns2 != s1结果是 " << (s2 != s1 ? "true" : "false")
       << "\ns2 >  s1结果是 " << (s2 > s1 ? "true" : "false")
       << "\ns2 <  s1结果是 " << (s2 < s1 ? "true" : "false")
       << "\ns2 >= s1结果是 " << (s2 >= s1 ? "true" : "false");
  cout << "\n\n测试s3是否为空: ";
  if (!s3) {
    cout << "s3是空串" << endl; // L3
    cout << "把s1赋给s3的结果是：";
    s3 = s1;
    cout << "s3=" << s3 << "\n"; // L5
  }
  cout << "s1 += s2 的结果是：s1="; // L6
  s1 += s2;
  cout << s1; // L7

  cout << "\ns1 +=  to you 的结果是："; // L8
  s1 += " to you";
  cout << "s1 = " << s1 << endl; // L9
  s1[0] = 'H';
  s1[6] = 'N';
  s1[10] = 'Y';
  cout << "s1 = " << s1 << "\n"; // L10
  
  return 0;
}
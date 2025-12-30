/* 重载++的时钟.cpp */
/*
设计一个时钟类，能够记录时、分、秒，重载它的++运算符，每执行一次++运算，加时1秒，但要使计时过程能够自动进位。
*/

#include <iostream>

using namespace std;

class Time 
{
    private:
        int hour;
        int minute;
        int second;

    public:
        Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    Time operator++() ;
    Time operator++(int n) ;
    void showTime() {
        cout << hour << ":" << minute << ":" << second << endl;
    } 
};
 

Time Time::operator++(int n) 
{
    Time tmp = *this;
    ++(*this);
    return tmp;
}

Time Time::operator++() 
{
    second++;
    if(second == 60){
        second = 0;
        minute++;
        if(minute == 60){
            minute = 0;
            hour++;
            if(hour == 24){
                hour = 0;
            }
        }
    }
    return *this;
}

int main() 
{
    Time t(1, 59, 59);
    ++t;
    t++.showTime();
     
}
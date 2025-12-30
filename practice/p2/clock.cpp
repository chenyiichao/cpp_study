
#include <iostream>
#include "clock.h"

using namespace std;

Clock::Clock(int hour, int minute, int second) {
    this -> hour = hour;
    this -> minute = minute;
    this -> second = second;
}

Clock::Clock(Clock &clock) {
    this->hour = clock.hour;
    this->minute = clock.minute;
    this->second = clock.second;
}

void Clock::setTime(int hour, int minute, int second) {
    this -> hour = hour;
    this -> minute = minute;
    this -> second = second;
}

Clock::~Clock() {
    cout << "Clock object is destroyed" << endl;
}

void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

int main() {
    Clock c(0,0,0);

    c.setTime(12,30,45);
    c.showTime(); // 12:30:45

    Clock c1(c);
    c1.showTime(); // 12:30:45
    c1.setTime(4,5,6);
    c1.showTime();  // 4:5:6
    c.showTime();  // 12:30:45

    return 0;
}



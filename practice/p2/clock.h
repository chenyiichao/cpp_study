#ifndef CLOCK
#define CLOCK

class Clock {
public:
    Clock(int h, int m, int s);

    Clock(Clock &other);

    void setTime(int h, int m, int s);
    void showTime();
    ~Clock();
private:
    int hour;
    int minute;
    int second;
};

#endif

#include <iostream>
#include <iomanip>

using namespace std;

typedef enum {SUN, MON, TUE, WED, THU, FRI, SAT} WEEKDAY;

int main()
{
    int date;
    const WEEKDAY date_1 = MON;
    WEEKDAY weekday;
    cout << "The program gets a date(1~31)";
    cout << "and print a calendar of 2025-12(just the date).\n";
    cout << "The date:";
    cin >> date;
    if(date < 1 || date > 31)
    {
        cout << "Date error!";
        return 1;
    }
    weekday = (WEEKDAY)((date + (int)date_1 - 1) % 7);
    cout << "Su Mo Tu We Th Fr Sa\n";
    cout << "--------------------\n";
    if(weekday == SUN) cout << setw(2) << date;
    else if(weekday == MON) cout << setw(6) << date;
    else if(weekday == TUE) cout << setw(10) << date;
    else if(weekday == THU) cout << setw(14) << date;
    else if(weekday == FRI) cout << setw(18) << date;
    else 
    cout << endl << "-----------------------\n";
    return 0;

}


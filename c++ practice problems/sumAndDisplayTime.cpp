#include <iostream>
using namespace std;

class Time
{
    int Hours;
    int Minutes;

public:
    void setTime(int hours, int minutes)
    {
        Hours = hours;
        Minutes = minutes;
    }
    void getTime()
    {
        cout << Hours << " Hours and " << Minutes << " minutes " << endl;
    }
    void sumTime(Time, Time);
};

void Time :: sumTime(Time t1, Time t2)
{
    Minutes = t1.Minutes + t2.Minutes;
    Hours = Minutes / 60;
    Minutes = Minutes % 60;
    Hours += t1.Hours + t2.Hours;
}

int main()
{
    Time T1, T2, T3;
    T1.setTime(5, 46);
    T2.setTime(2, 30);
    T3.sumTime(T1, T2);
    T1.getTime();
    T2.getTime();
    T3.getTime();



    return 0;
}
#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;
    public:
    void setTime(int hour, int min)
    {
        hours = hour;
        minutes = min;
    }

    void display()
    {
        cout << hours << " : " << minutes << endl;
    }

    Time sumTime(Time, Time);
};

Time Time ::sumTime(Time t1, Time t2)
{
    Time t;
    // t.minutes = t1.minutes + t2.minutes;
    // if( t.minutes >= 60)
    // {
    //     t.hours = t.minutes / 60;
    //     t.minutes = t.minutes % 60;
    //     t.hours += t1.hours + t2.hours;
    // }
    // else
    // {
    //     t.hours = t1.hours + t2.hours;
    // }

    t.minutes = t1.minutes + t2.minutes;
    t.hours = t.minutes / 60;
    t.minutes = t.minutes % 60;
    t.hours += t1.hours + t2.hours;

    return t;

}

int main()
{
    Time t1, t2, t3;
    t1.setTime(3, 4);
    t2.setTime(2, 25);
    t3 = t3.sumTime(t1, t2);
    t3.display();

    return 0;
}
#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;
    public:
    void setData(int ft, float in)
    {
        feet = ft;
        inches = in;
    }

    void display()
    {
        cout << feet << " feet and " << inches << " inches \n";
    }

    Distance add(Distance);
    Distance subtract(Distance);

};

Distance Distance ::add(Distance d2)
{
    Distance d;
    d.inches = this->inches + d2.inches;
    d.feet = this->feet + d2.feet;
    if( d.inches >= 12.0)
    {
        d.inches -= 12.0;
        d.feet ++;
    }
    
    return d;
}

Distance Distance ::subtract(Distance other)
{
    Distance d;
    d.inches = this->inches - other.inches;
    d.feet = this->feet - other.feet;

    if(d.inches < 0)
    {
        d.inches += 12.0;
        d.feet --;
    }

    return d;
}

int main()
{
    Distance d1, d2, d3;
    d1.setData(5, 2);
    d2.setData(5, 7);
    d3 = d1.add(d2);
    d3.display();
    d3 = d1.subtract(d2);
    d3.display();
    d3 = d2.subtract(d1);
    d3.display();
}
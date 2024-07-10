#include <iostream>
using namespace std;

class Distance
{
private:
    int Feet;
    float Inches;

public:
    void setDistance(int ft, float in)
    {
        Feet = ft;
        Inches = in;
    }
    Distance add(const Distance &);
    Distance subtract(const Distance &);
    void display();
};

Distance Distance ::add(const Distance &D)
{
    Distance temp;
    temp.Inches = this->Inches + D.Inches;
    temp.Feet = 0;
    while (temp.Inches >= 12.0)
    {
        temp.Feet++;
        temp.Inches -= 12.0;
    }

    temp.Feet += Feet + D.Feet;

    return temp;
}

Distance Distance ::subtract(const Distance &D2)
{
    Distance temp;
    
    if (D2.Inches > this->Inches)
    {
        temp.Feet = this->Feet - D2.Feet;
        temp.Inches = (12 + this->Inches) - D2.Inches;
        temp.Feet = temp.Feet - 1;
    }
    else
    {
        temp.Feet = this->Feet - D2.Feet;
        temp.Inches = this->Inches - D2.Inches;
    }
     return temp;
}

void Distance ::display()
{
    cout << Feet << "feet and " << Inches << " inches" << endl;
}

int main()
{
    Distance d1, d2, d3, d4;
    d1.setDistance(5, 2.0);
    d2.setDistance(0, 7.0);
    d3 = d1.add(d2);
    d4 = d1.subtract(d2);

    d1.display();
    d2.display();
    d3.display();
    d4.display();

    return 0;
}
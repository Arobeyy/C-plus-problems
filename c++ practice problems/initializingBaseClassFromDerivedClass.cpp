#include <iostream>
using namespace std;

class Base
{
    int X;

public:
    Base()
    {
        cout << "default constructor of base class" << endl;
    }
    Base(int x) : X(x)
    {
        cout << "parameterize constructor of base class" << endl;
    }
};

class Derived : public Base
{
    int Y;

public:
    Derived()
    {
        cout << "Default constructor of derived class" << endl;
    }
    Derived(int x, int y) : Base(x), Y(y)
    {
        cout << "parameterized constructor of derived class" << endl;
    }
};

int main()
{
    Derived d1(10, 15);
    Derived d2;

    return 0;
}
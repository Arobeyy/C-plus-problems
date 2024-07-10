#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "base" << endl;
    }
};

class Derived : public Base
{
public:
    virtual void fun() override
    {
        cout << "derived" << endl;
    }
};

int main()
{
    Base* b = new Derived();
    b->fun();

    return 0;
}
#include <iostream>

using namespace std;

class Base
{
public:
    void display()
    {
        cout << "base class." << endl;
    }

    virtual void show()
    {
        cout << "Hello! from the base class." << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "derived class." << endl;
    }

    void show() override
    {
        cout << "Hello! from the derived class." << endl;
    }

};

int main()
{
    Base *d = new Derived();
    d->display();
    d->show();

    Base b;
    Base *bptr = &b;
    b.display();
    b.show();

    return 0;
}
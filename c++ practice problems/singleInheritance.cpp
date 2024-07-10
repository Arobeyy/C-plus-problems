#include <iostream>
using namespace std;

class Base
{
private:
    int A;

public:
    int B;
    void setAB(int a, int b);
    int getA();
    void displayA();
};

class Derived : public Base
{
private:
    int C;

public:
    void multiply();
    void display();
};

void Base :: setAB(int a, int b)
{
    A = a;
    B = b;
}

int Base :: getA()
{
    return A;
}


void Derived ::multiply()
{
    C = B * getA();
}

void Derived :: display()
{
    cout << "A = " << getA() << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
}

int main()
{
    Derived d;
    d.setAB(5, 10);
    d.multiply();
    d.display();

    d.B = 20;
    d.multiply();
    d.display();

    return 0;

}
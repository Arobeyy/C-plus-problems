#include <iostream>
using namespace std;

class Base
{
    int a;

public:
    int b;
    void setAB()
    {
        cout << "Enter values for a and b: ";
        cin >> a >> b;
    }

    int getA()
    {
        return a;
    }

    void displayA()
    {
        cout << "a = " << a << endl;
    }
};

class Derived : private Base
{
    int c;

public:
    int multiply()
    {
        setAB();
        c = b * getA();
        return c;
    }

    void display()
    {
        displayA();
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }

};

int main()
{
    Derived d;
    
    //d.setAB(); // WON'T WORK
    d.multiply();
    //d.displayA() // WON'T WORK
    d.display();
    // d.b = 20;  //WON'T WORK; b has become private
    d.multiply();
    d.display();

    return 0;
}
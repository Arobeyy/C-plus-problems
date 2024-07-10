#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "class A\n";
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "Class B\n";
    }
};

int main()
{
    B b;            // derived class object
    b.display();    // invoke display() in B
    b.A::display(); // invoke display() in A
    b.B::display(); // invokes display() in B

    return 0;
}
#include <iostream>
using namespace std;

class M
{
    public:
    void display()
    {
        cout << "class M\n";
    }
};

class N
{
    public:
    void display()
    {
        cout << "Class N\n";
    }
};

class Derived : public M, public N
{
    public:
    void display()
    {
        M :: display();
    }
};

int main()
{
    Derived d;
    d.display();

    return 0;
}
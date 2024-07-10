#include <iostream>
using namespace std;

class Base1
{
protected:
    int x;

public:
    Base1(int a = 0) : x(a) {}

    int getX()
    {
        return x;
    }
};

class Base2
{
protected:
    int y;

public:
    Base2(int b = 0) : y(b) {}

    int getY()
    {
        return y;
    }
};

class Derived : public Base1, public Base2
{
private:
    int z;
    int total;

public:
    Derived(int a = 0, int b = 0, int c = 0) : z(c), Base1(a), Base2(b) {}
    
    int getZ()
    {
        return z;
    }

    int sum()
    {
       total = x + y + z;
       return total;
    }

};

int main()
{
    Derived d(5, 10, 15);
    cout << "X = " << d.getX() << endl;
    cout << "Y = " << d.getY() << endl;
    cout << "Z = " << d.getZ() << endl;
    cout << "Total = " << d.sum() << endl;

    return 0;
}

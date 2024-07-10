#include <iostream>
using namespace std;

class B;

class A
{
    int x;

public:
    void setData(int a)
    {
        x = a;
    }

    void display()
    {
        cout << "value of x is: " << x << endl;
    }

    friend void swap(A &, B &);
};

class B
{
    int y;

public:
    void setData(int b)
    {
        y = b;
    }

    void display()
    {
        cout << "value of y is: " << y << endl;
    }

    friend void swap(A &, B &);
};

void swap(A &c, B &d)
{
    int temp;
    temp = c.x;
    c.x = d.y;
    d.y = temp;
}

int main()
{
    A n;
    B m;
    n.setData(30);
    n.display();
    m.setData(25);
    m.display();
    swap(n, m);
    n.display();
    m.display();
}
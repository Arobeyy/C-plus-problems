#include <iostream>
using namespace std;

class B;
class A
{
    int x;

public:
    void assign(int t)
    {
        x = t;
    }
    void display()
    {
        cout << "Value of x is : " << x << endl;
    }

    friend void swap(A &, B &);
};

class B
{
    int y;

public:
    void assign(int w)
    {
        y = w;
    }

    void display()
    {
        cout << "Value of y is : " << y << endl;
    }

    friend void swap(A &, B &);
};

void swap(A& c, B& d)
{
    int temp;
    temp = c.x,
    c.x = d.y;
    d.y = temp;
}

int main()
{
    A n;
    B m;
    int a, b;
    cout << "Enter x: ";
    cin >> a;
    cout << "Enter y: ";
    cin >> b;

    n.assign(a);
    m.assign(b);
    n.display();
    m.display();
    swap(n, m);
    n.display();
    m.display();

    return 0;
}
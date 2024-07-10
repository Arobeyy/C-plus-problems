#include <iostream>
using namespace std;

class MyClass
{
    int x;
    int y;

public:
    MyClass(int a = 0, int b = 0) : x(a), y(b) {}

    friend MyClass operator+(int, MyClass &);

    void display()
    {
        cout << "x = " << x << " y  = " << y << endl;
    }
};

MyClass operator+(int i, MyClass &obj)
{
    MyClass temp;
    temp.x = i + obj.x;
    temp.y = i + obj.y;

    return temp;
}

int main()
{
    MyClass obj1(25, 30);
    obj1 = 10 + obj1;
    obj1.display();

    return 0;
}
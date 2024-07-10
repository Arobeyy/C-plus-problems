#include <iostream>
using namespace std;

class ABC;  //forward declaration of class ABC

class XYZ
{
    int x;
    public:
    void setValue(int a)
    {
        x = a;
    }

    friend void Max(XYZ, ABC);  //friend function
};

class ABC
{
    int y;
    public:
    void setValue(int b)
    {
        y = b;
    }

    friend void Max(XYZ, ABC);
};

void Max(XYZ a, ABC b)
{
    if(a.x > b.y)
        cout << "Max is " << a.x << endl;
    else
        cout << "Max is " << b.y << endl;
}

int main()
{
    XYZ xyz;
    xyz.setValue(30);
    
    ABC abc;
    abc.setValue(25);

    Max(xyz, abc);

    return 0;
}
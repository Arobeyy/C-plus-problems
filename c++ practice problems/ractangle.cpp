#include <iostream>
using namespace std;

class Ractangle
{
    int width;
    int height;

public:
    void setDimension (int len, int wid)
    {
        height = len;
        width = wid;
    }

    int area()
    {
        return height* width;
    }

    void display()
    {
        cout << "height = " << height << endl;
        cout << "width = " << width << endl;
    }
};

int main()
{
    Ractangle r1;
    r1.setDimension(10, 5);
    r1.display();
    cout << "area = " << r1.area() << endl;

    return 0;
}
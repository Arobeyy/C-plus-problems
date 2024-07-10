#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    Rectangle(int len = 0, int wid = 0) : length(len), width(wid) {}

    int Area()
    {
        int area = length * width;
        return area;
    }
};

int main()
{
    Rectangle r1(4, 5);
    Rectangle r2(5, 8);
    cout << "Area: " << r1.Area() << endl;
    cout << "Area: " << r2.Area() << endl;

    return 0;
}
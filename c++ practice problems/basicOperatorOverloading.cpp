#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    Point(int x = 0, int y = 0):x(x), y(y) {}
    Point operator + (const Point& rhs)
    {
        Point p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }
    
    Point operator - (const Point& rhs)
    {
        Point p;
        p.x = x - rhs.x;
        p.y = y - rhs.y;
        return p;
    }

    Point add(const Point& rhs)
    {
        Point p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }

    void print()
    {
        cout << "x: " << x << " y: " << y << endl;
    }

};

int main()
{
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2;
    Point p4 = p3 - p1;
    Point p5 = p4.add(p1);
    p3.print();
    p4.print();
    p5.print();

    return 0;
}
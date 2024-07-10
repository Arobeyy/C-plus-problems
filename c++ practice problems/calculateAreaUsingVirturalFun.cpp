#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void calculateArea(){};
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double r = 0.0) : radius(r) {}

    void display()
    {
        cout << "Radius = " << radius << endl;
    }

    void calculateArea() override
    {
        double pi = 3.14159;
        double area = pi * radius * radius;
        cout << "Area of circle = " << area << endl;
    }
};

class Rectangle : public Shape
{
    int length;
    int bredth;

public:
    Rectangle(int len = 0, int bre = 0) : length(len), bredth(bre) {}

    void display()
    {
        cout << "Height = " << length << endl;
        cout << "Width = " << bredth << endl;
    }

    void calculateArea() override
    {
        int area = length * bredth;
        cout << "Area of ractangle = " << area << endl;
    }
};

int main()
{
    Circle c1(5.0);
    Rectangle r1(10, 5);

    // Shape *s1 = new Circle(7.0);
    // Shape *s2 = new Ractangle(10, 5);

    // c1.display();
    // s1->calculateArea(); // here radius 7.0
    // r1.display();
    // s2->calculateArea();
    //r1.calculateArea();

    // delete s1;
    // delete s2;

    Shape * shapes[] = {&c1, &r1};          //using base typr pointer array 
    for(const auto shape : shapes)
    {
        shape->calculateArea();
    }

    return 0;
}
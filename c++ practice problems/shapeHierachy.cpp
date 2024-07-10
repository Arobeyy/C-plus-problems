#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void calculateArea() {}
};

class Circle : public Shape
{
private:
    int Radius;

public:
    Circle(int radius) : Radius(radius) {}
    void calculateArea() override
    {
        double Pi = 3.1415;
        double area = Pi * (Radius * Radius);
        cout << "Area of circle = " << area << endl;
    }
};

class Rectangle : public Shape
{
private:
    int Length;
    int Width;

public:
    Rectangle (int length , int width) : Length(length), Width(width) {}
    void calculateArea() override
    {
        double area = Length * Width;
        cout << "Area of Rectangle = " << area << endl;
    }
};

class Triangle : public Shape
{
private:
    int Length;
    int Hieght;

public:
    Triangle (int length, int hieght) : Length(length), Hieght(hieght) {}
    void calculateArea() override
    {
        double area = 0.5 * (Length * Hieght) ;
        cout << "Area of circle = " << area << endl;
    }
};

int main()
{
    Shape *s1 = new Circle(4);
    Shape *s2 = new Rectangle(6, 4);
    Shape *s3 = new Triangle( 7, 3);

    s1->calculateArea();
    s2->calculateArea();
    s3->calculateArea();

    return 0;
}
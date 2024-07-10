#include <iostream>
using namespace std;

class Shape
{
protected:
    double X;
    double Y;

public:
    Shape(double x = 0.0, double y = 0.0) : X(x), Y(y) {}

    virtual double calculateArea() const = 0;

    virtual void displayData() const = 0;
};

class Triangle : public Shape
{
public:
    Triangle(double base, double height) : Shape(base, height) {}

    double calculateArea() const override
    {
        return 0.5 * X * Y;
    }

    void displayData() const override
    {
        cout << "Triangle - Base: " << X << ", Height - " << Y << endl;
        cout << "Area: " << this->calculateArea() << endl;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(double length, double width) : Shape(length, width) {}

    double calculateArea() const override
    {
        return X * Y;
    }

    void displayData() const override
    {
        cout << "Rectangle - length: " << X << ", width - " << Y << endl;
        cout << "Area: " << this->calculateArea() << endl;
    }
};

class Circle : public Shape
{
public:
    Circle(double radius) : Shape(radius) {}

    double calculateArea() const override
    {
        double pi = 3.1415;
        return pi * X * X;
    }

    void displayData() const override
    {
        cout << "Circle - radius: " << X << endl;
        cout << "Area: " << this->calculateArea() << endl;
    }
};

int main()
{
    Shape *s1 = new Rectangle(5.0, 10.0);
    s1->displayData();
    delete s1;

    Shape *s2 = new Triangle(3.0, 8.0);
    s2->displayData();
    delete s2;

    Shape *s3 = new Circle(3.0);
    s3->displayData();
    delete s3;

    return 0;
}
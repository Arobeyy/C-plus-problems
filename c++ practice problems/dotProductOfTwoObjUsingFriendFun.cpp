#include <iostream>
using namespace std;

class Vector
{
private:
    double X;
    double Y;

public:
    Vector(int x, int y) : X(x), Y(y) {}

    //declare the friend function
    friend double calculateDotProduct(const Vector& v1, const Vector& v2);

};

//define the friend function
double calculateDotProduct(const Vector& v1, const Vector& v2)
{
    return v1.X * v2.X + v1.Y * v2.Y;
}

int main()
{
    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);

    //calculate dot product using friend function
    double dotProduct = calculateDotProduct(v1, v2);

    cout << "Dot Product: " << dotProduct << endl;

    return 0;
}
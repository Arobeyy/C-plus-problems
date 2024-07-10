#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex &other)
    {
        Complex c;
        c.real = real + other.real;
        c.imag = imag + other.imag;

        return c;
    }

    Complex operator-(const Complex &other)
    {
        Complex c;
        c.real = real - other.real;
        c.imag = imag - other.imag;

        return c;
    }

    Complex operator*(const Complex &other)
    {
        Complex c;
        c.real = (real * other.real) - (imag * other.imag);
        c.imag = (real * other.imag) + (imag * other.real);
        return c;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

class Float
{
    float data;

public:
    Float(float d = 0) : data(d) {}
    Float operator+(const Float &);
    Float operator-(const Float &);
    Float operator*(const Float &);
    Float operator/(const Float &);
    void print();
};

Float Float ::operator+(const Float &f1)
{
    Float temp;
    temp.data = this->data + f1.data;
    return temp;
}

Float Float ::operator-(const Float &f1)
{
    Float temp;
    temp.data = this->data - f1.data;
    return temp;
}

Float Float ::operator*(const Float &f1)
{
    Float temp;
    temp.data = this->data * f1.data;
    return temp;
}

Float Float ::operator/(const Float &f1)
{
    Float temp;
    temp.data = this->data / f1.data;
    return temp;
}

void Float ::print()
{
    cout << data << endl;
}

int main()
{
    Complex c1(3, 4);
    Complex c2(2, 5);

    Complex sum = c1 + c2;

    cout << "Sum: ";
    sum.display();

    Complex difference = c1 - c2;

    cout << "Difference: ";
    difference.display();

    Complex product = c1 * c2;

    cout << "Product: ";
    product.display();

    //----------------------------------------------------------------

    Float f1, f2, f3, f4, f5, f6;
    f1 = Float(2.5);
    f2 = Float(3.1);
    f3 = f1 + f2;
    f4 = f1 - f2;
    f5 = f1 * f2;
    f6 = f1 / f2;
    cout << "f1 = ";
    f1.print();
    cout << "f2 = ";
    f2.print();
    cout << "f1 + f2 = ";
    f3.print();
    cout << "f1 - f2 = ";
    f4.print();
    cout << "f1 * f2 = ";
    f5.print();
    cout << "f1 / f2 = ";
    f6.print();

    return 0;
}

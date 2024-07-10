#include <iostream>
using namespace std;

class Float
{
    float Data;

public:
    Float(float data = 0) : Data(data){};
    Float operator+(const Float &f1);
    Float operator-(const Float &f2);
    Float operator*(const Float &f3);
    Float operator/(const Float &f4);
    void dispaly();
};

Float Float ::operator+(const Float &f1)
{
    Float temp;
    temp.Data = this->Data + f1.Data;
    return temp;
}

Float Float ::operator-(const Float &f2)
{
    Float temp;
    temp.Data = this->Data - f2.Data;
    return temp;
}

Float Float ::operator*(const Float &f3)
{
    Float temp;
    temp.Data = this->Data * f3.Data;
    return temp;
}

Float Float ::operator/(const Float &f4)
{
    Float temp;
    temp.Data = this->Data / f4.Data;
    return temp;
}

void Float ::dispaly()
{
    cout << this->Data << endl;
}

int main()
{
    Float F1(2.5);
    Float F2(3.6);
    Float F3 = F1 + F2;
    Float F4(4.8);
    Float F5(5.0);
    Float F6 = F5 - F4;
    Float F7 = F1 * F2;
    Float F8 = F4 / F5;

    cout << "F1 = ";
    F1.dispaly();
    cout << "F2 = ";
    F2.dispaly();
    cout << "F1 + F2 = ";
    F3.dispaly();
    cout << "F1 * F2 = ";
    F7.dispaly();

    cout << "F4 = ";
    F4.dispaly();
    cout << "F5 = ";
    F5.dispaly();
    cout << "F5 - F4 = ";
    F6.dispaly();
    cout << "F5 / F4 = ";
    F8.dispaly();


    return 0;
}
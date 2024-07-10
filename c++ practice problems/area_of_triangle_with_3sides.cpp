#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
    float s1;
    float s2;
    float s3;

public:
    Triangle(float a = 0, float b = 0, float c = 0) : s1(a), s2(b), s3(c) {}

    void printArea()
    {
        float s = (s1 + s2 + s3) / 2;
        float area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
        cout << "Area : " << area << endl;
    }

    void Perimeter()
    {
        float perimeter = s1 + s2 + s3;
        cout << "Perimeter : " << perimeter << endl;
    }
};

int main()
{
    Triangle t1(3,4,5);
    Triangle t2(5,6,7);
    t1.Perimeter();
    t1.printArea();
    t2.Perimeter();
    t2.printArea();

    return 0;
}
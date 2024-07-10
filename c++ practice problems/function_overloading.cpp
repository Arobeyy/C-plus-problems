#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    cout << sum(3 , 6) << endl;
    cout << sum(3.3 , 6.6) << endl;
    cout << sum(3.33 , 5.6 , 7.8) << endl;

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

float sum(float a, float b, float c)
{
    return a + b + c;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float sum, k;
    sum = 0.0;
    int n;
    cout << "Enter the last num of the series: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        k = pow(1.0 / i, 2);
        sum += k;
    }

    sum = 1 + sum;
    cout << "The sum of the series is " << sum << endl;

    return 0;
}
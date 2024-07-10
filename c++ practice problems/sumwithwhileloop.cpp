#include <iostream>
using namespace std;

int main()
{
    int count = 1, sum = 0, value;
    cout << "Enter the number till which the sum has to be calculated ";
    cin >> value;

    while (count <= value)
    {
        sum += count;
        count++;
    }
    cout << "sum of 1 to " << value << " = " << sum << endl;

    return 0;
}
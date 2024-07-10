#include <iostream>
using namespace std;

int main()
{
    int numbers[50], *ptr;
    int n;
    cout << "Enter the count\n";
    cin >> n;

    cout << "Enter the numbers one by one\n";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    // Assigning the base address of numbers to ptr and
    //initializing the sum to 0
    ptr = numbers;
    int sum = 0;

    //checks for even inputs and sum up them
    for (int i = 0; i < n; i++)
    {
        if (*ptr % 2 == 0)
            sum += *ptr;
        ptr++;
    }

    cout << "\n\nSum of even numbers: " << sum;

    return 0;

}
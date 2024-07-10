#include <iostream>
using namespace std;

int main()
{
    int num[] = {56, 75, 22, 18, 90};
    int *ptr;
    cout << "The array values are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }
    ptr = num;
    cout << "\nValue of ptr : " << *ptr << endl;
    ptr++;
    cout << "\nValue of ptr++ : " << *ptr << endl;
    ptr--;
    cout << "\nValue of ptr-- : " << *ptr << endl;
    ptr += 2;
    cout << "\nValue of ptr += 2 : " << *ptr << endl;
    ptr -= 1;
    cout << "\nValue of ptr -= 1 : " << *ptr << endl;
    ptr += 3;
    cout << "\nValue of ptr += 3 : " << *ptr << endl;
    ptr -= 2;
    cout << "\nValue of ptr -= 2 : " << *ptr << endl;

    return 0;
}
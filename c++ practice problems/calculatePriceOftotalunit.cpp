#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int code1 , code2, unit1, unit2;
    float price1, price2;
    cin >> code1 >> unit1 >> price1;
    cin >> code2 >> unit2 >> price2;

    float total = ((unit1 * price1) + (unit2 * price2));
    cout << fixed << setprecision(2);
    cout << "Value to pay: R$ " << total << endl;

    return 0;
}
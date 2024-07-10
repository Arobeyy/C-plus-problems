#include <iostream>
using namespace std;

bool divideNum(int n)
{
    for(int i = 2; i <= n-2; i = i+2)
    {
        for(int j = i; j <= n-2; j = j+2)
        {
            if(i+j == n)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int num;
    cin >> num;

    cout << (divideNum(num) ? "YES" : "NO") << endl;
    return 0;
}
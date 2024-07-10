#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void noteAndCoins(int whole, double frac)
{
    int notes[6] = {100, 50, 20, 10, 5, 2};
    int noteCounter[6] = {0};

    for(int i = 0; i < 6; i++)
    {
        if (whole >= notes[i])
        {
            noteCounter[i] = whole / notes[i];
            whole = whole % notes[i];
        }
    }

    double coins[6] = {1.00, 0.05, 0.25, 0.10, 0.05, 0.01};
    int coinCounter[6] = {0};

    for(int i = 0; i < 6; i++)
    {
        if (frac >= coins[i])
        {
            coinCounter[i] = frac / coins[i];
            frac = frac % coins[i];
        }
    }
    
}
int main()
{
    double amount;
    cin >> amount;
    int wholePart = floor(amount);
    double fractionPart = amount - floor(amount);
    
    

    return 0;
}
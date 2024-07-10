#include <iostream>
#include <string>
using namespace std;

class City
{
private:
    string Name;

public:
    City(string cityName = "") : Name(cityName) {}

    string getName () const
    {
        return Name;
    }

    void setName(string cityName)
    {
        Name = cityName;
    }
};

int main()
{
    const int maxCities = 10;
    City *cities[maxCities];
    int n = 0;

    cout << "Enter city names (up to " << maxCities << " cities): \n";

    while (n < maxCities)
    {
        string cityName;
        cout << "Enter the name of city " << (n+1) << " (or 'q' to quit): ";
        cin >> cityName;

        if (cityName == "q")
        {
            break;
        }

        cities[n] = new City(cityName);
        n++;
    }

    cout << "\nCities Entered:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "City " << (i + 1) << " : ";
        cout << cities[i]->getName() << endl;
    }

    return 0;
}
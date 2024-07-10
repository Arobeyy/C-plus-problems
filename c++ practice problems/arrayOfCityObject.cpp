#include <iostream>
#include <string>
using namespace std;

class City
{
private:
    string Name;

public:
    City(string cityName = "") : Name(cityName) {}

    string getName()
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
    City cities[maxCities];
    int n = 0;

    for (int i = 0; i < maxCities; i++)
    {
        City city;
        string name;
        cout << "Enter city name (or q to quit): ";
        cin >> name;
        if (name == "q")
        {
            break;
        }
        city.setName(name);
        cities[i] = city;
        n++;
        
    }

    cout << "\nCities Entered: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "City " << (i+1) << " : ";
        cout << cities[i].getName() << endl;
    }

    return 0;
}
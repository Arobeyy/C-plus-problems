#include <iostream>
using namespace std;

//void introduction(string , string, int);

void introduction(string name, string city, int age = 0)
{
    cout << "My name is " << name << endl;
    cout << "I live in " << city << endl;
    if (age != 0)
        cout << "I am " << age << " years old " << endl;
}

int main()
{
    introduction("sumiya", "dhaka", 21);
    introduction("arobey", "dhaka" );

    return 0;
}


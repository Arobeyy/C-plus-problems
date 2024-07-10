#include <iostream>
using namespace std;

void introduction(string name , string city , int age = 0)
{
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if(age != 0)
        cout << "I am " << age << " years old " << endl;
}

int main()
{
    string name, city;
    int age;

    cout << "Enter name ";
    cin >> name;
    cout << "Enter city ";
    cin >> city;
    cout << "Enter age: ";
    cin >> age;

    introduction(name , city , age);

    return 0;
}
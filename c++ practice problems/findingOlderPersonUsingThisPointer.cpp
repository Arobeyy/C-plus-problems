#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string Name;
    int Age;

public:
    Person(string name = "", int age = 0) : Name(name), Age(age) {}

    Person& Isolder(Person &other)
    {        
        if(other.Age >= this->Age)
            return other;
        else
            return *this;
    }

    void display()
    {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
};

int main()
{
    Person p1("jhon", 37),
           p2("amy", 26),
           p3("merry", 15);
    
    cout << "Elder person is: \n";
    Person p = p1.Isolder(p2);
    p.display();

    cout << "Elder person is: \n";
    p = p2.Isolder(p3);
    p.display();

    return 0;    
}
#include <iostream>
using namespace std;

class Animal
{

public:
    void eat()
    {
        cout << "eating..." << endl;
    }

    void walk()
    {
        cout << " is walking..." << endl;
    }
};

class Cat : public Animal
{
    string Name;

public:
    Cat(string name = "nh") : Name(name) {}

    string getName()
    {
        return Name;
    }

    void talk()
    {
        cout << Name << " says miauuuu....." << endl;
    }
};

class Dog : public Animal
{
    string Name;
public:
    Dog(string name = "nh") : Name(name) {}

    string getName()
    {
        return Name;
    }

    void talk()
    {
        cout << Name << " says auooooooo...." << endl;
    }    
};

class Dinosour : public Animal
{
    string Name;
public:
    Dinosour(string name = "nh") : Name(name) {}
    string getName()
    {
        return Name;
    }

    void talk()
    {
        cout << Name << " says roarrrrrrr....." << endl;
    }    
};

int main()
{
    Cat c("kitty");
    Dog d("puppy");
    Dinosour di("dino");

    c.eat();
    d.eat();
    di.eat();

    c.talk();
    d.talk();
    di.talk();

    return 0;
}
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak() {}
    virtual void move() {}
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "dog says auoooooo...." << endl;
    }

    void move() override
    {
        cout << "dogs walks and runs" << endl;
    }
};

class Bird : public Animal
{
public:
    void speak() override
    {
        cout << "birds says chirp chirp...." << endl;
    }

    void move() override
    {
        cout << "birds walks and fly" << endl;
    }
};

int main()
{
    Dog d1;
    Bird b1;
    
    d1.move();
    d1.speak();
    b1.move();
    b1.speak();

    return 0;
}
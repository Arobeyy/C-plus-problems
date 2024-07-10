#include <iostream>
using namespace std;

class Human
{
public:
    void breathing()
    {
        cout << "I am breathing..." << endl;
    }
};

class Engineer : public Human
{
public:
    void work()
    {
        cout << "working on a project.." << endl;
    }
};

class Student : public Human
{
public:
    void work()
    {
        cout << "doing homework.." << endl;
    }
};

class artist : public Human
{
public:
    void work()
    {
        cout << "painting a picture" << endl;
    }
};

int main()
{
    artist a1;
    a1.breathing();
    a1.work();
    Engineer e1;
    e1.breathing();
    e1.work();
    Student s1;
    s1.breathing();
    s1.work();

    return 0;
}
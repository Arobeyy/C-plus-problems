#include <iostream>
using namespace std;

class Employee
{
    string Name;
    int Workhours;
    int Salary;

public:
    Employee()
    {
        Name = "no name";
        Workhours = 0;
        Salary = 0;
    }

    void setInfo(string name, int hours, int salary)
    {
        Name = name;
        Workhours = hours;
        Salary = salary;
    }

    int addSal()
    {
        if (Salary > 500)
        {
            Salary += 10;
        }
        return Salary;
    }

    int addWork()
    {
        if (Workhours > 6)
        {
            Salary += 5;
        }
        return Salary;
    }

    void printInfo()
    {
        addWork();
        addSal();
        cout << "Name: " << this->Name << endl;
        cout << "Salary: " << this->Salary << endl;
    }
};

int main()
{
    Employee e1, e2;
    e1.setInfo("jhon", 7 , 400);
    e2.setInfo("sam", 5, 300);
    e1.printInfo();
    e2.printInfo();

    return 0;
}
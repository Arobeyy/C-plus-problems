#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary(){};
};

class Manager : public Employee
{
private:
    string Name;
    int Age;
    float WorkingHour;
    double SalaryPerHour;

public:
    Manager(string name = "nh", int age = 0, float hours = 0.0, double pay = 0.0) : Name(name), Age(age), WorkingHour(hours), SalaryPerHour(pay) {}
    void calculateSalary() override
    {
        double Salary = SalaryPerHour * WorkingHour;
        cout << "Manager " << Name << "'s Salary is : " << Salary << endl;
    }
};

class Engineer : public Employee
{
private:
    string Name;
    int Age;
    float WorkingHour;
    double SalaryPerHour;

public:
    Engineer(string name = "nh", int age = 0, float hours = 0.0, double pay = 0.0) : Name(name), Age(age), WorkingHour(hours), SalaryPerHour(pay) {}
    void calculateSalary() override
    {
        double Salary = SalaryPerHour * WorkingHour;
        cout << "Engineer " << Name << "'s Salary is : " << Salary << endl;
    }
};

int main()
{
    Manager m1("jhon", 34, 720, 100);
    m1.calculateSalary();
    Engineer e1("amy", 25, 836, 200);
    e1.calculateSalary();

    return 0;
}
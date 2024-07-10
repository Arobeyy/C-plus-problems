#include <iostream>
using namespace std;

class Employee
{
    public:
        string Name;
        string Company;
        int Age;

        void IntroduceYourself ()
        {
            cout << "Name - " << Name << endl;
            cout << "Company - " << Company << endl;
            cout << "Age - " << Age << endl;
        }
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }
};

int main()
{
    Employee employee1 = Employee("Arobey", "None yet", 21);
    //employee1.Name = "Arobey";
    //employee1.Company = "None yet";
    //employee1.Age = 21;
    employee1.IntroduceYourself();

    return 0;
}
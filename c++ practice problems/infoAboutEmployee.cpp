#include <iostream>
using namespace std;

class Employee
{
    string Name;
    int JoiningYear;
    int Salary;
    string Address;

public:
    Employee(string name = "nh", int year = 0, int salary = 0, string address = "nh")
        : Name(name), JoiningYear(year), Salary(salary), Address(address) {}
    
    void getInfo(const Employee& e1, const Employee& e2, const Employee& e3)
    {
        cout << "Name" << "\t" << "Year Of Joining" << "\t" << "Address" << endl;
        cout << e1.Name << "\t" << e1.JoiningYear << "\t\t" << e1.Address << endl;
        cout << e2.Name << "\t" << e2.JoiningYear << "\t\t" << e2.Address << endl;
        cout << e3.Name << "\t" << e3.JoiningYear << "\t\t" << e3.Address << endl;
       
    }
};

int main()
{
    Employee e1("su", 2021, 40000, "64C-wallsStreat");
    Employee e2("sam", 2022, 30000, "68C-wallsStreat");
    Employee e3("jhon", 2023, 20000, "24C-wallsStreat");

    Employee obj;
    obj.getInfo(e1, e2, e3);

    return 0;
}
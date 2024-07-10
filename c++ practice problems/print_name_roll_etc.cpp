#include <iostream>
using namespace std;

class Student
{
    string Name;
    int Roll;
    int PhoneNum;
    string Address;

public:
    Student(string name = "nh", int roll = 0, int phone = 0, string address = "nh"):Name(name), Roll(roll), PhoneNum(phone), Address(address) {}

    void getInfo()
    {
        cout << "Name: " << this->Name << endl;
        cout << "Roll: " << this->Roll << endl;
        cout << "Phone number: " << this->PhoneNum << endl;
        cout << "Address: " << this->Address << endl; 
    }
};

int main()
{
    Student s1("jhon", 33, 123450, "iceland");
    Student s2("sam", 28, 98760, "greenland");
    Student s3;

    s1.getInfo();
    s2.getInfo();
    s3.getInfo();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string Name;
    int Age;
    static int count; // static variable to keep count of the objects

public:
    Student(string name = "", int age = 0) : Name(name), Age(age)
    {
        count++; // incrementing count every time a new Student obj is created
    }
    void displayInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
    }

    static void displayTotalCount()
    {
        cout << "Total Students : " << count << endl;
    }
};

int Student ::count = 0; // Initializing static variable outside the class

int main()
{
    Student s1("alice", 21);
    Student s2("Eric", 22);
    Student s3("amy", 20);

    cout << "Student 1: " << endl;
    s1.displayInfo();
    cout << "Student 2: " << endl;
    s2.displayInfo();
    cout << "Student 3: " << endl;
    s3.displayInfo();

    // Display total count
    Student ::displayTotalCount(); // output : total student : 3;

    return 0;
}
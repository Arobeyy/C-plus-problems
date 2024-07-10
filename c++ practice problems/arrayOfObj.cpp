#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string Name;
    int Age;
    char Gender;
    float ProgrammingGrade;

    Student(string name = "nh", int age = 0, char gender = 'n', float grade = 0.0) : Name(name), Age(age), Gender(gender), ProgrammingGrade(grade) {}

};

int main()
{
    Student students[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "Student: " << i+1 << endl;

        Student s;
        cout << "Name: ";
        cin >> s.Name;
        cout << "Age: ";
        cin >> s.Age;
        cout << "Gender: ";
        cin >> s.Gender;
        cout << "programming Grade: ";
        cin >> s.ProgrammingGrade;

        students[i] = s;
    }

    //cout << "Programming Grade of first student: " << students[0].ProgrammingGrade << endl;
    
    float sumOfGrades = 0;
    for (int i = 0; i < 3; i++)
    {
        sumOfGrades += students[i].ProgrammingGrade;
    }

    cout << "Avarage: " << sumOfGrades / 3 << endl;

    return 0;
}
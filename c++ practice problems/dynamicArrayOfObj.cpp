#include <iostream>
using namespace std;

class Student
{
private:
    string Name;
    int Id;

public:
    Student() {}
    Student (string name, int id)
    {
        Name = name;
        Id = id;
    }

    void setName(string name)
    {
        Name = name;
    }

    string getName() 
    {
        return Name;
    }

    void setId(int id)
    {
        Id = id;
    }

    int getId()
    {
        return Id;
    }

};

void printArray(Student * student, int size)
{
    for(int i = 0; i < size; i++)
    {
    cout << "Student : " << i+1 << "\t";
    cout << student[i].getName() << "\t";
    cout << student[i].getId() << endl;

    }

}

int main()
{
    int size;
    cout << "Number of student: ";
    cin >> size;
    Student * students = new Student[size];

    for (int i = 0; i < size; i++)
    {
        cout << "STUDENT: " << i+1 << endl;
        string name;
        cout << "Name : ";
        cin >> name;
        int id;
        cout << "id : ";
        cin >> id;

        Student s(name, id);
        students[i] = s;
    }
    printArray(students, size);


    delete []students;
    return 0;
}
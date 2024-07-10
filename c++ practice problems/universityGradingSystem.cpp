#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class Grade
{
private:
    list <Student> studentList;
    Course course;
};

class Course
{
private:
    string CourseName;
    int CourseCode;
    double Marks;
    size_t Maxlimit;
    list<Course> courselist;
    list<Student> myStudent;

public:
    Course(string name, int code, size_t limit)
    {
        CourseName = name;
        CourseCode = code;
        Maxlimit = limit;
    }

    void enrollStudent(const Student& student)
    {
        if (myStudent.size() < Maxlimit)
        {
            myStudent.push_back(student);
            cout << student.getId() << " has enrolled in" << this->CourseName << endl;
        }
        else
        {
           cout << "List is already at maximum." << endl; 
        }
    }

};

class Student
{
private:
    string Name;
    int Id;
    list<Course> myCoursesList;
    
public:
    Student(string name, int id)
    {
        Name = name;
        Id = id;
    }

    int getId() const
    {
        return Id;
    }

    //courses enrolled in
    void EnrolledIn(const Course& course)
    {
        myCoursesList.push_back(course);
    }

};

int main()
{

    return 0;
}
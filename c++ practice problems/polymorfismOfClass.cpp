#include <iostream>
using namespace std;

class Student
{
protected:
    string Name;
private:
    string InstituteName;
    int Age;
    float CGPA;
public:
    Student(string name, string institute, int age, float cgpa)
    {
        Name = name;
        InstituteName = institute;
        Age = age;
        CGPA = cgpa;
    }
    void IntroduceYourself()
    {
        cout << "Student's name: " << Name << endl;
        cout << "Institute name: " << InstituteName << endl;
        cout << "Score: " << CGPA << endl;
    }
    virtual void Work()
    {
        cout << Name << " is studing textbooks, preparing lessons , doing homework... " << endl;
    }


};

class CollegeStudent:public Student
{
public:
    string MajorSubject;
    CollegeStudent(string name, string institute, int age, float cgpa, string major)
        :Student(name, institute, age, cgpa)
    {
        MajorSubject = major;
    }
    void MajoringIn()
    {
        cout << Name << " is majoring in " << MajorSubject << endl;
    }
    void Work()
    {
        cout << Name << " studies at college level" << endl;
    }

};

class UniStudent:public Student
{
public:
    string Subject;
    UniStudent(string name, string institute, int age, float cgpa, string subject)
        :Student(name, institute, age, cgpa)
    {
        Subject = subject;
    }
    void Lab()
    {
        cout << Name << " have to attend " << Subject << " lab " << endl;
    }
    void Work()
    {
        cout << Name << " studies at university level" << endl;
    }
};

int main()
{
    CollegeStudent c1 = CollegeStudent("sumiya", "cwc", 19, 3.83, "science");
    UniStudent u1 = UniStudent("arobey", "dmmc", 21, 2.77, "object oriented programmin");
    c1.IntroduceYourself();
    u1.IntroduceYourself();

    Student* s1 = &c1;
    Student* s2 = &u1; 

    s1->Work();
    s2->Work();   
    return 0;
}
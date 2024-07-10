#include <iostream>
using namespace std;

class AbstractStudent
{
    virtual void StudentsGrade() = 0;

};

class Student:AbstractStudent
{
    private:
        string Name;
        string CourseName;
        int Score;
    public:
       Student(string name, string course, int score)
       {
            Name = name;
            CourseName = course;
            Score = score;
       }
       void IntroduceYourSelf()
       {
            cout << "Name: " << Name << endl;
            cout << "Course'name: " << CourseName << endl;
            cout << "Score: " << Score << endl;
       }
       void StudentsGrade()
       {
            if(Score >=80)
                cout << Name << " You have got grade A" << endl;
            else if(Score >=70 && Score < 80)
                cout << Name << " You have got grade B" << endl;
            else if(Score >=60 && Score < 70)
                cout << Name << " You have got grade C" << endl;
            else if(Score < 60)
                cout << Name << " You failed.Do better next time" << endl;
       }


};

int main()
{
    Student student1 = Student("Arobey", "CSE", 77);
    Student student2 = Student("kashfia", "CSE", 87);
    student1.IntroduceYourSelf();
    student2.IntroduceYourSelf();
    student1.StudentsGrade();
    student2.StudentsGrade();
    

    return 0;
}
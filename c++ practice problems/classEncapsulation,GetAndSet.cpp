#include <iostream>
using namespace std;

class Student
{
private:
    string Name;
    string Institute;
    int Age;
    int Score;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void IntroduceYourself()
    {
        cout << "Name: " << Name << endl;
        cout << "college name: " << Institute << endl;
        cout << "age: " << Age << endl;
        cout << "score: " << Score << endl;
    }
    Student(string name, string institute, int age, int score)
    {
        Name = name;
        Institute = institute;
        Age = age;
        Score = score;
    }
};

int main()
{
    Student student1 = Student("Arobey", "CWC", 21, 77);
    Student student2 = Student("kashfia", "CWC", 20, 81);
    student1.IntroduceYourself();
    student2.IntroduceYourself();
    student2.setName("kashfia alam");
    cout << "Name: " << student2.getName() << endl;

    return 0;
}
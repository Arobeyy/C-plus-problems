#include <iostream>
using namespace std;

class Student
{
private:
    
    string InstituteName;
    int Age;
    int Score;
protected:
    string Name;
public:
    Student(string name, string institute, int age, int score)
    {
        Name = name;
        InstituteName = institute;
        Age = age;
        Score = score;
    }
    void introduceYourself()
    {
        cout << "Name: " << Name << endl;
        cout << "Institute name: " << InstituteName << endl;
        cout << "Age: " << Age << endl;
        cout << "Score: " << Score << endl;
    }
    string getName()
    {
        return Name;
    }
};

class CseDepartment:public Student
{   
public:
    string FavProgramingLanguage;
    CseDepartment(string name, string institute, int age, int score,string favProgramingLanguage)
        :Student(name, institute, age, score)
    {
        FavProgramingLanguage = favProgramingLanguage;
    }
    void WriteCode()
    {
        cout << getName() << " write program using " << FavProgramingLanguage << endl; 
    }
    
};

class CollegeStudents:public Student
{
public:
    string MajorSubject;
    void MajoringIn()
    {
        cout << Name << " is majoring in " << MajorSubject << endl;
    }
    CollegeStudents(string name, string institute, int age, int score, string major)
        :Student(name, institute, age, score)
    {
        MajorSubject = major;
    }
        
};


int main()
{
    Student Student1 = Student("Arobey", "CWC", 21, 77);
    CseDepartment s1 = CseDepartment ("kashfia", "CWC", 22, 80, "c++");
    s1.introduceYourself();
    s1.WriteCode();
    CollegeStudents c1 = CollegeStudents("Rokib", "st.something", 22, 84, "science");
    c1.introduceYourself();
    c1.MajoringIn();
    return 0;
}
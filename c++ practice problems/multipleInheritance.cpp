#include <iostream>
using namespace std;

class Student
{
protected:
    int Roll;

public:
    Student(int roll = 0 ) : Roll(roll)    //  default and paramiterize constuctor
    {
        cout << "student no: " << Roll << endl;
    }
    void work()                             //ambiguity because of similer function name 
    {
        cout << "studying in class..." << endl;
    }
};

class Programmer
{
protected:
    string Language;

public:
    Programmer(string lan)                    // patameterize constructor
    {
        Language = lan;
        cout << "programmer in: " << Language << endl;
    }

    void work()                               //ambiguity because of similer function name 
    {
        cout << "writing code ...." << endl;
    }
};

class Arobey : public Student, public Programmer
{
    private:
    string nickName;
    public:
    Arobey(string name = "none", int rx = 0, string ly = "none") : nickName(name), Student(rx), Programmer(ly)  
    {
        cout << nickName << " doesn't like studying .... blablaballa" << endl;
    }

};

int main()
{
    Arobey a("aro",36, "c++");
    // a.Student :: work();
    // a.Programmer :: work();
    Programmer pr = a;                          //object slicing: only copying progremmer type data
    pr.work();                                  // pr is of type progremmer so it will print work function from programmer class
    static_cast<Student>(a).work();             // static cast


    return 0;
}
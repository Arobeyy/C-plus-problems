#include <iostream>
#include <list>
using namespace std;

class Student
{
    string Name;
    int Roll;

public:
    Student (string name = "nh", int roll = 0) : Name(name), Roll(roll) {}

    string getName() const
    {
        return Name;
    }
    int getRoll() const
    {
        return Roll;
    }
    bool operator==(const Student &stu) const
    {
        return this->getRoll() == stu.getRoll();
    }
};

class MySudents
{
private:
    list<Student> StudentList;

public:
    void operator+=(const Student &stu)
    {
        this->StudentList.push_back(stu);
    }

    const list<Student> &getList() const
    {
        return StudentList;
    }

    void operator-=(const Student &stu)
    {
        this->StudentList.remove(stu);
    }
};

ostream &operator<<(ostream &COUT,const Student &st1)
{
    COUT << st1.getName() << endl;
    COUT << st1.getRoll() << endl;

    return COUT;
}

ostream &operator<<(ostream &COUT, const MySudents &myStu)
{
    for (const Student student : myStu.getList())
    {
        COUT << student << endl;
    }
    return COUT;
}

int main()
{
    Student student1("jenny", 4);
    Student student2("lisa", 8);
    // cout << student1 << student2;

    MySudents myStudent;
    myStudent += student1;
    myStudent += student2;
    myStudent -= student2;
    cout << myStudent;

    return 0;
}
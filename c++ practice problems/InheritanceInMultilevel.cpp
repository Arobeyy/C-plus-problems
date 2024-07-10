#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int a)
    {
        roll = a;
    }

    int getRoll()
    {
        return roll;
    }
};

class Test : public Student
{
protected:
    int sub1;
    int sub2;

public:
    void setMarks(int a, int b)
    {
        sub1 = a;
        sub2 = b;
    }

    int getSub1()
    {
        return sub1;
    }

    int getSub2()
    {
        return sub2;
    }

};

class Result : public Test
{
    int total;

public:
    int calculateTotal()
    {
        total = sub1 + sub2;
        return total;
    }

    void displayResult()
    {
        cout << "Roll no. = " << getRoll() << endl;
        cout << "Sub 1 = " << getSub1() << endl;
        cout << "Sub 2 = " << getSub2() << endl;
        cout << "Total = " << calculateTotal() << endl;
    }
};

int main()
{
    Result student1;
    student1.setRoll(111);
    student1.setMarks(75, 59);
    student1.displayResult();   

    return 0;
}
#include <iostream>
using namespace std;

class Student
{
protected:
    int Roll;

public:
    Student(int roll = 0) : Roll(roll) {}
};

class Test : public Student
{
protected:
    float sub1, sub2;

public:
    Test(int roll = 0, float s1 = 0.0, float s2 = 0.0) : Student(roll), sub1(s1), sub2(s2) {}
};

class Sports
{
protected:
    float score;

public:
    Sports(float s = 0.0) : score(s) {}
};

class Result : public Test, public Sports
{
protected:
    float total;

public:
    Result(int a = 0, float s1 = 0.0, float s2 = 0.0, float score = 0.0) : Test(a, s1, s2), Sports(score) {}

    float calculateTotal()
    {
        total = sub1 + sub2 + score;
        return total;
    }

    void displayResult()
    {
        cout << "Roll no. = " << this->Roll << endl;
        cout << "Subject 1 = " << this->sub1 << endl;
        cout << "Subject 2 = " << this->sub2 << endl;
        cout << "Score = " << this->score << endl;
        cout << "Total score = " << calculateTotal() << endl;
    }
};

int main()
{
    Result student1(111, 65.05, 77.00, 80.00);
    student1.displayResult();

    return 0;
}
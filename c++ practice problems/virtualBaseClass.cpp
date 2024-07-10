#include <iostream>
using namespace std;

class Student
{
protected:
    int Roll;

public:
    Student(int roll = 0) : Roll(roll) {}

    void displayInfo()
    {
        cout << "Roll = " << Roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    int sub1, sub2;

public:
    Test(int roll = 0, int s1 = 0, int s2 = 0) 
        : Student(roll), sub1(s1), sub2(s2) {}

    void displayInfo()
    {
        cout << "Subject 1 = " << this->sub1 << endl;
        cout << "Subject 2 = " << this->sub2 << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    Sports(int roll = 0, int score = 0) : Student(roll), score(score) {}

    void displayInfo()
    {
        cout << "Score = " << this->score << endl;
    }
};

class Result : public Test, public Sports
{
    int total;

public:
    Result(int roll = 0, int s1 = 0, int s2 = 0, int score = 0) 
        : Student(roll), Test(roll, s1, s2), Sports(roll, score) {}

    int calculatTotal()
    {
        total = sub1 + sub2 + score;
        return total;
    }

    void displayResult()
    {
        Student ::displayInfo();
        Test ::displayInfo();
        Sports ::displayInfo();
        cout << "Total = " << this->calculatTotal() << endl;
    }
};

int main()
{
    Result result(101, 85, 90, 77);
    result.displayResult();

    return 0;
}


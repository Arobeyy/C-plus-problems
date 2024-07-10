#include <iostream>
using namespace std;

class A
{
    static int count;

public:
    A() { count++; }
    void display()
    {
        cout << "object created: " << count << endl;
    }
};
int A ::count = 0;

int main()
{
    A a1;
    a1.display();
    A a2;
    a2.display();
    A a3;
    a3.display();

    return 0;
}
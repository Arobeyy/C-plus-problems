#include <iostream>
using namespace std;

class Programming
{
    public:
    void output(); //function declaration 
};

// function definition outside the class

void Programming ::output()
{
    cout << "Function defined outside the class.\n"; 
}

int main()
{
    Programming p;
    p.output();

    return 0;
}
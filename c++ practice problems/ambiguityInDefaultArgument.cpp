#include <iostream>
using namespace std;

void fun(int i)
{
    cout << i << endl;
}

void fun(int i ,int j = 8)
{
    cout << i << "  " << j << endl;
}

int main()
{
    //fun(10);  //creates ambiguity

    return 0;
}

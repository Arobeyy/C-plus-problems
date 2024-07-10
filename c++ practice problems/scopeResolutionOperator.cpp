#include <iostream>
using namespace std;

char c = 'a';
int main()
{
    char c = 'b';
    cout << "Local variable: " << c << endl;
    cout << "Global variable: " << ::c << endl;

    return 0;

}
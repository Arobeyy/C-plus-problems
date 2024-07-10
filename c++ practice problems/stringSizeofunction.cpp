#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string readMe;
    while (getline(cin, readMe))
    {
        auto len = readMe.size();
        cout << "Length of the string is: " << len << endl;
        //auto keyword autometicaly deduce the return type form the operation
        //size() function cout whitespace also
    }
}
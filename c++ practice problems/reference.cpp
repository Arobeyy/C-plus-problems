#include <iostream>
using namespace std;

int main()
{
    int ival = 1024, uval = 12;
    int &refval = ival;
    //int &refval2;
    
    cout << " ival = " << ival << " refval = " << refval << endl;
    refval = 1000;
    cout << "New ival = " << ival << endl << "New refval = " << refval << endl;

    return 0;
}
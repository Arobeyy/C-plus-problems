#include <iostream>
using namespace std;

int main()
{
    //currval is the number we're counting; we'll read new vallue into val
    int currval = 0, val = 0;
    //read first number and ensure that we have data to process
    if (cin >> currval)
    {
        int count = 1;
        while (cin >> val)
        {//read the remaining numbers
            if (val == currval) //if values are same...
            {
                ++count; //..add 1 to count
            }
            else
            { //otherwise print the count for the previous value
                cout << currval << " occurs " << count
                << " times " << endl;
                currval = val; //remember the new value
                count = 1; //reset the counter
            }

        }
        // remember to print the count for the last value in the file
        cout << currval << " occurs " << count << " times " << endl;
    }

    return 0;

}
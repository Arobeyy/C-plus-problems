#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()
{
    int i = 0;
    const char *ptr[10] = {
        "books",
        "television",
        "computer",
        "sports"
    };
    
    char str[25];
    cout << "\n\nEnter your favorite leisure pursuit: ";
    cin >> str;

    for (i = 0; i < 4; i++)
    {
        if (!strcmp (str, ptr[i]))
        {
            cout << "your favorite pursuit is available here" << endl;
            break;
        }
    }

    if (i == 4)
    {
        cout << "your favorite pursuit is not here" << endl;
    }

    
    return 0;
}
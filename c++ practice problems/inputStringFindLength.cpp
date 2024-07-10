#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    char ch[30];
    cout << "Enter any string: ";
    cin.getline(ch, 30);
    for(int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    cout << "String length: " << count << endl;

    return 0;
}
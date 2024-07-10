#include <iostream>
using namespace std;

void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    print(&number, 'i');
    print(&letter, 'c');

    return 0;
}
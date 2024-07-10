#include <iostream>
using namespace std;

class Book
{
    string Title;
    string Author;

public:
    Book(string title = "nh", string author = "nh") : Title(title), Author(author) 
    {
        cout << Title + " constructor is invoked\n";
    }

    ~Book ()
    {
        cout << Title + " destructor is invoked\n";
    }
};

int main()
{
    Book book1("Dopamine detox", "thibo moris");
    Book book2("ferari" , "suhashini");

    return 0;
}
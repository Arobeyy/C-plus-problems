#include <iostream>
using namespace std;

class Book
{
public:
    string Title;
    string Author;
    float *Ratings;
    int RateCounter;

    Book(string title = "nh", string author = "nh") : Title(title), Author(author)
    {
        RateCounter = 2;
        Ratings = new float[RateCounter];
        Ratings[0] = 5;
        Ratings[1] = 4;
    }

    Book(const Book &original)
    {
        Title = original.Title;
        Author = original.Author;
        RateCounter = original.RateCounter;

        Ratings = new float[RateCounter];
        for (int i = 0; i < RateCounter; i++)
        {
            Ratings[i] = original.Ratings[i];
        }
    }

    ~Book()
    {
        delete[] Ratings;
        Ratings = nullptr;
    }
};

void printBook(Book book)
{
    cout << "Title: " << book.Title << endl;
    cout << "Author: " << book.Author << endl;

    float sum = 0;
    for (int i = 0; i < book.RateCounter; i++)
    {
        sum += book.Ratings[i];
    }
    cout << "Avarage rate: " << sum / book.RateCounter << endl;
}

int main()
{
    Book book1("Millionaire Fastlane", "M.J. DeMarco");
    Book book2("C++ Lambda Story", "Bartek F.");

    Book book3(book1);
    // Book book3 = book1;
    printBook(book1);
    printBook(book2);
    printBook(book3);

    return 0;
}

/*
about:
copy constructor is a type of constructor that makes a copy of an object when invoked.
it has the same name as the class, it does not have any return type and takes anothe object as parameter.

uses:
* whenever you want to creat an object based on an already existing object.
* when you pass an object as a parameter of a function by value compiler copy that object
using default copy consturctor
* you can use a copy constructor when you pass a parameter to a functon by value, and return by value as well.
* copy constructor will not be invoked if you pass or return it by refrance. 

notes:
*while making a copy constructor you have to pass the object by referance and use const keyword to avoide
unwanted changes of the original objects.
* if the object have dynamic array/ pointers, you have to manually allocate new memoryspace and copy elements afterwards;


*/
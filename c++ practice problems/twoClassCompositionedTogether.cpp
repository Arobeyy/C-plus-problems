#include <iostream>
#include <string>
using namespace std;

class Author
{
private:
    string Name;
    string Email;

public:
    Author(string name = "nh", string email = "nh") : Name(name), Email(email) {}
    void displayInfo() const
    {
        cout << "Name : " << Name << endl;
        cout << "E-mail : " << Email << endl;
    }
    string getName() const
    {
        return Name;
    }
    string getEmail() const
    {
        return Email;
    }
};

class Book
{
private:
    string Title;
    double Price;
    const Author *author;

public:
    Book() {}
    Book(string title, double price, const Author *a)
    {
        Title = title;
        Price = price;
        author = a;
    }
    void displayInfo() const
    {
        cout << "Title : " << Title << endl;
        cout << "Price : " << Price << endl;
        cout << "Author Info: " << endl;
        cout << "Author's Name : " << author->getName() << endl;
        cout << "Author's E-mail : " << author->getEmail() << endl;
    }

    ~Book()
    {
        delete []author;
        author = nullptr;
    }
};

int main()
{
    Author a1("thebo moris", "thebo@email.com");
    Book b1("dopamine detox", 200.0, &a1);

    a1.displayInfo();
    b1.displayInfo();

    return 0;
}
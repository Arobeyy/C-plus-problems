#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class Book
{
public:
    string Title;
    string Author;
    Book() {}
    Book(string title, string author)
    {
        Title = title;
        Author = author;
    }

    string getTitle() const
    {
        return Title;
    }

    string getAuthor() const
    {
        return Author;
    }

    //define the operator == for comparing books
    bool operator==(const Book& other)const
    {
        return (Title == other.Title) && (Author == other.Author);
    }
};

class Member
{
public:
    string Name;
    int Age;
    list<Book> BorrowedBookList;

    Member() {}
    Member(string name, int age)
    {
        Name = name;
        Age = age;
    }

    string getName() const
    {
        return Name;
    }

    int getAge() const
    {
        return Age;
    }

    void displayInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Borrowed books: " << endl;
        for (const Book& book : BorrowedBookList)
        {
            cout << "Title: " << book.getTitle() << endl;
            cout << "Author: " << book.getAuthor() << endl;
            cout << "\n";
        }
    }

    void addToBorrowedList(const Book& book)
    {
        BorrowedBookList.push_back(book);
    }

    void removeFromBorrowedList(const Book& book)
    {
        auto iteratorToRemove = find(BorrowedBookList.begin(), BorrowedBookList.end(), book);
        if (iteratorToRemove != BorrowedBookList.end())
        {
            BorrowedBookList.erase(iteratorToRemove);
            cout << "Book is removed from the borrowed list: " << book.getTitle() << " by " << book.getAuthor() << endl;
        }
    }
};

class Library
{
public:
    list<Book> BookList;
    list<Member> MemberList;

    //addbook
    void addBook(const Book& book)
    {
        BookList.push_back(book);
    }
    //removebook
    void removeBook(const Book& book)
    {
        auto iteratorToRemove = find(BookList.begin(), BookList.end(), book);
        if (iteratorToRemove != BookList.end())
        {
            BookList.erase(iteratorToRemove);
            cout << "Book is removed: " << book.getTitle() << " by " << book.getAuthor() << endl;
        }
        else
        {
            cout << "Book is not found in the list" << endl;
        }
    }
    //displaybooks
    void displayBooks()
    {
        for (const Book& book : BookList)
        {
            cout << "Title: " << book.getTitle() << endl;
            cout << "Author: " << book.getAuthor() << endl;
            cout << "\n";
        }
    }


    //borrowbook
    void borrowBook(Member& member, Book& book)
    {
        auto iteratorToRemove = find(BookList.begin(), BookList.end(), book);
        if (iteratorToRemove != BookList.end())
        {
            member.addToBorrowedList(book);
            BookList.erase(iteratorToRemove);
            cout << "Book is borrowed: " << book.getTitle() << " by " << book.getAuthor() << endl;
        }
        else
        {
            cout << "Book is not found in the list" << endl;
        }
    }
    //returnbook
    void returnBook(Member& member, const Book& book)
    {
        BookList.push_back(book);
        member.removeFromBorrowedList(book);
        cout << "Book is returned" << endl;

    }
};

int main()
{
    Library library;

    Book book1("the alchemist", "pablo");
    Book book2("memsaheb", "nimai");

    library.addBook(book1);
    library.addBook(book2);
    library.displayBooks();

    Member m1("su", 21);
    library.borrowBook(m1, book1);
    m1.displayInfo();

    library.returnBook(m1, book1);
    m1.displayInfo();

    return 0;
}
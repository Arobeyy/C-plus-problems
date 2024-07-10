#include <iostream>
#include <string>
#include <list>
using namespace std;

class Media
{
protected:
    string Title;
    float Price;

public:
    Media(string title = "", float price = 0.0) : Title(title), Price(price) {}

    virtual void display() {}
};

class Book : public Media
{
    int Pages;

public:
    Book(string name, float price, int pages) : Media(name, price), Pages(pages) {}
    void display() override
    {
        cout << "............Book.........\n";
        cout << "Title: " << Title << endl;
        cout << "Pages: " << Pages << endl;
        cout << "Price: " << Price << endl;
    }
};

class Tape : public Media
{
    int Time;

public:
    Tape(string name, float price, float time) : Media(name, price) , Time(time) {}
    void display() override
    {
        cout << "............Tape.........\n";
        cout << "Title: " << Title << endl;
        cout << "Play time: " << Time << "mins\n";
        cout << "Price: " << Price << endl;
    }
};

int main()
{
    Book book1("mayabi", 345.90, 200);
    Tape tape1("old school", 260.00, 60);

    list<Media*> mylist;
    mylist.push_back(&book1);
    mylist.push_back(&tape1);

    cout << "MEDIA DETAILS: \n";
    for (Media *media : mylist)
    {
        media->display();
    }

    return 0;
}
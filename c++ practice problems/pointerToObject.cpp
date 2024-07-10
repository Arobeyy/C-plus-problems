#include <iostream>
using namespace std;

class Item
{
    int Code;
    float Price;

public:
    void getData(int a, float b)
    {
        Code = a;
        Price = b;
    }

    void display()
    {
        cout << "Code: " << Code << endl;
        cout << "Price: " << Price << endl;
    }
};

const int Size = 2;

int main()
{
    Item *p = new Item;
    p->getData(111, 69.66);

    int x;
    float y;
    Item *q = new Item[Size];
    Item *r = q;

    for (int i = 0; i < Size; i++)
    {
        cout << "Input code and Price for item " << i + 1 << endl;
        cin >> x >> y;
        q->getData(x, y);
        q++;
    }

    for (int i = 0; i < Size; i++)
    {
        cout << "item: " << i +1 << endl;
        r->display();
        r++;
    }

    cout << "\nitem of p: \n";
    p->display(); 

    return 0;
}
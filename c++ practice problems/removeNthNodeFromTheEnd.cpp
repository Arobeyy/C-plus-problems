#include <iostream>
using namespace std;

class Node
{
public:
    int Data;
    Node *Next;

    Node(int data)
    {
        Data = data;
        Next = nullptr;
    }
};

class MyLinkdeList
{
public:
    Node *Head;

    MyLinkdeList()
    {
        Head = nullptr;
    }

    void add(int item)
    {
        Node *newNode = new Node(item);

        if (Head == nullptr)
        {
            Head = newNode;
        }
        else
        {
            Node *temp = Head;

            while(temp->Next != nullptr)
            {
                temp = temp->Next;
            }
            temp->Next = newNode;
        }
    }

    void removeFromTheEnd(int position)
    {
        if (Head == nullptr)
        {
            cout << "The list is empty." << endl;
            return;
        }

        int currentPosition = 0;
        int size = 0;
        Node *temp = Head;
        Node *prev = nullptr;

        while (temp->Next != nullptr)
        {
            size += 1;
            temp = temp->Next;
        }

        if(position > size)
        {
            cout << "position is out of range." << endl;
        }
        cout << "size: " << size << endl;

        temp = Head;

        size = size - (position - 1);
        while (temp != nullptr && currentPosition < size)
        {
            prev = temp;
            currentPosition ++;
            temp = temp->Next;
        }

        if (temp != nullptr)
        {
            if (prev != nullptr)
            {
            prev->Next = temp->Next;
            }
            else
            {
                Head = temp->Next;
            }
            delete temp;
        }
    }

    void displayList()
    {
        if (Head == nullptr)
        {
            cout << "The list is empty." << endl;
            return;
        }

        Node *temp = Head;

        while (temp != nullptr)
        {
            cout << temp->Data << "\t";
            temp = temp->Next;
        }
        cout << endl;
    }
};

int main()
{
    MyLinkdeList list;

    list.add(11);
    list.add(22);
    list.add(33);
    list.add(44);
    list.displayList();
    list.removeFromTheEnd(2);
    list.displayList();

    return 0;
}
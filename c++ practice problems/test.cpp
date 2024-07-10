#include <iostream>
using namespace std;

class Node
{
public:
    int Data;
    Node *Next;

    Node(int data) : Data(data), Next(nullptr) {}
};

class MyLinkedList
{
private:
    Node *Head;

public:
    MyLinkedList()
    {
        Head = nullptr;
    }

    void add(int item)
    {
        if (Head == nullptr)
        {
            // insert at the beginning
            Node *newNode = new Node(item);
            newNode->Next = Head;
            Head = newNode;
        }
        else
        {
            Node *newNode = new Node(item);
            Node *temp = Head;

            while (temp->Next != nullptr)
            {
                temp = temp->Next;
            }
            temp->Next = newNode;
        }
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *current = Head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->Next;
            current->Next = prev;

            prev = current;
            current = next;
        }
        Head = prev;
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

    ~MyLinkedList()
    {
        while (Head != nullptr)
        {
            Node *temp = Head;
            Head = Head->Next;
            delete temp;
        }
    }
};

int main()
{
    MyLinkedList list;
    list.add(11);
    list.add(22);
    list.add(33);
    cout << "original linked list: " << endl;
    list.displayList();
    cout << "reversed linked list: " << endl;
    list.reverse();
    list.displayList();

    return 0;
}

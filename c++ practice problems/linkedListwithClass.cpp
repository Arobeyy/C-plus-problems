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
            Node *newNode = new Node(item);
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
            // add the node at the end of the list.
            temp->Next = newNode;
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

    void remove(int item)
    {
        if (Head == nullptr)
        {
            cout << "The list list empty." << endl;
            return;
        }

        if (Head->Data == item)
        {
            Node *temp = Head;
            Head = Head->Next;
            delete temp;
            return;
        }

        Node *current = Head;
        Node *prev = nullptr;

        while (current != nullptr && current->Data != item)
        {
            prev = current;
            current = current->Next;
        }

        if (current == nullptr)
        {
            cout << "Item not found." << endl;
            return;
        }

        prev->Next = current->Next;
        delete current;
        
    }

    void addAtPosition(int item, int position)
    {
        int currentPosition = 0;
        position -= 1;

        if (position <= 0)
        {
            Node *newNode = new Node(item);
            newNode->Next = Head->Next;
            Head = newNode;
        }
        else
        {
            Node *newNode = new Node(item);
            Node *prev = Head;

            while (prev != nullptr && currentPosition < position -1)
            {
                prev = prev->Next;
                currentPosition++;
            }

            if (prev == nullptr)
            {
                //position is greater than the current size of the list
                // adding the new node at the end of the list
                add(item);
            }
            
            newNode->Next = prev->Next;
            prev->Next = newNode;

        }
    }

    Node* find(int item)
    {
        Node *temp = Head;

        while (temp != nullptr)
        {
            if (temp->Data == item)
            {
                return temp;
            }
            temp = temp->Next;
        }        
        return nullptr;     //if not found return nullptr.
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
    list.add(10);
    list.add(20);
    list.add(40);
    list.displayList();
    list.addAtPosition(30, 3);
    list.displayList();
    list.remove(20);
    list.displayList();

    return 0;
}
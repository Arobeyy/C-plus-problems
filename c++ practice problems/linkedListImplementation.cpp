#include <iostream>
using namespace std;

class Node
{
private:
    int Data;
    Node *Next;

public:
    Node(int data)
    {
        Data = data;
        Next = nullptr;
    }

    friend class MyLinkedList;
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
        if (Head == nullptr) // if the list is empty, create the head
        {
            Head = new Node(item);
        }
        else
        {
            Node *newNode = new Node(item); // else create new node and find the last node
            Node *temp = Head;

            while (temp->Next != nullptr)
            {
                temp = temp->Next;
            }
            // add new node at the end of the list
            temp->Next = newNode;
        }
    }

    void remove(int item)
    {
        if (Head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        if (Head->Data == item)
        {
            Node *temp = Head;
            Head = Head->Next;
            delete temp;
            return;
        }

        Node *prev = nullptr;
        Node *current = Head;

        while (current != nullptr && current->Data != item)
        {
            prev = current;
            current = current->Next;
        }

        if (current == nullptr)
        {
            cout << "Node not found." << endl;
            return;
        }

        prev->Next = current->Next;
        delete current;
    }

    void displayList()
    {
        Node *temp = Head;
        while (temp != nullptr)
        {
            cout << temp->Data << "\t";
            temp = temp->Next;
        }
        cout << endl;
    }

    Node *find(int item)
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
        return nullptr;
    }

    void addAtPosition(int item, int position)
    {
        if (position <= 0)
        {
            //insert at the beginning
            Node *newNode = new Node(item);
            newNode->Next = Head;
            Head = newNode;
        }
        else
        {
            Node *newNode = new Node(item);
            Node *temp = Head;
            int currentPosition = 0;

            while (temp != nullptr && currentPosition < position - 1)
            {
                temp = temp->Next;
                currentPosition++;
            }

            if (temp != nullptr)
            {
                newNode->Next = temp->Next;
                temp->Next = newNode;
            }
            else
            {
                add(item);
            }
        }
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
    list.addAtPosition(30, 2);
    list.displayList();
    list.remove(40);
    list.displayList();

    return 0;
}
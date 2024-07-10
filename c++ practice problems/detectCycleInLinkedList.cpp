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

    void addInCycle(int item)
    {
        if (Head == nullptr)
        {
            Node *newNode = new Node(item);
            Head = newNode;
            newNode->Next = Head; ///////////
        }
        else
        {
            Node *newNode = new Node(item);
            Node *temp = Head;

            while (temp->Next != Head)
            {
                temp = temp->Next;
            }
            temp->Next = newNode;
            newNode->Next = Head;
        }
    }

    void displayList()
    {
        if (Head == nullptr)
        {
            cout << "The list is empty." << endl;
            return;
        }

        if (this->hasCycle())
        {
            Node *temp = Head;
            int count = 0; // limit the number of iteration for printing
            while (temp != nullptr && count < 10)
            {
                cout << temp->Data << "\t";
                temp = temp->Next;
                count++;
            }
            cout << endl;
        }
        else
        {
            Node *temp = Head;

            while (temp != nullptr)
            {
                cout << temp->Data << "\t";
                temp = temp->Next;
            }
            cout << endl;
        }
    }

    bool hasCycle()
    {
        if (!Head || !Head->Next)
        {
            return false; // empty list or single node, cycle
        }

        Node *slow = Head;
        Node *fast = Head->Next;

        while (slow != fast)
        {
            if (!fast || !fast->Next)
            {
                return false; // reached endl of list
            }
            slow = slow->Next;
            fast = fast->Next->Next;
        }

        return true; // found a cycle
    }
};

int main()
{
    MyLinkedList list;
    MyLinkedList list2;
    list.addInCycle(11);
    list.addInCycle(12);
    list.addInCycle(13);
    list.addInCycle(14);
    cout << "list 1: " << endl;
    list.displayList();

    list2.add(10);
    list2.add(20);
    list2.add(30);
    list2.add(40);
    cout << "list 2: " << endl;
    list2.displayList();

    if (list.hasCycle())
    {
        cout << "list 1 contain a cycle." << endl;
    }
    else
    {
        cout << "list 1 does not contain a cycle." << endl;
    }

    if (list2.hasCycle())
    {
        cout << "list 2 contain a cycle." << endl;
    }
    else
    {
        cout << "list 2 does not contain a cycle." << endl;
    }

    return 0;
}
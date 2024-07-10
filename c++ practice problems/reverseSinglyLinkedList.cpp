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
            temp->Next = newNode;
        }

    }

    void displayList()
    {
        Node *temp = Head;
        if (Head == nullptr)
        {
            cout << "The list is Empty." << endl;
        }

        while (temp != nullptr)
        {
            cout << temp->Data << "\t";
            temp = temp->Next;
        }
        cout << endl;
        
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *current = Head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            //store the next node
            next = current->Next;

            //reverse the link
            current->Next = prev;
            
            // move prev and current pointers one step forward
            prev = current;
            current = next;
        }

        //update the head to the new start of the reversed linked list
        Head = prev;
    }

};

int main()
{
    MyLinkedList list;
    list.add(10);
    list.add(20);
    list.add(30);
    
    cout << "Original linked list: ";
    list.displayList();

    list.reverse();
    cout << "Reversed linked list: ";
    list.displayList();

    return 0;
}
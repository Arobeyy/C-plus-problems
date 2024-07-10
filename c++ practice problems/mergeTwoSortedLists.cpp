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

public:
    Node *Head;
    MyLinkedList()
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

            while (temp->Next != nullptr)
            {
                temp = temp->Next;
            }
            temp->Next = newNode;
        }
    }

    void displayList()
    {
        if (Head == nullptr)
        {
            cout << "This list is empty." << endl;
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

    Node * mergeSortLists(Node *list1, Node *list2)
    {
        MyLinkedList mergedList;

        while (list1 && list2)
        {
            if (list1->Data <= list2->Data)
            {
                mergedList.add(list1->Data);
                list1 = list1->Next;
            }
            else
            {
                mergedList.add(list2->Data);
                list2 = list2->Next;
            }
        }

        while(list1)
        {
            mergedList.add(list1->Data);
            list1 = list1->Next;
        }

        while(list2)
        {
            mergedList.add(list2->Data);
            list2 = list2->Next;
        }

        return mergedList.Head;
        

    }
};

int main()
{
    MyLinkedList list1, list2;
    list1.add(1);
    list1.add(2);
    list1.add(4);

    list2.add(3);
    list2.add(5);
    list2.add(6);
    list2.add(7);

    cout << "List 1: ";
    list1.displayList();

    cout << "List 2: ";
    list2.displayList();

    MyLinkedList mergedList;
    mergedList.Head = mergedList.mergeSortLists(list1.Head, list2.Head);

    cout << "Merged List: ";
    mergedList.displayList();

    return 0;
}
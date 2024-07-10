#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
};

void addToList(Node * head, int item){
    Node * newNode = new Node();
    newNode->data = item;
    
    Node * temp = head;
    
    while(temp->next != nullptr){
        temp = temp->next;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
}



void displayList(Node * head){
    Node * temp = head;
    while(temp != nullptr){
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node * head = new Node();
    
    head->data = 10;
    head->next = nullptr;
    
    Node * arobey = new Node();
    arobey->data = 21;
    
    arobey->next = nullptr;
    head->next = arobey;
    
    
    Node * rokib = new Node();
    rokib->data = 27;
    rokib->next = nullptr;
    arobey->next = rokib;
    
    Node * love = new Node();
    love->data = 69;
    love->next = rokib->next;
    rokib->next = love;
    
    // Now we improved
    
    Node * head2 = new Node();
    head2->data = 5;
    head2->next = nullptr;
    addToList(head2, 10);
    addToList(head2, 20);
    addToList(head2, 30);
    displayList(head);
    displayList(head2);

    return 0;
}


/*
HW:
Implement this with class and struct both
write remove from list (assume last)

*/
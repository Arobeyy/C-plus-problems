#include <iostream>
using namespace std;
#define MAX 30

class Stack
{
    int top;

public:
    int A[MAX];

    Stack() { top = -1; }
    void Push(int x);
    int Pop();
    bool isEmpty();
    void displayStack();
};

void Stack ::displayStack()
{
    for(int i = 0; i <= top; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

void Stack ::Push(int x)
{
    if (top >= MAX)
    {
        cout << "Stack Overflow. \n";
        return;
    }
    top++;
    A[top] = x;
}

int Stack ::Pop()
{
    if( top < 0 )
    {
        cout << "Stack Underflow. \n";
        return 0;
    }

    int x = A[top];
    top --;
    return x;
}

bool Stack ::isEmpty()
{
    return (top < 0);
}

int main()
{
    Stack s;
    if(s.isEmpty())
        cout << "Stack is empty.\n";
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.displayStack();
    cout << s.Pop() << " Popped from the stack.\n";
    s.displayStack();

    return 0;
}
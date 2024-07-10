#include <iostream>
using namespace std;

class Array
{
    int *arr;
    int Size;

public:
    Array()
    {
        Size = 3;
        arr = new int(Size);
        arr[0] = 5;
        arr[1] = 6;
        arr[2] = 3;

    }

    ~Array()
    {
        delete []arr;
        arr = nullptr;
    }
    
};

int main()
{
    Array a1;

    return 0;
}

//Destructor is an special type of function which is invoked
//whenever a object is being destoyed.
//destructor have the same name as the class
//destuctor does not have a return type and it does not takes any parameter
//when you constuct a object with pointers you need to use a destructor to dealocate the memory 
//otherwise it can cause memory leack
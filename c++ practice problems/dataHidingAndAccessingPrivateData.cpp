#include <iostream>
using namespace std;

class Preson
{
    int Age; // private data, data is hidden from outside of the class.
    void fun()
    {
        cout << "inside of a private member function. \n";
    }
public:
    void setAge(int a)
    {
        Age = a;
    }

    int getAge()
    {
        return Age;
    }

    void fun2()
    {
        cout << "------------------------------------------------\n";
        cout << "inside of a public member function. \n";
        fun();
        cout << "------------------------------------------------\n";
    }
};

int main()
{
    Preson p;
    //p.Age = 22  // not accessible
    p.setAge(22);
    cout << "Age: " << p.getAge() << endl;

    p.fun2();

    return 0;
}

//Data Hiding: it means that data is concealed within the class so that it cannot be accessed by functions outside
//the class even by mistake. the mechanism used to hide data is to put it in a class and make it private.

//A private member function can only be called by anothe function of its class. even an object of that class 
//cannot invoke that function.
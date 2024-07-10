#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imge;

public:
    Complex(int x = 0, int y = 0) : real(x), imge(y) {}
    
    void add(const Complex& rhs)
    {
        // Complex c;
        // c.real = real + rhs.real;
        // c.imge = imge + rhs.imge;
        // cout << c.real << c.imge << endl; //both are right
        cout << rhs.real+this->real << rhs.imge + this->imge << endl;
    }
    
};

int main()
{
    Complex c1(4,7);
    Complex c2(6,2);

    c1.add(c2);

    return 0;
}
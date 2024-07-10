#include <iostream>
using namespace std;

class Alpha
{
    int x;
    public:
    Alpha(int i)
    {
        x = i;
        cout << "Alpha constructed\n";
    }

    void display()
    {
        cout << "x = " << x << endl;
    }
};

class Beta
{
    float p, q;
    public:
    Beta (float a, float b) : p(a), q(b + p)
    {
        cout << "Beta constructed\n";
    }

    void display()
    {
        cout << "p = " << p << endl;
        cout << "q = " << q << endl;
    }
};

class Gamma : public Beta, public Alpha
{
    int u, v;
    public:
    Gamma(int a, int b, float c) : Alpha(a*2), Beta(c, c), u(a)
    {
        v = b;
        cout << "Gamma constructed\n";
    }

    void display()
    {
        cout << "u = " << u << endl;
        cout << "v = " << v << endl;
    }
};

int main()
{
    Gamma g(2, 4, 2.5);
    cout << "\n\nDisplay member values \n\n";

    g.Alpha::display();
    g.Beta::display();
    g.display();

    return 0;
}
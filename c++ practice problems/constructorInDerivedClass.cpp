#include <iostream>

using namespace std;

class Alpha
{
    int x;

public:
    Alpha(int i)
    {
        x = i;
        cout << "Alpha initialized\n";
    }

    void display()
    {
        cout << "X = " << x << endl;
    }
};

class Beta
{
    float y;

public:
    Beta(float j)
    {
        y = j;
        cout << "Beta initialized\n";
    }

    void display()
    {
        cout << "Y = " << y << endl;
    }
};

class Gama : public Alpha, public Beta
{
    int z;

public:
    Gama(int i, float j, int k) : Alpha(i), Beta(j)
    {
        z = k;
        cout << "Gama initialized\n";
    }

    void display()
    {
        Alpha ::display();
        Beta ::display();
        cout << "Z = " << z << endl;
    }
};

int main()
{
    Gama g(10, 15.0, 20);
    g.display();

    return 0;
}
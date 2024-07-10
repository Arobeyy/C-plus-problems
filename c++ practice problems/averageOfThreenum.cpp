#include <iostream>
using namespace std;

class Average
{
    

public:
    static void printAve()
    {
        float a, b, c;
        cin >> a >> b >> c;
        float avg = (a + b+ c) / 3;
        cout << "average = " << avg << endl;
    }
};

int main()
{
    Average ::printAve();
    return 0;
}
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accNum;
    string HolderName;
    int Balance;

public:
    BankAccount(int num = 0, string name = 0, int bal = 0) : accNum(num), HolderName(name), Balance(bal)
    {
        int Balance = bal;
    }
    int addBalance(int b);
    int withdrawBal(int c);
    void accInfo();
    void transfer(BankAccount& b1, int amount);

    ~BankAccount()
    {
        cout << "Thank you for using our service " << this->HolderName << "! wink wink ...." << endl;
    }
};

int BankAccount ::addBalance(int b)
{
    Balance += b;
    return Balance;
}

int BankAccount ::withdrawBal(int c)
{
    if (Balance >= c && c > 0)
        Balance -= c;
    return Balance;
}

void BankAccount ::accInfo()
{
    cout << "Account number: " << accNum << endl;
    cout << "Holder name: " << HolderName << endl;
    cout << "Balance : " << Balance << endl;
}

void BankAccount :: transfer(BankAccount& b1, int amount)
{
    this->Balance += amount;
    b1.Balance -= amount;
}


int main()
{
    BankAccount acc1(2326, "jhon", 7000);
    BankAccount acc2(2327, "bella", 8000);

    acc1.accInfo();
    acc1.withdrawBal(500);
    cout << "After withdrawal : " << endl;
    acc1.accInfo();
    acc2.accInfo();
    acc2.addBalance(500);
    cout << "After adding : " << endl;
    acc2.accInfo();

    acc1.transfer(acc2, 1000);
    cout << "After transfaring : " << endl;
    acc1.accInfo();
    acc2.accInfo();

    
    return 0;
}
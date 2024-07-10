#include <iostream>
#include <iomanip>

 
int main() 
{
    float salary, sell, bonus, total;
    std::string name;
    std::cout << "enter: " << std::endl;
    std::cin >> name >> salary >> sell;
    total = ((sell/100)*15)+ salary;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TOTAL = " << "R$ " << total << std::endl;
    
    return 0;
}

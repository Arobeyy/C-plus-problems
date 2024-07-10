#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string largest;
    string s1 = "Grape";
    string s2 = "Grapefruit";
    string s3 = "Gym";
    
    if ((s1 > s2) && (s1 > s3))
        largest = s1;
    else if (s2 > s3)
        largest = s2;
    else
        largest = s3;
    
    cout << "Largest is: " << largest << endl;

    return 0;  
}

//gym is largest because y is greater than other alphabates.
//and for that while comparing s1 and s2, s2 is learger because s2 contains more character.
//and for s2 and s3, same first character and after that 'y' from s2 has greater value than
//'r' form s1.
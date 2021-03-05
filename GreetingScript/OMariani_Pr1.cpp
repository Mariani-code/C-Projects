//
#include <iostream>
using namespace std;

int main ()
{
    double a,b,c;
    cout << "Enter a value for a" << endl;
    cin >> a;
    cout << "Now enter a value for b" << endl;
    cin >> b;
    if (a>b)
    {
        c = a;
    }
    else if (a<b)
    {
        c = b;
    }
    else 
    {
        c = 10;
    }
    cout << "The value of C is : " << c << endl;
    
    system ("pause");
    return 0;

}

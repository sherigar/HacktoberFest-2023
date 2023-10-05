//swaping using temporary variable
#include <bits/stdc++.h>
using namespace std;
 

int main()
{
    int a = 2, b = 3;
 
    cout << "Before swapping a = " << a << " , b = " << b
         << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " , b = " << b
         << endl;
 
    return 0;
}
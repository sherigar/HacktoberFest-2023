//swaping using simply the inbuilt functions


#include <bits/stdc++.h>
using namespace std;
 



int main()
{
    int a = 5, b = 10;
 
    cout << "Before swapping a = " << a << " , b = " << b
         << endl;
 
    // Built-in swap function
    swap(a, b);
 
    cout << "After swapping a = " << a << " , b = " << b
         << endl;
    return 0;
}
//time complexity O(1)
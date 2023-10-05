#include <iostream>
//using pointer swaping of two numbers
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers\n"; //taking input from the user
    cin >> a >> b;
    int *x, *y, temp;
    x = &a; //setting pointers to store the address of
    y = &b; // variables containing entered values
    temp = *x; //swapping
    *x = *y;
    *y = temp;
    cout << "Numbers after swapping:"; //displaying the numbers after swapping
    cout << "\nfirst number=" << a;
    cout << "\nsecond number=" << b;
    return 0;
}
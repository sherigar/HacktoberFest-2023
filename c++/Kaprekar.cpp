// C++ program to check if a number is a Kaprekar number for a specific base.

#include <iostream>
#include <cmath>
using namespace std;

bool isKaprekar(int number, int base)
{
    if (number < 0 || base <= 1)
    {
        return false;
    }
    long long squared = static_cast<long long>(number) * number;
    long long divisor = 1;
    while (squared / divisor >= base)
    {
        divisor *= base;
    }
    while (divisor > 0)
    {
        long long left = squared / divisor;
        long long right = squared % divisor;
        if (left + right == number && right > 0)
        {
            return true;
        }
        divisor /= base;
    }
    return false;
}
int main()
{
    int number, base;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the base: ";
    cin >> base;
    if (isKaprekar(number, base))
    {
        cout << number << " is a Kaprekar number in base " << base << endl;
    }
    else
    {
        cout << number << " is not a Kaprekar number in base " << base << endl;
    }
    return 0;
}

// Output:

// Enter a number: 9
// Enter the base: 10
// 9 is a Kaprekar number in base 10
// Enter a number: 45
// Enter the base: 10
// 45 is a Kaprekar number in base 10
// Enter a number: 297
// Enter the base: 10// 297 is a Kaprekar number in base 10

// Non Kaprekar Numbers
// Enter a number: 13
// Enter the base: 10
// 13 is not a Kaprekar number in base 10
// Enter a number: 19
// Enter the base: 10// 19 is not a Kaprekar number in base 10
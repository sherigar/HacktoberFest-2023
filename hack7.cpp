#include <iostream>
using namespace std;
//its a great way to swap using xor or bitwise operator
int main()
{
  int x = 23, y = 34;
  cout << "Before swapping x = " << x << " and y = " << y << ".\n";
  
  //swapping using bitwise operator
  x = x^y;
  y = x^y;
  x = x^y;
   
  cout << "After swapping x = " << x << " and y = " << y << ".\n";
  
  return 0;
}
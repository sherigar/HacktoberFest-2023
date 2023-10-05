#include<iostream>
int main() {
    using namespace std;
    int a = 0;
    int b = 0;
    int temp;
    cout<< "Enter value of a: ";
    cin>> a;
    cout<< "Enter value of b: ";
    cin>> b;
    temp = a;
    a = b;
    b = temp;
    cout<< "a = "<<a << endl <<"b = "<<b;
    return 0;
}
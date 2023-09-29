#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    
    cout << "Enter a string: ";
    getline(cin, inputString); // Read the entire line, including spaces
    
    int length = inputString.length();
    
    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = inputString[i];
        inputString[i] = inputString[length - i - 1];
        inputString[length - i - 1] = temp;
    }
    
    cout << "Reversed string: " << inputString << endl;
    
    return 0;
}

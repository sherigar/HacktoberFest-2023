#include <iostream>

// Function to swap two integers using a temporary variable
void swapWithTemp(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two integers using arithmetic operations
void swapWithArithmetic(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// Function to swap two integers using bitwise XOR
void swapWithXOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int choice, num1, num2;

    std::cout << "Enter two integers to swap: ";
    std::cin >> num1 >> num2;

    std::cout << "Choose a swapping method:" << std::endl;
    std::cout << "1. Using a temporary variable" << std::endl;
    std::cout << "2. Using arithmetic operations" << std::endl;
    std::cout << "3. Using bitwise XOR" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1:
            swapWithTemp(num1, num2);
            break;
        case 2:
            swapWithArithmetic(num1, num2);
            break;
        case 3:
            swapWithXOR(num1, num2);
            break;
        default:
            std::cout << "Invalid choice. Using the default method (temporary variable)." << std::endl;
            swapWithTemp(num1, num2);
            break;
    }

    std::cout << "After swapping: " << num1 << " " << num2 << std::endl;

    return 0;
}

#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) {
        printf("Binary representation is not defined for negative numbers.\n");
    } else {
        printf("Binary representation of %d is: ", decimalNumber);
        if (decimalNumber == 0) {
            printf("0");
        } else {
            decimalToBinary(decimalNumber);
        }
        printf("\n");
    }

    return 0;
}

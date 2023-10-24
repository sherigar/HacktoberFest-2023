///A menu driven c program
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;  // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0) return 1;
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int choice, num;

    while (1) {
        printf("Menu:\n");
        printf("1. Check if the number is prime\n");
        printf("2. Find the factorial of the number\n");
        printf("3. Reverse the number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        switch (choice) {
            case 1:
                if (isPrime(num)) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }
                break;
            case 2:
                printf("Factorial of %d is %d.\n", num, factorial(num));
                break;
            case 3:
                printf("Reversed number: %d\n", reverseNumber(num));
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

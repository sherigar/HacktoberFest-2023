#include <iostream>

void sortColors(int arr[], int size) {
    int low = 0;          // Pointer for 0
    int high = size - 1;  // Pointer for 2
    int current = 0;      // Pointer for iterating through the array

    while (current <= high) {
        if (arr[current] == 0) {
            std::swap(arr[current], arr[low]);
            current++;
            low++;
        } else if (arr[current] == 2) {
            std::swap(arr[current], arr[high]);
            high--;
        } else {
            current++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2, 1, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, size);

    sortColors(arr, size);

    std::cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}

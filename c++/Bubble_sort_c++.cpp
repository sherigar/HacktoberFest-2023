#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    cout << "\nEnter array\n";
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Array after Sorting\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }cout << "\n";
    return 0;
}

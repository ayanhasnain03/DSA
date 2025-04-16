#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            result = mid;      // Save the index
            high = mid - 1;    // Keep searching in left half
        } else if (arr[mid] < x) {
            low = mid + 1;     // Move right
        } else {
            high = mid - 1;    // Move left
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 4, 4, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    int index = firstOccurrence(arr, n, x);

    if (index != -1)
        cout << "First occurrence of " << x << " is at index " << index << endl;
    else
        cout << x << " not found in array." << endl;

    return 0;
}

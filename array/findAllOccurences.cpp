#include <iostream>
using namespace std;

// Function to find the first occurrence
int findFirst(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; // go left
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence
int findLast(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; // go right
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to print all occurrences
void printAllOccurrences(int arr[], int n, int target) {
    int first = findFirst(arr, n, target);
    if (first == -1) {
        cout << "Target not found." << endl;
        return;
    }
    int last = findLast(arr, n, target);

    cout << "Target found at indices: ";
    for (int i = first; i <= last; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

// Driver code
int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    printAllOccurrences(arr, n, target);

    return 0;
}

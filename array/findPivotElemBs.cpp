#include <iostream>
using namespace std;

/*
 * Function to find the pivot index in a rotated sorted array.
 * The pivot is the index of the smallest element, i.e., the rotation point.
 * Example: For [8, 9, 10, 4, 5, 6], pivot element is 4 at index 3.
 */
int findPivotIndex(int arr[], int size) {
    int s = 0;              // Start of the search space
    int e = size - 1;       // End of the search space

    // Binary search to find the pivot
    while (s < e) {
        int mid = s + (e - s) / 2; // Safe way to avoid integer overflow

        // If mid element is greater than the end element,
        // pivot must be in the right half
        if (arr[mid] > arr[e]) {
            s = mid + 1;
        } else {
            // Else, pivot is in the left half including mid
            e = mid;
        }
    }

    // At the end of the loop, s == e, pointing to the pivot
    return s;
}

// Driver code to test the function
int main() {
    int arr[] = {8, 9, 10, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = findPivotIndex(arr, size);

    // Print the pivot index and the pivot element
    cout << "Pivot Index   : " << pivotIndex << endl;
    cout << "Pivot Element : " << arr[pivotIndex] << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Function to find the missing element in a sorted array
int findMissingElement(int arr[], int n) {
    int low = 0, high = n - 1;

    // Binary search loop
    while (low <= high) {
        int mid = low + (high - low) / 2;

        /*
         * In a perfect array with no missing numbers:
         * arr[i] should be equal to arr[0] + i
         * Example: arr = [1, 2, 3, 4, 5]
         *          arr[0] = 1 → arr[3] should be 1 + 3 = 4
         *
         * If arr[mid] == arr[0] + mid → no missing number on the left side
         * Else → missing number is on the left (including mid)
         */

        if (arr[mid] == arr[0] + mid) {
            // Left side is perfect, search in right half
            low = mid + 1;
        } else {
            // Mismatch found, missing number is on the left side
            high = mid - 1;
        }
    }

    // When loop ends, 'low' points to the index where the missing number should be
    return arr[0] + low;
}

// Driver code
int main() {
    // Example: Missing number is 5
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissingElement(arr, n);

    cout << "Missing element is: " << missing << endl;

    return 0;
}

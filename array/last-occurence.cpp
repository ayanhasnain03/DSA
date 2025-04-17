#include <iostream>
using namespace std;

// Function to find the last occurrence of a target in a sorted array
int lastOccurrence(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int result = -1;  // Stores the index of the last occurrence

    // Binary search loop
    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids potential overflow

        // If target is found at mid, move to the right to find the last occurrence
        if (arr[mid] == target) {
            result = mid;      // Update the result
            low = mid + 1;     // Move to the right half
        }
        // If target is greater, discard left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, discard right half
        else {
            high = mid - 1;
        }
    }

    return result; // Returns -1 if not found
}

int main() {
    // Example sorted array (can contain duplicates)
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements
    int target = 2;

    // Call the function and store the result
    int index = lastOccurrence(arr, size, target);

    // Output the result
    if (index != -1)
        cout << "Last occurrence of " << target << " is at index " << index << endl;
    else
        cout << target << " not found in the array." << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // Step 1: Create an array of size 10
    int arr[10];
    int n = 10; // Size of the array

    // Step 2: Take input in the array
    cout << "Enter 10 elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter value for index " << i << ": ";
        cin >> arr[i];
    }

    // Step 3: Print the original array
    cout << "\nOriginal Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 4: Double each element of the array
    for (int i = 0; i < n; i++) {
        arr[i] = 2 * arr[i];
    }

    // Step 5: Print the doubled array
    cout << "\nDoubled Elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

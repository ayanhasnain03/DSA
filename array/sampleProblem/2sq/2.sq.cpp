#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int n = 5;

    // Taking input
    for(int i = 0; i < n; i++){
        cout << "Enter value for index " << i << ": ";
        cin >> arr[i];
    }

    int sum = 0;

    // Calculating the sum of elements
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    // Printing the sum
    cout << "\nSum of total elements: " << sum << endl;

    return 0;
}
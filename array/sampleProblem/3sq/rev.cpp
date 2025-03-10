#include <iostream>
using namespace std;

// Function to reverse the array
void reverseArray(int arr[], int size) {
   // int left = 0;
  int right = size -1 ;

    // Using a while loop (Method 1)
  //  while (left < right) { // Swap elements until the middle is reached
 //       swap(arr[left], arr[right]); 
 //       left++;
  //      right--;
  //  }


  // Using a while loop (Method 1)

  for (int left = 0; left < right; left++, right--) {
      swap(arr[left], arr[right]);
  }


  
    // Printing the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    // Calling function to reverse the array
    reverseArray(arr, size);

    return 0;
}

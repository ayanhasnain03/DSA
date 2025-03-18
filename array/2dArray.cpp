#include <iostream>

using namespace std;

int main() {
  int arr[3][4];

  // Input the 2D array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
  }

  // Print the 2D array in proper format
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl; // Newline after each row
  }

  return 0;
}

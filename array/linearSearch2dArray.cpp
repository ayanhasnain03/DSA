#include <iostream>

using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == target) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int arr[3][4];

  // Input the array elements
  cout << "Enter 12 elements for the 3x4 matrix:" << endl;
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 4; col++) {
      cin >> arr[row][col];
    }
  }

  // Display the array
  cout << "Matrix entered:" << endl;
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 4; col++) {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  // Search for an element
  cout << "Enter element to search: ";
  int target;
  cin >> target;

  if (isPresent(arr, target, 3, 4)) {
    cout << "Element Found" << endl;
  } else {
    cout << "Element Not Found" << endl;
  }

  return 0;
}

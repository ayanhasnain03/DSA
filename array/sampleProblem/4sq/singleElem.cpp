#include <iostream>
using namespace std;

int getSingelem(int arr[], int n) {
  int answer = 0;
  for (int i = 0; i < n; i++) {
    answer = answer ^ arr[i];
  }
  return answer;
}

int main() {

  int arr[] = {2, 4, 2, 5, 4, 5, 7, 8, 7, 8, 3};
  int n = 11;
  int answer = getSingelem(arr, n);
  cout << "Single Elem: " << answer << endl;

  return 0;
}

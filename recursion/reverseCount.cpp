#include <iostream>
using namespace std;


void reverseCount(int n) {
    if (n == 0) return;         // Base case: stop when n is 0
    cout << n << " ";           // Print current number
  reverseCount(n-1);    // Recursive call with n - 1
}

int main() {
    int n = 5;
    reverseCount(n);            // Output: 5 4 3 2 1
    return 0;
}

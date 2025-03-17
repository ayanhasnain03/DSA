#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << "value of index: " << i << " is " << v.at(i) << endl;
  }
}

int main() {
  vector<int> v;

  // insert
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int d;
    cin >> d;
    v.push_back(d);
  }

  print(v);

  return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
int binarySearch (const std::vector<int> & arr, int left, int right,int target){
  while(left <= right){
    int mid = left + (right - left) /2;
    if(arr[mid]== target) return  mid;
    else if (arr[mid] > target) right = mid -1;
    else left = mid + 1;
  }
  return -1;
}
int exponentialSearch (const std::vector<int> & arr, int target){
  if(arr.empty()) return  -1;
  // if the first element is the target
  if(arr[0]==target) return  0;
  //Find range for bianry search
  int i = 1;
  while(i < arr.size() && arr[i] <= target){
    i = i * 2;
  }
  // Binary search in the range [i/2, min(i, n-1)]
  return binarySearch(arr, i / 2, std::min(i, (int)arr.size() - 1), target);

}
int main (){
  std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
  int target = 15;
  int result = exponentialSearch (arr, target);
  if (result != -1) std::cout << "Element found at index " << result << std::endl;
  else std::cout << "Element not found" << std::endl;
}

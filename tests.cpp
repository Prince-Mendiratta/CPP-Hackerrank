#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> sortEvenOdd(vector<int> &nums) {
    int numsSize = nums.size();
    int temp = 0, temp1;
    for (int i = 0; i < numsSize; i = i + 2) {
      for (int j = i + 2; j < numsSize; j = j + 2) {
        if (nums[i] > nums[j]) {
          temp = nums[i];
          nums[i] = nums[j];
          nums[j] = temp;
        }
      }
    }
    for (int i = 1; i < numsSize - 2; i = i + 2) {
      for (int j = i + 2; j < numsSize; j = j + 2) {
        if (nums[i] < nums[j]) {
          temp1 = nums[i];
          nums[i] = nums[j];
          nums[j] = temp1;
        }
      }
    }
    for (int k = 0; k < numsSize; k++)
      printf("%d ", nums[k]);

    return nums;
  }
};
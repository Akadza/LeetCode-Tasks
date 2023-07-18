#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
    static int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int index = left + (right - left) / 2;
            if (nums[index] < target) left = index + 1;
            else right = index - 1;
        }
        return left;
    }
};


int main() {
    vector<int> nums = { 1, 3, 5, 6 };
    int target = 5;
    std::cout << Solution::searchInsert(nums, target) << std::endl;
}
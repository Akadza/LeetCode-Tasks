#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


class Solution {
public:
    static int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};


int main()
{
    vector<int> nums = { 5, 2, 2, 8, 16 };
    cout << Solution::removeElement(nums, 2) << endl;
}


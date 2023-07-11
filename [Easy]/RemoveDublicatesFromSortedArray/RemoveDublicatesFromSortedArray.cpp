#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


class Solution {
public:
    static int removeDuplicates(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums.erase(nums.begin() + i + 1);
                i--;
            }
        }
        return nums.size();
    }
};


int main()
{
    vector<int> nums = { 1, 1, 2 };
    cout << Solution::removeDuplicates(nums);

    return 0;
}

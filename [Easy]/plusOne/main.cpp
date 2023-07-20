#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


class Solution {
public:
    static vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        for (int i = len - 1; i >= 0; i--)
        {
            if (i == len - 1) digits[i]++;
            if (digits[i] == 10) {
                digits[i] = 0;
                if (i != 0) digits[i - 1]++;
                else digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};


int main() {
	vector<int> v = { 8, 9, 9, 9 };
    Solution::plusOne(v);


	return 0;
}
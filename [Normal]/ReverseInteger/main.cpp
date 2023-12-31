#include <iostream>

using std::cout;
using std::endl;

class Solution {
public:
    static int reverse(int x) {
        long long result = 0;
        while (x != 0) {
            result = result * 10 + x % 10;
            x /= 10;
        }
        if (result > INT_MAX || result < INT_MIN) return 0;
        return result;
    }
};

int main() {

    cout << Solution::reverse(1534236469);

	return 0;
}
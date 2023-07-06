#include <iostream>

using std::cout;
using std::endl;


class Solution {
public:
    static bool isPalindrome(long int x) {
        long int y = 0, a = x;
        if (x < 0) return false;
        while (a != 0) {
            y = y * 10 + (a % 10);
            a /= 10;
        }
        if (y == x) return true;
        else return false;
    }
};


int main()
{
    cout << Solution::isPalindrome(1211121) << endl;

    return 0;
}
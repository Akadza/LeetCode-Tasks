#include <iostream>

using std::cout;
using std::endl;
using std::string;


class Solution {
public:
    static int addDigits(int num) {
        if (num == 0) return 0;
        else if (num % 9 == 0) return 9;
        else return num % 9;
    }
};


int main()
{
    cout << Solution::addDigits(98);
    return 0;
}

#include <iostream>
#include <unordered_map>

using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    static int romanToInt(string s) {
        int result = 0;
        std::unordered_map<char, int> romanNums = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for (int i = 1; i <= s.length(); i++) {
            int romanVal = romanNums[s[i]];
            int pr_romanVal = romanNums[s[i - 1]];

            if (romanVal > pr_romanVal) {
                result += romanVal - pr_romanVal;
                i++;
            }
            else result += pr_romanVal;
        }
        return result;
    }
};

int main()
{
    string s1 = "III";
    string s2 = "LVIII";
    cout << s1 << " = " << Solution::romanToInt(s1) << endl;
    cout << s2 << " = " << Solution::romanToInt(s2) << endl;
}


#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;


class Solution {
public:
    static string longestCommonPrefix(vector<string>& strs) {
        std::sort(strs.begin(), strs.end());
        int index = 0;
        string result = "";
        string s1 = strs[0];
        string s2 = strs[strs.size() - 1];
        while (s1[index] && s2[index] && s1[index] == s2[index]) result += s1[index++];
        return result;
    }
};

int main()
{
    vector<string> vec = {"flower", "flow", "flight"};
    cout << Solution::longestCommonPrefix(vec) << endl;
}

#include <iostream>

using std::cout;
using std::endl;
using std::string;


class Solution {
public:
    static int strStr(string haystack, string needle) {
        int hLen = haystack.length();
        int nLen = needle.length();
        int nIndex = 0;
        for (int i = 0; i < hLen; i++) {
            if (haystack[i] == needle[nIndex]) {
                nIndex++;
            }
            else {
                i = i - nIndex;
                nIndex = 0;
            }
            if (nIndex == nLen) {
                return i - nLen + 1;
            }
        }
        return -1;
    }
};


int main()
{
    cout << Solution::strStr("sadbutsad", "sad") << endl;
    cout << Solution::strStr("leetcodecaaleeto", "leeto") << endl;
}


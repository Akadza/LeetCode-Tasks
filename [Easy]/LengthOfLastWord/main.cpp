#include <iostream>

using std::cout;
using std::endl;
using std::string;


class Solution {
public:
    static int lengthOfLastWord(string s) {
        int index = 0;
        int tail = s.size() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;
        while (tail >= 0 && s[tail] != ' ') {
            index++;
            tail--;
        }
        return index;
    }
};


int main() {
    cout << Solution::lengthOfLastWord("f pypy") << endl;
}
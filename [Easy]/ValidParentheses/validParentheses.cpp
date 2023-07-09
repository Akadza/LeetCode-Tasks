#include <iostream>
#include <stack>


using std::cout;
using std::endl;
using std::string;


class Solution {
public:
    static bool isValid(string& s) {
        std::stack<char> brackets;
        for (char c : s) {
            if (c == '(') brackets.push(')');
            else if (c == '{') brackets.push('}');
            else if (c == '[') brackets.push(']');
            else if (brackets.empty() || brackets.top() != c) return false;
            else brackets.pop();
        }
        return brackets.empty();
    }
};

int main()
{
    string s = "{}{}{}[]";
    cout << Solution::isValid(s) << endl;
    
    std::stack<int> stack;
    cout << "Example " << stack.empty();


    return 0;
}

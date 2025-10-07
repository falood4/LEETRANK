#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> bracket_stack;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                bracket_stack.push(c);
            } else {
                if (bracket_stack.empty()) {
                    return false;
                }
                char top_bracket = bracket_stack.top();
                if ((c == ')' && top_bracket == '(') ||
                    (c == ']' && top_bracket == '[') ||
                    (c == '}' && top_bracket == '{')) {
                    bracket_stack.pop();
                } else {
                    return false;
                }
            }
        }
        return bracket_stack.empty();
    }
};

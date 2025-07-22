class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int open_count = 0;

        for (char c : s) {
            if (c == '(') {
                // If we see an opening bracket and the count is > 0,
                // it means this is an *inner* bracket.
                if (open_count > 0) {
                    result += c;
                }
                open_count++;
            } else { // c == ')'
                open_count--;
                // If we see a closing bracket and the count is still > 0,
                // it means this bracket is not closing a primitive component.
                // It's an *inner* bracket.
                if (open_count > 0) {
                    result += c;
                }
            }
        }
        return result;
    }
};
class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for (int i = 0; i < s.length(); i++) {
            if (str.empty()) {
                str.push(s[i]);
                continue;
            }
            if ((str.top() == '(' && s[i] == ')') 
             || (str.top() == '[' && s[i] == ']')
             || (str.top() == '{' && s[i] == '}')) {
                str.pop();
            } else {
                str.push(s[i]);
            }
        }
        return str.empty();
    }
};
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if (tokens.size() == 1)
            return atoi(tokens[0].c_str());
        
        stack<int> num;
        int result;   
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                num.push(atoi(tokens[i].c_str()));
                continue;
            }
            
            int right = num.top();
            num.pop();
            int left = num.top();
            num.pop();
            
            if (tokens[i] == "+")   result = (left + right);
            if (tokens[i] == "-")   result = (left - right);
            if (tokens[i] == "*")   result = (left * right);
            if (tokens[i] == "/")   result = (left / right);
            
            num.push(result);
        }
        return result;
    }
};
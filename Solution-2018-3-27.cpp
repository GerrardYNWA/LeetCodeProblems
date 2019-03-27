class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> warm;
        vector<int> days(T.size(), 0);
        
        for (int i = 0; i < T.size(); i++) {           
            while (!warm.empty() && (T[warm.top()] < T[i])) {
                days[warm.top()] = i - warm.top();
                warm.pop();
            }           
            warm.push(i);
        }
        return days;
    }
};
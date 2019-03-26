class Solution {
public:
    int numSquares(int n) {
        if (n <= 0) {
            return 0;
        }
        int root = sqrt(n);
        if (root * root == n) {
            return 1;
        }
        
        vector<int> result(n + 1, INT_MAX);
        result[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j * j <= i; j++) {
                result[i] = min(result[i], result[i - j * j] + 1);
            }
        }
        
        return result[n];
    }   
};
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

/*class Solution {
public:
    int numSquares(int n) {
        if (n <= 0) {
            return 0;
        }
        int root = sqrt(n);
        if (root * root == n) {
            return 1;
        }
        
        static vector<int> result({0});
        while (result.size() <= n) {
            int m = result.size();
            int temp = INT_MAX;
            for (int i = 1; i * i <= m; i++) {
                temp = min(temp, result[m - i * i] + 1);
            }
            result.push_back(temp);
        }
        
        return result[n];
    }   
};*/
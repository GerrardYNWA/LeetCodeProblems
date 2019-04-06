// class Solution {
// public:
//     int superEggDrop(int K, int N) {
//         vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
        
//         int t = 0;
//         while (dp[t][K] < N) {
//             t++;
//             for (int k = 1; k <= K; k++) {
//                 dp[t][k] = dp[t - 1][k] + dp[t - 1][k - 1] + 1;
//             }
//         }
        
//         return t;
//     }
// };

class Solution {
public:
    int superEggDrop(int K, int N) {
        vector<int> dp(K + 1, 0);
        
        int t;
        for (t = 0; dp[K] < N; t++) {
            for (int k = K; k >= 1; k--) {
                dp[k] += dp[k - 1] + 1;
            }
        }
        
        return t;
    }
};
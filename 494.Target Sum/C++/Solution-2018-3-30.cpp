// class Solution {
// public:
//     int cnt = 0;
//     int findTargetSumWays(vector<int>& nums, int S) {
//         if (nums.size() == 0) {
//             return 0;
//         }
//         dfs(nums, S, 0, 0);
//         return cnt;
//     }
// private:
//     void dfs(vector<int>& nums, int target, int pos, int result) {
//         if (pos == nums.size()) {
//             if (result == target) {
//                 cnt++;
//             }
//             return;
//         }
        
//         dfs(nums, target, pos + 1, result + nums[pos]);
//         dfs(nums, target, pos + 1, result - nums[pos]);
//     }
// };

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum < abs(S) || ((sum + S) & 1)) {
            return 0;
        }
        
        //sort(nums.begin(), nums.end(), less<int>());
        int target = (sum + S) >> 1;
        int tmp_sum = 0;
        int dp[target + 1] = {0};
        dp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            tmp_sum += nums[i];
            for (int j = target; j >= max(tmp_sum - target, nums[i]); j--) {
                dp[j] += dp[j - nums[i]];
            }
        }
        return dp[target];
    }
};
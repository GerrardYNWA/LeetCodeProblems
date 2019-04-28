class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1) {
            return false;
        }
        int half = (sum >> 1);
        int temp = 0;
        bool dp[half + 1] = {false};
        dp[0] = true;
        for (int i = 0; i < nums.size(); i++) {
            temp += nums[i];
            for (int j = half; j >= max((temp - half), nums[i]); j--) {
                dp[j] = dp[j] || dp[j - nums[i]]; 
            }
        }
        return dp[half];
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int len = nums.size();
        for(int i=0; i<len; i++) {
            for(int j=i+1; j<len; j++) {
                if((nums[i] + nums[j]) == target) {
                    index.push_back(i+1);
                    index.push_back(j+1);
                    return index;
                }
            }
        }
    }
};
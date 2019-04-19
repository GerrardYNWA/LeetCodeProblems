// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int, int> dup;
//         for (int i = 0; i < nums.size(); i++) {
//             dup[nums[i]]++;
//             if (dup[nums[i]] > 1) return true;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dup;
        for (const auto& num : nums) {
            if (dup.count(num)) return true;
            else dup.insert(num);
        }
        return false;
    }
};
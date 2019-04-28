// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_set<int> num_sets;
//         for (const auto num : nums) {
//             if (num_sets.count(num)) num_sets.erase(num);
//             else num_sets.insert(num);
//         }

//         return *num_sets.begin();
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int k = 0;
        for (const auto num : nums) {
            k ^= num;
        }

        return k;
    }
};
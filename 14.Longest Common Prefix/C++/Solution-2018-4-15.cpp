// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.size() == 0) return "";
//         if (strs.size() == 1) return strs[0];
        
//         int index = 0;
//         string s = strs[0];
//         while (index < strs[0].length()) {
//             for (int i = 1; i < strs.size(); i++) {
//                 string t = strs[i];
//                 if (t.length() <= index || s[index] != t[index]) return s.substr(0, index);
//             }
//             index++;
//         }
//         return s.substr(0, index);
//     }
// };

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        if (strs.size() == 1) return strs[0];
        
        int index = 0;
        sort(strs.begin(), strs.end());
        string fst = strs.front();
        string lst = strs.back();
        for (int i = 0; i < fst.length() || i < lst.length(); i++) {
            if (fst[i] != lst[i]) break;
            index++;
        }
        return fst.substr(0, index);
    }
};
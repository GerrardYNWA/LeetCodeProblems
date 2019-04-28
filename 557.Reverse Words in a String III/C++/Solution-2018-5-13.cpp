class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int idx_l = 0, idx_r = 0;
        for (int k = 0; k < n; k++) {            
            if (s[k] == ' ' || k == (n - 1)) {
                if (k == (n - 1)) idx_r = k;
                else idx_r = k - 1;
                
                for (int i = idx_l, j = idx_r; i < j; i++, j--) {
                    char tmp = s[i];
                    s[i] = s[j];
                    s[j] = tmp;
                }
                
                idx_l = k + 1;
            }
        }
        
        return s;
    }
};
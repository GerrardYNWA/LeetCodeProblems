class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        if (n == 0) return false;
        
        vector<int> flag(n + 1, 0);
        queue<int> q;
        q.push(0);
        flag[0] = 1;
        while (!q.empty()) {
            int i = q.front();
            q.pop();
            flag[n]++;
            for (int j = 0; j < rooms[i].size(); j++) {
                if (!flag[rooms[i][j]]) {
                    flag[rooms[i][j]] = 1;
                    q.push(rooms[i][j]);
                }
            }
            if (flag[n] == n) {
                return true;
            }
        }
        return false;
    }
};
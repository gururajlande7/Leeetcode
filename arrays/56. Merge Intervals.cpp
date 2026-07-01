class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        map<int,int> mp;

        
        for (auto &it : intervals) {
            int start = it[0], end = it[1];
           
            if (mp.find(start) != mp.end()) {
                mp[start] = max(mp[start], end);
            } else {
                mp[start] = end;
            }
        }

        vector<vector<int>> ans;
        int curStart = -1, curEnd = -1;

       
        for (auto &p : mp) {
            if (curStart == -1) {
                curStart = p.first;
                curEnd = p.second;
            } else if (p.first <= curEnd) {
                
                curEnd = max(curEnd, p.second);
            } else {
               
                ans.push_back({curStart, curEnd});
                curStart = p.first;
                curEnd = p.second;
            }
        }

       
        if (curStart != -1) ans.push_back({curStart, curEnd});

        return ans;
    }
};

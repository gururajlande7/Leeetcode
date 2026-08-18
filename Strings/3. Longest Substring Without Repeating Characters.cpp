class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> idx(256, -1);
        int left = 0, ans = 0;
        for (int right = 0; right < s.size(); right++) {
            if (idx[s[right]] >= left) left = idx[s[right]] + 1;
            idx[s[right]] = right;
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};

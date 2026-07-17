class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int longest = 0;
        int prevCount = 0;
        int prevNum = INT_MIN;

        int i = 0;
        while (i < nums.size()) {
            int count = 1;
            while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
                count++;
                i++;
            }

            if (prevNum != INT_MIN && nums[i] - prevNum == 1) {
                longest = max(longest, prevCount + count);
            }

            prevNum = nums[i];
            prevCount = count;
            i++;
        }

        return longest;
    }
};

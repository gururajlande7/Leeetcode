class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        while (start <= end) {
            int m = start + (end - start) / 2;
            if (nums[m] == target) {
                return m;
            }
            if (nums[m] > target) {
                end = m - 1;
            } else {
                start = m + 1;
            }
        }
        return start;
    }
};

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int totalOR = 0;
        for (int x : nums) totalOR |= x;
        return totalOR << (n - 1);
    }
};

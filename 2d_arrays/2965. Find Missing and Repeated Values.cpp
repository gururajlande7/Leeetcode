class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> nums(n*n, 0);  
        vector<int> out(2, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                nums[grid[i][j] - 1]++;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 2) {
                out[0] = i + 1;  
            }
            if (nums[i] == 0) {
                out[1] = i + 1;  
            }
        }
        return out;
    }
};

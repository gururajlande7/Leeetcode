class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> vec(n,0);
        int mini=nums[n-1];

        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            vec[i]=mini;
        }

        int maximum = INT_MIN;

        for (int i = 0; i < n; i++) {
            maximum = max(maximum, nums[i]);
            if(maximum-vec[i]<=k){
                return i;
            }
        }

        return -1;
    }
};

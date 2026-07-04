class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        for(int i=0,j=n,k=0;i<2*n;i++){
            ans[i++]=nums[k]; 
            k++;
            ans[i]=nums[j];
            j++;
        }
        return ans;
    }
};
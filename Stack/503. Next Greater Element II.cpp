class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }

        stack <int>s;
        vector<int>ans(n,-1);

        for(int i=2*n-1;i>=0;i--){

            while(!s.empty() && s.top() <= nums[i]){
                    s.pop();
            }
            if(!s.empty() && i<n){
                ans[i]=s.top();
            }
            s.push(nums[i]);

        }

        return ans;
    }
};
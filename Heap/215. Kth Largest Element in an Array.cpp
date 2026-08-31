class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int>q;
        if(k>n){
            return -1;
        }

        for(int i=0;i<n;i++){
            q.push(nums[i]);
        }

        for(int i=1;i<k;i++){
            q.pop();
        }

        return q.top();
    }
};
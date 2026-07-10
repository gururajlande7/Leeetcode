class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int curr=nums[0],count=0,n=nums.size(),flag=0;
        for(int i=0;i<n;i++){
            if(nums[i]==curr){
                count++;
                
            }else{
                curr=nums[i];
                count=1;
                flag=0;
                
            }
            if(count>n/3 && flag==0){
                    res.push_back(nums[i]);
                    flag=1;
            }
        }
        return res;
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1,min_num=INT_MAX;

        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]>=nums[start]){
                min_num=min(min_num,nums[start]);
                start=mid+1;
            }else{
                min_num=min(min_num,nums[mid]);
                end=mid-1;
            }
        }
        return min_num;
    }
};
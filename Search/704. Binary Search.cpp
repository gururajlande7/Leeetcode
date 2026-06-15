class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        while(start<=end){
            int m =(start+end)/2;
            if(nums[m]==target){return m;}
            if(nums[m]>target){
                end=m-1;
            }if(nums[m]<target){
                start=m+1;
            }
        }return -1;
    }
};
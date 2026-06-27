class Solution {
public:
    int search(vector<int>& nums, int target) {
      return advbi(nums,0,nums.size()-1,target);
      
    }
private: int advbi(vector <int>&nums, int s,int e,int target){
    if(s>e){
        return -1;
    }
    int mid =s+(e-s)/2;
    if(nums[mid]==target){
        return mid;
    }
    if(nums[s]<=nums[mid]){
        if(nums[mid]>target && nums[s]<=target){
            return advbi(nums,s,mid-1,target);
        }else{
            return advbi(nums,mid+1,e,target);
        }
    }else{
        if(nums[mid]<target && nums[e]>=target){
            return advbi(nums,mid+1,e,target);
        }else{
            return advbi(nums,s,mid-1,target);
        }
    }

}
};
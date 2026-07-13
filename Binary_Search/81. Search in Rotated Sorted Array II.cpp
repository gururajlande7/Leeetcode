class Solution {
public:
    bool search(vector<int>& nums, int target) {
        return advbi(nums, 0, nums.size()-1, target) != -1;
    }

private:
    int advbi(vector<int>& nums, int s, int e, int target) {
        if (s > e) return -1;

        int mid = s + (e - s) / 2;
        if (nums[mid] == target) return mid;

        if (nums[mid] == nums[s] && nums[mid] == nums[e]) {
            return advbi(nums, s+1, e-1, target);
        }

        if (nums[s] <= nums[mid]) { 
            if (target >= nums[s] && target < nums[mid]) {
                return advbi(nums, s, mid-1, target);
            } else {
                return advbi(nums, mid+1, e, target);
            }
        } else { 
            if (target > nums[mid] && target <= nums[e]) {
                return advbi(nums, mid+1, e, target);
            } else {
                return advbi(nums, s, mid-1, target);
            }
        }
    }
};

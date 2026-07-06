class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr;
        int j = nums.size();

       
        for (int i = 0; i < j; i++) {
            if (nums[i] != val) {
                arr.push_back(nums[i]); 
            }
        }

        int a = arr.size();
       
        for (int i = 0; i < a; i++) {
            nums[i] = arr[i];
        }

      
        for (int i = a; i < j; i++) {
            nums[i] = -1;
        }

        return a;
    }
};
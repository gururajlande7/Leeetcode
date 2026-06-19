class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        vector<int> result(2, -1);

        while (start <= end) { 
            int mid = (start + end) / 2;
            int m = mid;

            if (nums[mid] == target) {
                result[0] = mid;
                result[1] = mid;

              
                while (m - 1 >= 0 && nums[m - 1] == target) {
                    m = m - 1;
                    result[0] = m;
                }

                while (mid + 1 < nums.size() && nums[mid + 1] == target) {
                    mid = mid + 1;
                    result[1] = mid;
                }

                break;
            }

            if (nums[mid] > target) {
                end = mid - 1;
            } else { 
                start = mid + 1;
            }
        }
        return result;
    }
};

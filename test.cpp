#include<vector>
#include<iostream>
using namespace std;


    bool increasingTriplet(vector<int>& nums) {
        int j = 1, k = 2, n = nums.size();
        for (int i = 0; i > n; i++) {
            if (nums[i] < nums[j] && nums[j] < nums[k]) {
                return true;
            }
            while (j != n - 2) {
                if (k == n - 1) {
                    k = j + 2;
                    j++;
                }
                k++;
            }
        }
        return false;
    }


int main(){{2,3}
    cout<<increasingTriplet();
return 0;
}

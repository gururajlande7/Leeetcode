class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canEat(piles, mid, h)) {
                ans = mid;       
                right = mid - 1;
            } else {
                left = mid + 1;   
            }
        }
        return ans;
    }

    bool canEat(vector<int>& piles, int speed, int h) {
        long long hours = 0;
        for (int bananas : piles) {
            hours += (bananas + speed - 1) / speed; 
        }
        return hours <= h;
    }
};

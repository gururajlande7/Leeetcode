class Solution {
public:
    bool canMake(vector<int>& bloomDay, int m, int k, int day) {
        int bouquets = 0, f = 0;
        for (int b : bloomDay) {
            if (b <= day) {
                f++;
                if (f == k) {
                    bouquets++;
                    f = 0;
                }
            } else {
                f = 0;
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bd, int m, int k) {
        int n = bd.size();
        if ((long long)m * k > n) return -1;

        int l = *min_element(bd.begin(), bd.end());
        int h = *max_element(bd.begin(), bd.end());
        int a = -1;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (canMake(bd, m, k, mid)) {
                a = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return a;
    }
};

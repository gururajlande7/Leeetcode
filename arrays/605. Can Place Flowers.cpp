class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int j = 0, k = flowerbed.size();

        if (k > 1 && flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            j++;
        } else if (k == 1 && flowerbed[0] == 0) {

            flowerbed[0] = 1;
            j++;
        }

        for (int i = 1; i < k - 1; i++) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 &&
                flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                j++;
            }
        }

        if (k > 1 && flowerbed[k - 1] == 0 && flowerbed[k - 2] == 0) {
            flowerbed[k - 1] = 1;
            j++;
        }

        return j >= n;
    }
};
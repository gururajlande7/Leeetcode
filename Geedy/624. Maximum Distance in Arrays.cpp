class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minimum = arrays[0][0];
        int maximum = arrays[0].back();
        int result = INT_MIN;

        for (int i = 1; i < arrays.size(); i++) {
            int x = arrays[i][0];
            int y = arrays[i].back();

           
            result = max(result, abs(y - minimum));
            result = max(result, abs(maximum - x));

            
            minimum = min(minimum, x);
            maximum = max(maximum, y);
        }

        return result;
    }
};


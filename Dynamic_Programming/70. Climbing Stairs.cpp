

class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n+1, -1);
        return stair(n, memo);
    }

private:
    int stair(int a, vector<int>& memo) {
        if (a == 1) return 1;
        if (a == 2) return 2;
        if (memo[a] != -1) return memo[a];
        memo[a] = stair(a-1, memo) + stair(a-2, memo);
        return memo[a];
    }
};

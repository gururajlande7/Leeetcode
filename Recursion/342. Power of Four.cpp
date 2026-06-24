class Solution {
public:
    bool isPowerOfFour(int n) { return re(n, 4, 1); }

private:
    bool re(long long num, int pow, long long i) {
        if (i == num) {
            return true;
        }
        if (i > num) {
            return false;
        }
        return re(num, pow, i * pow);
    }
};
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(n < 0) {
            x = 1 / x;
            if(n == INT_MIN) {
                return x * myPow(x, -(n + 1));
            }
            n = -n;
        }
        return powx(x, n);
    }
private:
    double powx(double x, int n) {
        if(n == 0) return 1.0;
        double half = powx(x, n / 2);
        if(n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
};

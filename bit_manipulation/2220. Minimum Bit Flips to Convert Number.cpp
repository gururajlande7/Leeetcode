class Solution {
public:
    int minBitFlips(int start, int goal) {
        int s=start^goal, sum=0;
        while(s!=0){
            sum+=s%2;
            s/=2;
        }
        return sum;
    }
};
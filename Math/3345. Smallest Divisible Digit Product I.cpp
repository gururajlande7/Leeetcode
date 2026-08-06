class Solution {
public:
    int smallestNumber(int n, int t) {
        while(pro(n)%t!=0){
            n++;
        }
        return n;
    }

    int pro(int n){
        int temp=n,product=1;

        while(temp>0){
            int digit=temp%10;
            product*=digit;
            temp/=10;
        }

        return product;
    }
};
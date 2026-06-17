class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n, 0);
        vector<int> suf(n, 0);
        vector<int> answer(n, 0);

        int pro=1;
        pre[0]=1;
        for (int i = 1; i < n; i++) {
            pro*=nums[i-1];
            pre[i]=pro   ;
        }
        pro=1;
        suf[n-1]=1;
        for(int i=n-1;i>0;i--){
            pro*=nums[i];
            suf[i-1]=pro;
        }

        for(int i=0;i<n;i++){
            answer[i]=pre[i]*suf[i];
        }
return answer;
    }
};
class Solution {
public:
    int candy(vector<int>& ratings) {
        int prev=0, r=ratings.size();
        vector<int>candy(r,1);

        for(int i=1;i<r;i++){
            if(ratings[i]>ratings[i-1]){
                candy[i]=candy[i-1]+1;
            }
        }
        for(int i=r-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                candy[i] = max(candy[i], candy[i+1] + 1);
            }
        }
        int ret=0;
        for(int i=0;i<r;i++){
            ret+=candy[i];
        }
        return ret;
    }
};
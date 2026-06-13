class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int si =candies.size(),max=INT_MIN;
        vector<bool> result (si,false);
        for(int i=0; i<si;i++){
            if(max<candies[i]){
                max=candies[i];
            }
        }
        for(int i=0; i<si;i++){
            if(candies[i]>=max-extraCandies){
                result[i]=true;
            }
        }
return result;

    }
};
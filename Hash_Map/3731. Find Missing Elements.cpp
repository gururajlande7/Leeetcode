class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>map(100,0);
        vector<int>ans;
        int maximum=INT_MIN,minimum=INT_MAX;

        for(int i=0;i<nums.size();i++){
            minimum=min(minimum,nums[i]);
            maximum=max(maximum,nums[i]);
            map[nums[i]-1]++;
        }

        for(int i=minimum; i<maximum;i++){
            if(map[i]==0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int>vec(1001,0);
        vector<int>vec2(1001,0);

        for(int i=0;i<nums1.size();i++){
            vec[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            vec2[nums2[i]]++;
        }

        vector<int>ans;

        for(int i=0;i<=1000;i++){
            if(vec[i]>0 && vec2[i]>0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};
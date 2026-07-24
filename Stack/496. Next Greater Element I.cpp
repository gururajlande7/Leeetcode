class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> answer(nums2.size(), -1);
        vector<int> result (nums1.size(),0);

        for (int i = nums2.size() - 1; i >= 0; i--) {

            while (!s.empty() && nums2[i] > nums2[s.top()]) {
                s.pop();
            }
            if(!s.empty()){
                answer[i]=nums2[s.top()];
            }
            s.push(i);
        }

        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    result[i]=answer[j];
                }
            }
        }

        return result;
    }
};
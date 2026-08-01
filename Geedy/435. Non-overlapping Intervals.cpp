class Solution {
public:

    static bool compare(vector<int>v,vector<int>v2){
            return v2[1]>v[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),
            [](const vector<int>& a, const vector<int>& b){
                 return a[1] < b[1];
             });
        int end=intervals[0][1], out=0;
        for(int i=1;i<intervals.size();i++){
            if(end<=intervals[i][0]){
                end=intervals[i][1];
            }else{
                out++;
            }
        }
        return out;
    }
    
};
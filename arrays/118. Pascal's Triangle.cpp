class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector <int>> nums(numRows);

    for(int j=0;j<numRows;j++){
        int res=1;
        for(int i=0;i<=j;i++){ 
        nums[j].push_back(res);
        res*=(j-i);
        res/=i+1; 
        
    }
    }
    
    return nums;
    }
};
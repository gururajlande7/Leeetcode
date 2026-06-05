//217. Contains Duplicate

//Given an integer array nums, return true 
// if any value appears at least twice in the array, 
// and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }    
        }

return false;
    }
};


//75. Sort Colors(medium level question)

class Solution {
public:
void sortColors(vector<int>& nums) {
    vector <int> col(3,0);
    
    for(int i=0;i<nums.size();i++){
        col[nums[i]]++;
        
    }
        int index=0;

    for(int j=0; j<3; j++){
        while(col[j] > 0){
            nums[index++] = j;
            col[j]--;
        }
}}
};



//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums.at(0);
        for(int i=1;i<nums.size();i++){
            if(a==nums[i]) return true;
            else a=nums[i];
        }
        return false;
    }  
};

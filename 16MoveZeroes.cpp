// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.
void moveZeroes(vector<int>& nums) {
        int i=0;

        // shifts non zeroes to the left
        for(int j=0;j<nums.size();j++){

            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return;
    }

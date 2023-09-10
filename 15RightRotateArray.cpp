// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


// better approach
 vector<int> temp;

       int n=nums.size();

       k=k%n;

       // copying first n-k elements in temp array
       for(int i=0;i<n-k;i++) temp.push_back(nums[i]);

       // shifting last k elements rightwards in the nums array
       for(int i=n-k;i<n;i++) nums[i-(n-k)]=nums[i];

       // copying the remaining elements in the nums array from temp array
       for(int i=k;i<n;i++) nums[i]=temp[i-k];
    }


// optimal approach
 void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());

        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }

        nums=temp;
    }

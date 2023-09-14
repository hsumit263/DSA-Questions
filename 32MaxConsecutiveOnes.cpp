//Given a binary array nums, return the maximum number of consecutive 1's in the array.

int findMaxConsecutiveOnes(vector<int>& nums) {

        // brute force approach
        // vector<int> count;
        // int n=0;

        // for(int i=0;i<nums.size();i++){
        //   if(nums[i]==1){
        //     n++;
        //     cout << n;
        //   }
          
        //   else if(nums[i]==0){
        //     count.push_back(n);
        //     n=0;
        //   }
        // }

        // count.push_back(n);

        // int m=INT_MIN;
        // for(int i=0;i<count.size();i++){
        //   m=max(count[i],m);

        // }

        // return m;

        // Optimal approach
         int count=0;
      int m=0;
      for(int i=0;i<nums.size();i++){
        // if value=1, update count and check if maximum is smaller or equal to count
        if(nums[i]==1){
          count++;
          if(m<=count) m=count;
        }

        // else if value=0 , update count=0
        else{
          count=0;
        }
      }

      return m;
}

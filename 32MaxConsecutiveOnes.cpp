//Given a binary array nums, return the maximum number of consecutive 1's in the array.

int findMaxConsecutiveOnes(vector<int>& nums) {
        
        vector<int> count;
        int n=0;

        for(int i=0;i<nums.size();i++){
          if(nums[i]==1){
            n++;
            cout << n;
          }
          
          else if(nums[i]==0){
            count.push_back(n);
            n=0;
          }
        }

        count.push_back(n);

        int m=INT_MIN;
        for(int i=0;i<count.size();i++){
          m=max(count[i],m);

        }

        return m;
}

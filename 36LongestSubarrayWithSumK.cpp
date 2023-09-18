// You are given an array 'a' of size 'n' and an integer 'k'. Find the length of the longest subarray
// of 'a' whose sum is equal to 'k' where k is positive

int longestSubarrayWithSumK(vector<int> a, long long k) {

// Brute force approach
    // int maxSize=0;
    // int n=a.size();
    // for(int i=0;i<n;i++){
    //     int sum=0;

    //     for(int j=i;j<n;j++){
    //         sum+=a[j];

    //         if(sum==k) maxSize=max(maxSize,j-i+1);
    //     }
    // }

    // return maxSize;

    // Optimal approach
    int left=0;
    int right=0;
    int maxLen=0;
    int n=a.size();

    long long sum=a[0];

    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }

        if(sum==k) {
            maxLen=max(maxLen,right-left+1);
        }

        right++;
        if(right<n){
           
            sum+=a[right];
        }

    }

    return maxLen;
    
}

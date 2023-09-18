// You are given an array 'a' of size 'n' and an integer 'k'. Find the length of the longest subarray
// of 'a' whose sum is equal to 'k'

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

// You are given an array arr of length n consisting of integers
// Find the sum of the subarray (including empty subarray) having maximum sum among all subarrays

long long maxSubarraySum(vector<int> arr, int n)
{   
   // brute force approach
//    long long maxi=INT_MIN;

//    for(int i=0;i<n;i++){
       
//        long long sum=0;

//        for(int j=i;j<n;j++){

//            sum+=arr[j];

//            maxi=max(sum,maxi);
//        }
//    }

//    return maxi;

    long long sum=0;
    long long maxi=LONG_MIN;

    for(int i=0;i<n;i++){

        sum+=arr[i];

        if(sum>maxi) maxi=sum;

        if(sum<0) sum=0;
    }

    if(maxi<0) return 0;
    else return maxi;
}

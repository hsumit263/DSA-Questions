// Given an array 'a' of size 'n'-1 with elements of range 1 to 'n'. The array does not contain
// any duplicates. Your task is to find the missing number.

int missingNumber(vector<int>&a, int N) {
    
    // Optimal approach
    // int ans=0;
    // for(int i=1;i<=N;i++){
    //     ans=ans^i;
    // }

    // for(int i=0;i<a.size();i++){
    //     ans=ans^a[i];
    // }

    // return ans;

    // Optimal approach(Second form)
    int c=0,b=0;

    int n=N-1;

    for(int i=0;i<n;i++){
        c=c^a[i];
        b=b^(i+1);
    }

    b=b^N;

    return c^b;

    
}

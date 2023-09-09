// You are given an array 'a' of 'n' unique non-negative integers. You have to find the second largest
// and second smallest element from the array.

int secondLargest(vector<int>& a,int n){

    int largest=a[0];
    int slargest=INT_MIN;

    for(int i=1;i<n;i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }

        else if(a[i]<largest && a[i]>slargest) slargest=a[i];
    }

    return slargest;
}

int secondSmallest(vector<int>& a,int n){

    int smallest=a[0];
    int ssmallest=INT_MAX;

    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }

        else if(a[i]>smallest && a[i]<ssmallest) ssmallest=a[i];
    }

    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    
    // better approach
    // vector<int> ans;

    // int m1=INT_MAX;
    // int m2=INT_MIN;

    // for(int i=0;i<n;i++){
    //     m1=min(m1,a[i]);
    //     m2=max(m2,a[i]);
    // }

    // // to find second smallest
    // int m3=INT_MAX;
    // for(int i=0;i<n;i++){
    //     if(a[i]==m1) continue;

    //     else m3=min(m3,a[i]);
    // }

    // // to find second largest
    // int m4=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(a[i]==m2) continue;

    //     else m4=max(m4,a[i]);
    // }

    // ans.push_back(m4);
    // ans.push_back(m3);

    // return ans;

    // optimal approach 
    int slargest=secondLargest(a,n);
    int ssmallest=secondSmallest(a,n);

    return {slargest,ssmallest};
    
}

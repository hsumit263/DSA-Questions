// Superior element in an array is the element that is greater than all elements present on its right.

vector<int> superiorElements(vector<int>&a) {
    

    // brute force approach
    // vector<int> ans;

    // int n=a.size();
    // for(int i=0;i<n-1;i++){
    //     int sup=0;
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]>a[j]) sup+=1;

    //         else sup=0;
    //     }

    //     if(sup==n-i-1) ans.push_back(a[i]);
    //     else continue;
    // }

    // ans.push_back(a[n-1]);
    // sort(ans.begin(),ans.end());
    // return ans;

    // optimal approach
    int maxi=INT_MIN;
    int n=a.size();
    vector<int> ans;
    for(int i=n-1;i>=0;i--){

        if(a[i]>maxi){
            maxi=a[i];      //keep track of right maximum
            ans.push_back(maxi);
        }

        else continue;
    }
    // sort(ans.begin(),ans.end());
    return ans;
}

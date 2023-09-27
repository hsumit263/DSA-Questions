int longestSuccessiveElements(vector<int>&a) {
    
    // // BETTER APPROACH
    // // sort the array elements
    // sort(a.begin(),a.end());

    // int count=0;
    // int longest=1;

    // // keep the track of last smaller 
    // int lastSmaller=INT_MIN;

    // // iterate through the array and check the conditions
    // for(int i=0;i<a.size();i++){

    //     // if last smaller is just one smaller than current element then count is increased
    //     // and last smaller is updated
    //     if(a[i]-1==lastSmaller){
    //         count++;
    //         lastSmaller=a[i];
            
    //     }

    //     // if a[i] is not equal to last smaller then a new sequence is started so
    //     // save the last smaller with a[i] and count is set to 1
    //     else if(a[i]!=lastSmaller){
    //         lastSmaller=a[i];
    //         count=1;
        
    //     }

    //     // keep updating the longest length of the sequence
    //     longest=max(longest,count);


    // }

    // return longest;


    // OPTIMAL APPROACH
    int n=a.size();
    if(n==0) return 0;

    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x+=1;
                cnt+=1;

            }

            longest=max(longest,cnt);
        }
    }

    return longest;
}

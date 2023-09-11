//Given an array of 'arr' of 'n' non-neagtive integers, your task is to move all the zeros 
// to the end of the array while keeping the non-zero elements at the start of the array in their 
// original order

vector<int> moveZeros(int n, vector<int> a) {
    

    // brute force approach
    vector<int> ans;
    int zeroCount=0;

    for(int i=0;i<n;i++){
        if(a[i]!=0) ans.push_back(a[i]);
        else zeroCount++;
    }

    for(int i=0;i<zeroCount;i++){
        ans.push_back(0);
    }

    return ans;

    

}

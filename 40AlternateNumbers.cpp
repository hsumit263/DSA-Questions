// 

vector<int> alternateNumbers(vector<int>&a) {
    
    // brute force approach
    // vector<int> pos;
    // vector<int> neg;

    // for(int i=0;i<a.size();i++){

    //     if(a[i]>=0) pos.push_back(a[i]);

    //     else neg.push_back(a[i]);
    // }

    // int index=0;
    // while(index<a.size()){

    //     if(index%2==0){
    //         a[index++]=pos[index/2];
    //     }

    //     else{
    //         a[index++]=neg[(index-1)/2];
    //     }
    // }

    // return a;

    // optimal approach
    vector<int> ans(a.size(),0);

    int posIndex=0,negIndex=1;

    for(int i=0;i<a.size();i++){

        if(a[i]>=0){
            ans[posIndex]+=a[i];
            posIndex+=2;
        }

        else {
            ans[negIndex]+=a[i];
            negIndex+=2;
        }
    }
    return ans;
}

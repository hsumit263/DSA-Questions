//Return unique triplets a[i],a[j],[k] such that i!=j,j!=k,k!=i and sum is 0 for given array of n integers

#include <set>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    //// brute force 
    
    // set<vector<int>> st;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){

    //             if(arr[i]+arr[j]+arr[k]==0){
                    
    //                vector<int> temp={arr[i],arr[j],arr[k]};
    //                sort(temp.begin(),temp.end());
    //                st.insert(temp);
                    
    //             }
    //         }
    //     }
    // }

    // vector<vector<int>> ans(st.begin(),st.end());
    // return ans;

    // // better approach
    // set<vector<int>> st;
    // for(int i=0;i<n;i++){
    //     set<int> hashSet;

    //     for(int j=i+1;j<n;j++){
    //         int third=-(arr[i]+arr[j]);

            
    //         if(hashSet.find(third)!=hashSet.end()){
    //             //if third is found in hashSet then it is executed
    //             vector<int> temp={arr[i],arr[j],third};
    //             sort(temp.begin(),temp.end());
    //             st.insert(temp);

    //         }
    //         hashSet.insert(arr[j]);

    //     }
    // }

    // vector<vector<int>> ans(st.begin(),st.end());
    // return ans;

    // optimal approach
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){

        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;

        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];

            if(sum<0) j++;

            else if(sum>0) k--;

            else{
                vector<int> temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;

                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;
            }
        }
    }

    return ans;
}

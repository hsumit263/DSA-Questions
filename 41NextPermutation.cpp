// Next Permutation of array containing numbers 1 to n

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{   
    // next_permutation(permutation.begin(),permutation.end());
    // return permutation;

    optimal approach -- implementation of above function
    int ind=-1;

    // to find the index with a number greater to generate next permutation
    for(int i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            ind=i;
            break;
        }
    }


    // if index not found 
    if(ind==-1){
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }

    // if index is found , swap the value at it with the value just greater 
    for(int i=n-1;i>ind;i--){
        if(permutation[i]>permutation[ind]){
            swap(permutation[i],permutation[ind]);
            break;
        }
    }

    // now sort the remaining elements in the decreasing order to generate the next permutation
    reverse(permutation.begin()+ind+1,permutation.end());

    return permutation;

}

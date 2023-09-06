// For a given 2D integer array 'ARR' of size(N*M), print the 'ARR' in a sine wave order, i.e. , print the
// first column top to bottom, next column bottom to top , and so on.


#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;

    for(int j=0;j<mCols;j++){
        
        if(j&1){
            // odd index column
            for(int i=nRows-1;i>=0;i--){
                ans.push_back(arr[i][j]);
            }

        }

        else {
            // even index column
            for(int i=0;i<nRows;i++){
                ans.push_back(arr[i][j]);
            }
        }
    }

    return ans;
}

// Make all elements of ith row or jth column equal to 0 if any element of ith row or jth col is 0.

#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	
	// better approach
	int col[m]={};  ---> matrix[0][...]
	int row[n]={};  ---> matrix[...][0]

	// track the indices of zeros
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){

			if(matrix[i][j]==0){
				row[i]=1;
				col[j]=1;
			}
		}
	}

	// check if row[i] is marked or col[j] is marked
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i]|| col[j]){
				matrix[i][j]=0;
			}
		}
	}

	return matrix;


}

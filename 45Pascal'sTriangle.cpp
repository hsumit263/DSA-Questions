// print N rows of Pascal's triangle

// First approach
int nCr(int n,int r){
    long long res=1;

    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1);
    }

    return res;

}

vector<vector<int>> pascalTriangle(int N) {
    
    vector<vector<int>> ans;

    for(int i=0;i<N;i++){

        vector<int> row;

        for(int j=0;j<=i;j++){
            row.push_back(nCr(i,j));
        }

        ans.push_back(row);
    }
    return ans;
}

// Second Approach
vector<int> genrateRow(int row){

    long long ans=1;
    vector<int> ansRow;

    ansRow.push_back(ans);

    for(int col=1;col<row;col++){

        ans=ans*(row-col);
        ans=ans/col;

        ansRow.push_back(ans);
    }

    return ansRow;

}


vector<vector<int>> pascalTriangle(int N) {
    
    vector<vector<int>> ans;
    for(int i=1;i<=N;i++){
        ans.push_back(genrateRow(i));
    }

    return ans;
}

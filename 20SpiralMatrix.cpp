// Given an m x n matrix, return all elements of the matrix in spiral order.

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;

        int row=matrix.size();
        int col=matrix[0].size();

        int count=0;
        int total=row*col;

        int row1=0;
        int row2=row-1;
        int col1=0;
        int col2=col-1;

        while(count < total){
            
            // print starting row
            for(int i=col1;i<=col2 && count < total;i++){
                ans.push_back(matrix[row1][i]);
                count++;
            }
            row1++;

            // print ending column
            for(int i=row1;i<=row2 && count<total;i++){
                ans.push_back(matrix[i][col2]);
                count++;
            }
            col2--;

            // print ending row
            for(int i=col2;i>=col1 && count < total;i--){
                ans.push_back(matrix[row2][i]);
                count++;
            }
            row2--;

            // print starting column
            for(int i=row2;i>=row1 && count<total;i--){
                ans.push_back(matrix[i][col1]);
                count++;
            }
            col1++;
        }

        return ans;
    }

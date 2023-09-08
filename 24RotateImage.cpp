// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();

        for(int r=0;r<row;r++){
            for(int c=0;c<=r;c++){
                swap(matrix[r][c],matrix[c][r]);
            }
        }

        for(int r=0;r<row;r++){
            reverse(matrix[r].begin(),matrix[r].end());
        }

    }

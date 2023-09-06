// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int row=matrix.size();
        int col=matrix[0].size();
        int e=row*col-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            int element=matrix[mid/col][mid%col];

            if(element==target) return 1;

            if(element < target ) s=mid+1;

            else e=mid-1;

        }
        return 0;
    }

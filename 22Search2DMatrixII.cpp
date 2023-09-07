// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.


bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // brute force approach
        int row=matrix.size();
        int col=matrix[0].size();
        
        // for(int i=0;i<row;i++){

        //     int s=0;
        //     int e=col-1;
        //     while(s<=e){
        //         int mid=s+(e-s)/2;

        //         if(matrix[i][mid]==target) return 1;

        //         if(matrix[i][mid]<target) s=mid+1;

        //         else e=mid-1;
        //     }
        // }

        // return 0;

        int rIndex=0;
        int cIndex=col-1;

        // start checking from last element in first row  
        
        while(rIndex<row && cIndex>=0){

            int element=matrix[rIndex][cIndex];

            if(element==target) return 1;

            if(element < target) rIndex++;

            else cIndex--;
        }
        return 0;
        
    }

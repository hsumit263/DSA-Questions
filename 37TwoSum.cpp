// Sam wants to read exactly 'target' number of pages . He has an array 'book' containing number of pages 
// for "N" books . Return YES?NO, if it is possible  for him to read any 2 books and he can meet his 
// 'target' number of pages.

string read(int n, vector<int> book, int target)
{   
    // brute force approach
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<n;j++){
    //         if(book[i]+book[j]==target) return "YES";
    //     }
    // }

    // return "NO";

    // optimal approach

    // sort(book.begin(),book.end());

    // int left=0;
    // int right=n-1;
    // int sum;
    // while(left<right){

    //     sum=book[left]+book[right];

    
    //     if(sum==target) return "YES";

    //     else if(sum<target) left++;
    //     else right--;
        
    // }

    // return "NO";

    // optimal approach when indices of the elements whose sum is target is to be returned
     map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int required=target-n;

            if(mpp.find(required)!=mpp.end()){
                return {i,mpp[required]};
            }
            mpp[n]=i;
        }
        return {-1,-1};
}

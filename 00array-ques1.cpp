// 1. Given an array A of size N of integers. Your task is to find the sum of minimum and maximum element in the array.

int findSum(int A[], int N)
    {   int min=INT_MAX;
        int max=INT_MIN;
    	for(int i=0;i<N;i++){
    	    if(min>A[i]) min=A[i];
    	    if(max<A[i]) max=A[i];
    	}
    	return min+max;
    }

// 2. You are given a string s. You need to reverse the string.

 string reverseWord(string str)
    {
        int i=0;
        int j=str.size()-1;
        while(i<=j){
            swap(str[i],str[j]);
            i++;
            j--;
        }
        return str;
        
    }

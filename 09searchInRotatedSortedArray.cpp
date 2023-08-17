// You have been given a sorted array/list 'arr' consisting of 'n' elements.You are also given an integer 'k'.
// Now the array is rotated at some pivot point unknown to you. 
// Now, your task is to find the index at which 'k' is present in 'arr'.


int getPivot(vector<int>& arr,int n){
	int s=0;
	int e=n-1;
	while(s<e){
		int mid=s+(e-s)/2;

		if(arr[mid]>=arr[0]) s=mid+1;
		else e=mid;
	}
	return s;
}

int binarySearch(vector<int>& arr,int start,int end,int k){

	while(start<=end){
		int mid=start + (end-start)/2; // to keep it in integer range
		
		if(k==arr[mid]) return mid;
		
		if(k>arr[mid]) start=mid+1;
		
		else end=mid-1;
	}	
	return -1;
}

int search(vector<int>& arr, int n, int k)
{
   int pivot=getPivot(arr,n);
   if(arr[pivot]<=k && arr[n-1]>=k) return binarySearch(arr,pivot,n-1,k);
   else return binarySearch(arr,0,pivot-1,k);
}

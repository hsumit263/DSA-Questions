// You are given a sorted integer array 'arr' of size 'n'.You need to remove the duplicates 
// from the array such that each element appears only once. Return length of the new array

int removeDuplicates(vector<int> &arr, int n) {
	
	int i=0;
	int j=1;

	while(j<n){

		if(arr[i]!=arr[j]){
			i++;
			arr[i]=arr[j];
			
		}
		j++;
	}

	return i+1;
}

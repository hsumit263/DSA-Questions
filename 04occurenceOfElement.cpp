// first occurence of an element 
int firstOcc(int arr[],int n,int key){
	
	int s=0;
	int e=n-1;
	int ans=-1;
	
	while(s<=e){
		int mid=s+(e-s)/2;
		
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		
		else if(arr[mid]<key) s=mid+1;
		else e=mid-1;
	}
	return ans;
	
}

// last occurence of an element
int lastOcc(int arr[],int n,int key){
		
	int s=0;
	int e=n-1;
	int ans=-1;
	
	while(s<=e){
		int mid=s+(e-s)/2;
		
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		
		else if(arr[mid]<key) s=mid+1;
		else e=mid-1;
	}
	return ans;
}

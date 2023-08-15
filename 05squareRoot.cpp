// to find integral part of the square root of an integer 
long long int bs(int x){
	int s=0;
	int e=x;
	long long int ans=-1;
	while(s<=e){
		long long int mid=s+(e-s)/2;
		long long int sq=mid*mid;
		

		if(sq==x){
			return mid;
		}

		else if(sq<x){
			ans=mid;
			s=mid+1;
		}
		else e=mid-1;
	}
	return ans;
}

int sqrt(int x){
	return bs(x);
}

// to find the fractional part of the square root of the integer 
double morePrecision(int n,int precision,int tempSol){
	double ans=tempSol;
	double factor=1;

	for(int i=0;i<precision;i++){
		factor/=10;

		for(double j=ans;j*j<n;j+=factor){
			ans=j;
		}
	}
	return ans;
}

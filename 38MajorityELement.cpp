// You are given an array 'a' of 'n' integers. A majority element in the array 'a' is an element
// that appears more than 'n'/2 times. Find the majority element of the array.


#include <map>

int majorityElement(vector<int> v) {
	
	// brute force approach
	// int n=v.size();
	// float a=n/2;
	// for(int i=0;i<n;i++){

	// 	int count=0;
	// 	for(int j=0;j<n;j++){
	// 		if(v[i]==v[j]) count++;
	// 	}

	// 	if(count>a) return v[i];
	// }


	// better approach
	// int n=v.size();
	// float a=n/2;
	// map<int,int> myMap;

	// for(int i=0;i<n;i++){
	// 	myMap[v[i]]=0;
	// }

	// for(int i=0;i<n;i++){
	// 	myMap[v[i]]++;			// O(NlogN)
	// }


	// for(auto it: myMap){
	// 	if(it.second>a){
	// 		return it.first; // O(N)
	// 	}
	// }

	// Moore's voting algorithm (Optimal)

	int n=v.size();
	int a=n/2;
	int cnt=0;
	int el;

	for(int i=0;i<n;i++){
		if(cnt==0){
			cnt=1;
			el=v[i];
		}

		else if(el==v[i]) cnt++;

		else cnt--;
	}

	// if there exists an array with no  majority element
	int count=0;
	for(int j=0;j<n;j++){
		if(v[j]==el) count++;
	}

	if(count>a) return el;
	else return -1;
}

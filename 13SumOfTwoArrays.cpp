// You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M'
// respectively, where each array element represents a digit. You need to find the sum of these two numbers
// and return this sum in the form of an array.     -- Coding Ninja

#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    vector<int>ans;
    int sum=0,carry=0,r;
    int i=n-1,j=m-1;
    while(i>=0 && j>=0){
        sum=a[i]+b[j]+carry;
        carry=sum/10;
        r=sum%10;
        ans.push_back(r);
        j--,i--;
    
    }
    while(i>=0){
        sum=carry+a[i];
        carry=sum/10;
        r=sum%10;
        ans.push_back(r);
        i--;
        
    }
    while(j>=0){
        sum=carry+b[j];
        carry=sum/10;
        r=sum%10;
        ans.push_back(r);
        j--;
        
    }
    if(carry!=0){
            ans.push_back(carry);
        }
    reverse(ans.begin(),ans.end());
    return ans;
    
}

// You are given a three integers 'X' ,'N', 'M'. Your task is to find ('X'^'N')%'M'.

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	
	int res=1;

	while(n>0){

		// when power is odd res stores the extra x
		if(n&1){
			res=(1LL*res*x%m)%m;
		}

		// otherwise calculation of power
		x=(1LL*(x)%m*(x)%m)%m;
		n=n>>1;

	}

	return res;
}

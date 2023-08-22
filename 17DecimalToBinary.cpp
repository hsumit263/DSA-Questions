// Binary conversion from decimal
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int i=0;
	int bin=0;
	
	// First method
	while(n!=0){
		int bit=n&1;
		bin=bit*pow(10,i)+bin;
		n=n>>1;
		i++;
	}

	// Second method
	while(n!=0){
		int r=n%2;
		bin=r*pow(10,i)+bin;
		n=n/2;
		i++;
	}
	cout << "Binary representation of the above number is "<< bin << endl;

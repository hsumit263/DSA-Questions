// Binary to decimal
	
	int n;
	cout << "Enter a binary number : ";
	cin >> n;
	
	int i=0;
	int num=0;
	while(n!=0){
		int r=n%10;
		if(r!=0){
			num+=pow(2,i);
		}
		i++;
		n=n/10;
	}
	cout << "Number is "<< num <<endl;

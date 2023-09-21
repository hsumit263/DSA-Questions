// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

 void sort012(int a[], int n)
    {
        //First approach  -- Dutch National Flag Algorithm
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high){
            if(a[mid]==0) swap(a[low++],a[mid++]);
            
            else if(a[mid]==1) mid++;
            
            else swap(a[mid],a[high--]);
                
            
        }
        
        return;

        // Second approach
           int zero=0;
        int one=0;
        int two=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==0) zero++;
            else if(a[i]==1) one++;
            else two++;
        }
        
        int i=0;
        while(zero--){
            a[i++]=0;
        }
        
        while(one--){
            a[i++]=1;
        }
        
        while(two--){
            a[i++]=2;
        }
        

    }

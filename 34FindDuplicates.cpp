// Given an array a of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given
// array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 

 
    vector<int> duplicates(int arr[], int n) {
        
        // time complexity -- O(n+n-1+nlogn)
        // space complexity -- O(n)
    //   vector<int> ans;
       
    //   unordered_map<int,int> map;
    //   for(int i=0;i<n;i++) map[arr[i]]++;
       
    //   for(auto i:map){
    //       if(i.second > 1) ans.push_back(i.first); 
    //   }
        
    //   if(ans.size()==0) ans.push_back(-1);
    //   sort(ans.begin(),ans.end());
       
    //   return ans;
    
    
        // time complexity: O(n+n)
        // space complexity: O(n+n)
        vector<int> ans;
        
        int hash[n]={0};
        
        for(int i=0;i<n;i++) hash[arr[i]]++;
        
        for(int i=0;i<n;i++){
            if(hash[i]>1){
                ans.push_back(i);
            }
        }
        
        if(ans.size()==0) ans.push_back(-1);
        
        return ans;
    }

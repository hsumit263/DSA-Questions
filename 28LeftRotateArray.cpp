// Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps,
// where 'k' is non-negative

// First Approach
vector<int> ans(arr.size());

    for(int i=0;i<arr.size();i++){

        ans[(i+(arr.size()-k))%arr.size()]=arr[i];
    }

    return ans;

// Second Approach
 vector<int> ans;

    int n=arr.size();
    k=k%n;

    // first putting k elements in ans array
    for(int i=0;i<k;i++){
        ans.push_back(arr[i]);
    }

    // then shifting the remaining elements in the array by n-k places
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }

    // copying the elements from ans array 
    for(int i=n-k;i<n;i++){
        arr[i]=ans[i-(n-k)];
    }

    return arr;

// Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps,
// where 'k' is non-negative

// First Approach
vector<int> ans(arr.size());

    for(int i=0;i<arr.size();i++){

        ans[(i+(arr.size()-k))%arr.size()]=arr[i];
    }

    return ans;


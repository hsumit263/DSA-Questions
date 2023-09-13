// Given two sorted arrays 'a' and 'b' of size 'n' and 'm' , return union of the arrays.
// Note: 'a' and 'b' may contain duplicate elements but the union array must contain unique elements.


#include <set>

vector < int > sortedArray(vector < int > a, vector < int > b) {
    
    // brute force approach
    set<int> st;

    for(int  i=0;i<a.size();i++){
        st.insert(a[i]);        // O(lgn) this step
    }

    for(int i=0;i<b.size();i++){
        st.insert(b[i]);       // O(lgn) this step
    }
    
    vector<int> ans;
    for(auto i:st){
        ans.push_back(i);
    }

    return ans;

}

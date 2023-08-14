// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' and s[i]<='Z') a+=s[i]+32;
            else if(((s[i]<48 or s[i]>57) and s[i]<65) or (s[i]>90 and s[i]<97) or s[i]>122 ) continue;
            else a+=s[i];
        }
        cout << a;
        int i=0;
        int j=a.size()-1;
        while(i<=j){
            if(a[i]!=a[j]) return false;
            else i++,j--;
        }
        return true;
    }
};

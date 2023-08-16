// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// less optimised 
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

// more optimised
#include <bits/stdc++.h> 

bool valid(char ch){
    if((ch>='a' and ch<='z') || (ch>='A' and ch<='Z') || (ch>='0' and ch<='9')) return 1;
    else return 0;
}

char toLowerCase(char ch){
    if(ch>='a' && ch<='z') return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int i=0;
    int j=s.size()-1;

    while(i<=j){

        if (toLowerCase(s[i]) == toLowerCase(s[j])) {
          i++;
          j--;
        }
        else if(!valid(s[i]))i++;
        else if(!valid(s[j]))j--;
        else{
            return false;
        }
    }
    return true;
}

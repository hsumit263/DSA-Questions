//You have been given a string 'STR' of words. You need to replace all the spaces between words with "@40"

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	
	string temp="";
	for(int i=0;i<str.length();i++){
		if(str[i]==' ') temp+="@40";
		else temp+=str[i];
	}
	return temp;
	
}

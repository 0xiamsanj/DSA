
// Link : https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16



/*

Subsequences of String

Sample Input 1:

1 
abc

Sample Output 1:

a ab abc ac b bc c

Explanation of sample input 1:

All possible subsequences of abc are :  
“a” , “b” , “c” , “ab” , “bc” , “ac”, “abc”

*/


#include <bits/stdc++.h> 
using namespace std;


void solve(string str, vector<string>& ans, int index,string output ){
	if(index>=str.length()){

		//We do not need to push the empty set inside the power set 
		if(output.length()>0)
		{
			ans.push_back(output);
			
		}
		return;
	}

	//Exclude recursive call 
	solve(str,ans,index+1,output);

	//Include recursive call 
	char element = str[index];
	output.push_back(element);
	solve(str,ans,index+1,output);
}

vector<string> subsequences(string str){
	
	
	
	vector<string> ans; 
	string output="" ;
	int index = 0;
	solve(str,ans,index,output);
	return ans;
	
}

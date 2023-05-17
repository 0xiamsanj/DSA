//Link : https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/



/*Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:

Input: digits = ""
Output: []
*/



#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    void solve(string digits,int index, string map[], vector<string>&ans, string output){
        //Base Condition 
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }

        int element = digits[index]-'0';
        string value = map[element];

        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,index+1,map,ans,output);
            //Backtracking for reaching the consistent state
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output="";
        int index=0;
        solve(digits,index,map,ans,output);
        return ans;
    }
};
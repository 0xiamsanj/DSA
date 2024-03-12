//Link : https://leetcode.com/problems/subsets/description/


/*Given an integer array nums of unique elements, return all possible
subsets
(the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]


*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    void solve(vector<int>output,int index, vector<vector<int>>&ans,vector<int>nums){
        //Base Case
        
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }

        //Exclude recursive call 
        solve(output,index+1,ans,nums);

        //Include recursive call 
        int element = nums[index];
        output.push_back(element);
        solve(output,index+1,ans,nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<int> output;
        vector<vector<int>> ans;
        solve(output,index,ans,nums);
        return ans;
    }
};
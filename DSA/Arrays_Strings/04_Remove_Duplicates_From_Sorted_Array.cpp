/*
   Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
    Given an integer array nums sorted in non-decreasing order,
    remove the duplicates in-place such that each unique element
    appears only once. The relative order of the elements should be
    kept the same. Then return the number of unique elements in nums

    Input: nums = [1,1,2]
    Output: 2, nums = [1,2,_]
    Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
    It does not matter what you leave beyond the returned k (hence they are underscores).
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i=0,j;
        for(j=1;j<arr.size();j++){
           if(arr[i]!=arr[j]) {
                arr[i+1] = arr[j];
                i++;
           }

        }
       // cout<<i;
        return i+1;
    }
};

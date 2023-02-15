//Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.*/


// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

class Solution {
    public int firstOcc(int[] nums, int target){
        int s,e,mid,ans=-1;
        s=0;
        e = nums.length -1;
        mid = s+(e-s)/2;
        while(s<=e){
            if(nums[mid] == target){
                ans = mid;
                e = mid -1;
            }
            else if (nums[mid]< target){
                s = mid +1;
            }
            else {
                e = mid -1;
            } 
             mid = s+(e-s)/2;
        }
        return ans;
    }
        public int lastOcc(int[] nums, int target){
        int s,e,mid,ans=-1;
        s=0;
        e = nums.length -1;
        mid = s+(e-s)/2;
        while(s<=e){
            if(nums[mid] == target){
                ans = mid;
                s = mid + 1;
            }
            else if (nums[mid]< target){
                s = mid + 1;
            }
            else {
                e = mid - 1;
            } 
             mid = s+(e-s)/2;
        }
        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int arr[] = {firstOcc(nums,target),lastOcc(nums,target)};
        return arr;
    }
}
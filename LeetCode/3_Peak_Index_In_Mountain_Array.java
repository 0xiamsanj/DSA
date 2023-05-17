// Link : https://leetcode.com/problems/peak-index-in-a-mountain-array/

// Input: arr = [0,1,0]
// Output: 1

class Solution {
    public int peakIndexInMountainArray(int[] arr) {
         int start, end, mid;
         start  = 0;
         end = arr.length -1;
         mid = start+(end-start)/2;
         while(start<end){
             if(arr[mid]<arr[mid+1]){
                 start = mid +1;
             }
             else{
                 end = mid;
             }
             mid = start+(end-start)/2;
         }
         return start;
    }
}
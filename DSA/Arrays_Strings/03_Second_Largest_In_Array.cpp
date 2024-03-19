/*
 * Link : https://www.geeksforgeeks.org/problems/second-largest3735/1
    Given an array Arr of size N, print the second largest distinct element from an array. If the second largest element doesn't exist then return -1.
    Input:
    N = 6
    Arr[] = {12, 35, 1, 10, 34, 1}
    Output: 34
    Explanation: The largest element of the array is 35 and the second largest element is 34.
 */

class Solution{
public:
	int print2largest(int arr[], int n) {
	    int largest = arr[0],secondLargest = -1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>largest){
	            secondLargest = largest;
	            largest = arr[i];
	        } else if (arr[i] < largest && arr[i] > secondLargest){
	            secondLargest = arr[i];
	        }
	    }
	    return secondLargest;
	}
};

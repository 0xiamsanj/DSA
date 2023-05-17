// Link : https://leetcode.com/problems/sqrtx/

/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.*/


// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

class Solution {
public:
    long long int binarySearch(int num){
        int start, end;
        long long int ans =-1,mid;
        mid  = start+(end-start)/2;
        while(start<=end){
            long long int square = mid*mid;
            if(square == num){
                return mid;
            }
            if(square > num){
                end = mid-1;
            }
            else{
                ans = mid;
                start = mid +1;
            }
             mid  = start+(end-start)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};
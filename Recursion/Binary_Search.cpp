#include<iostream>
using namespace std;


 int binarySearch( int *arr, int high, int low, int key){
    int mid = low + (high - low)/2;
    
    //Base case for recursion
    
    if(low>high){
        return -1;
    }

    if(arr[mid] = key){
        return mid;
    }

    if(arr[mid]>key){
        return binarySearch(arr,high,low-1,key);
    }

    if(arr[mid]<key){
        return binarySearch(arr,high+1,low,key);
    }


 }

int main()
{


    int arr[6] = {1,2,5,7,8,10};
    int start = 0 , end = 5;
    int key = 5;
    cout<<binarySearch(arr,end,start,key);
    return 0;
}
<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;


void mergeSort(int * arr, int start , int end){
    int mid = end - (start+end)/2;
    if(start>=end){
        return;
    }

    // Splitting the elements from start to mid
    mergeSort(arr,start,mid);

    // Splitting the elements from mid+1 to end 
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}


void merge(int * arr, int start , int mid, int end){
    int * temp = new int[end+1];

    int k=0, left = start, right = mid+1;

    while(left<=mid && right<=end){
        if(arr[left] <= arr[right]){
            temp[k++] = arr[left];
            left++;
        }
        else{
            temp[k++] = arr[right];
            right++;
        }
    }
    while(left<mid){
        temp[k++] = arr[left];
        left++;
    }

    while (right<end)
    {
        temp[k++] = arr[right];
        right++;
    }

    for(int i =start;i<end;i++){
        arr[i] = temp[i-start];
    }
}

int main()
{   
    int arr[5] = {2,4,1,5,3};
    int n = 5;
    int start = 0,end = n-1;
    mergeSort(arr,start,end);
    for(int i=start;i<end;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;


void mergeSort(int * arr, int start , int end){
    int mid = end - (start+end)/2;
    if(start>=end){
        return;
    }

    // Splitting the elements from start to mid
    mergeSort(arr,start,mid);

    // Splitting the elements from mid+1 to end 
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}


void merge(int * arr, int start , int mid, int end){
    int * temp = new int[end+1];

    int k=0, left = start, right = mid+1;

    while(left<=mid && right<=end){
        if(arr[left] <= arr[right]){
            temp[k++] = arr[left];
            left++;
        }
        else{
            temp[k++] = arr[right];
            right++;
        }
    }
    while(left<mid){
        temp[k++] = arr[left];
        left++;
    }

    while (right<end)
    {
        temp[k++] = arr[right];
        right++;
    }

    for(int i =start;i<end;i++){
        arr[i] = temp[i-start];
    }
}

int main()
{   
    int arr[5] = {2,4,1,5,3};
    int n = 5;
    int start = 0,end = n-1;
    mergeSort(arr,start,end);
    for(int i=start;i<end;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
>>>>>>> 5ba302d31516416083e500390e43ecadc26b0b17
}
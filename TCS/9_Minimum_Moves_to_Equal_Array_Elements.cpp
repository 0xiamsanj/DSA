#include<bits/stdc++.h>
using namespace std;

bool checkArr(int *arr, int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            return false;
        }
    }
    return true;
}

int solve(int *arr, int n){
    int count =0;
    while(!checkArr(arr,n)){
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            arr[i]++;
        }
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< solve(arr,n);

}

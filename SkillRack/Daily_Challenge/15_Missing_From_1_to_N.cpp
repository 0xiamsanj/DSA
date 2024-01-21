#include<bits/stdc++.h>
using namespace std;
int main (int argc, char *argv[]) {
    int n;
    cin>>n;
    int arr[100000];
    int arr2[100000];
    bool visited = false;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr2[i] = i+1;
        //cout<<arr2[i]<<" ";
    }
    for(int i=0;i<n;i++){
        visited = false;
        for(int j=0;j<n;j++){
            if(arr2[i] == arr[j]){
                visited = true;
            }
        }
        if(!visited){
            cout<<arr2[i]<<" ";
        }
    }
    return 0;
}

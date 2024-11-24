#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[1000];
    for(int  i=0;i<n;i++){
        cin>> arr[i];
    }
    // cout << arr[0];
    int x,pos,prev=0;
    cin >> x;
    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            pos = (prev+j)%n;
            cout << arr[pos]<<" ";
        }
        prev = pos+1;
        cout << endl;
    }
}

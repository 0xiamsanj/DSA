#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,k;
    int arr[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    for(int i = n-k;i<n;i++){
        arr[i]*=-1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
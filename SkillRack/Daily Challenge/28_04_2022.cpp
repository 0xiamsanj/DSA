#include<iostream>
using namespace std;
int main()
{
 int n,sum=0;
 cin>>n;
 int arr[100][100];
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
        if(i==j || i+j==n-1){
            sum+=arr[i][j];
        }
    }
 }

 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j || i+j==n-1){
            arr[i][j] = sum;
        }
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
 return 0;
}
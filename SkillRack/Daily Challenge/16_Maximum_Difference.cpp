#include<bits/stdc++.h>
using namespace std;
int main (int argc, char *argv[])
{
  int n;
  cin>>n;
  int arr[10000];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  //Sorting the array
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     if(arr[i]<arr[j]){
       swap(arr[i],arr[j]);
     } 
    }
  }

  cout<<arr[0]<<" "<<arr[n-1];
   return 0;
}

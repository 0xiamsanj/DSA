#include<bits/stdc++.h>
using namespace std;
int main (int argc, char *argv[])
{
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int k=1;k<i;k++){
      cout<<"* ";
    }
    for(int j=i;j<=n;j++){
         cout<<j<<" "; 
    }
    for(int j=n-1;j>=i;j--){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}

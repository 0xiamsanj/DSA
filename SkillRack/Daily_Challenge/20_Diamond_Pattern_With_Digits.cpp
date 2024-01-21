#include<bits/stdc++.h>
using namespace std;
int main (int argc, char *argv[])
{
  int n;
  cin>>n;
  int count =0;
  //Upper half of the pattern
  for(int i=1;i<=n;i++){
    for(int j=0;j<n-i;j++){
      cout<<"-";
    }
    cout<<"<";
    for(int k=0;k<(2*i)-1;k++){
      int digit = count %10;
      cout<<digit;
      count++;
    }
    cout<<">"<<endl;
 }
  //Bottom half of the pattern

  for(int i=n-1;i>0;i--){
    for(int j=n-i-1;j>=0;j--){
      cout<<"-";
    }
    cout<<"<";
    for(int k=(2*i)-1;k>0;k--){
      int digit = count%10;
      cout<<digit;
      count++;
    }
    cout<<">"<<endl;
  }
  return 0;
}

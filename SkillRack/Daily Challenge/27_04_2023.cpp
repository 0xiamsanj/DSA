#include<iostream>
using namespace std;
int main()
{
 int n,x,y,z;
 cin>>n>>x>>y>>z;
 int i = 1;
  int count =0;
 while(i<=n){
   if(count%x==0 && count%y==0 || count%y==0 && count%z==0 || count%x==0 && count%z==0 ){
    count++;
    continue;
   }
    if(count%x==0 || count%y==0 || count%z==0){
        cout<<count<<" ";
        i++;
    }
    count++;
 }
 return 0;
}
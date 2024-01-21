#include<bits/stdc++.h>
using namespace std;
void product(long long int *n){
   while(*n>10){
     int rem = *n%10;
     *n/=10;
     int pro = rem * (*n%10);
     cout<<pro<<" ";
     *n/=10;
   }
}
int main (int argc, char *argv[])
{
  long long int number;
  cin>>number;
  long long int reverse=0,rem;
  int count =0;
  while(number!=0){
    rem = number%10;
    reverse = reverse * 10 + rem;
    number/=10;
    count++;
  }
  if(count%2==0){
    product(&reverse);
  }
  else {
    product(&reverse);
    cout<<reverse;
  }

  return 0;
}

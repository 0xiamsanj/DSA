#include<iostream>
using namespace std;
void reverse(char *a, char *b){
  char temp = *a;
  *a = *b;
  *b = temp;
}
int main (int argc, char *argv[])
{
  string str;
  cin>>str;

  int x;
  cin>>x;
 int i=0; 
  while(str[i]){
    reverse(&str[i],&str[i+x-1]);
    i+=x;
  }
  cout<<str;

  return 0;
}

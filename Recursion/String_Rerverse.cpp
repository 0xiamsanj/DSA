#include<iostream>
using namespace std;

bool palindrome(string str,int i, int j){
  
   if(str[i] == str[j]){
    i++;
    j--;
   }
   else{
    return false;
   }

   return palindrome(str,i,j);
   
}

int main()
{
    string str = "madam";
    int i = 0;
    int j = str.length()-1;
    if(palindrome(str,i,j)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
   
    return 0;
}
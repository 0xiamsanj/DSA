/*
The program must accept a string S as the input. The program must print the count of consecutive pairs having the consonants in S as the output.


Example Input/Output 1:
Input:
Apple

Output:
2

Explanation:
The first consecutive pair of consonants is pp
The second consecutive pair of consonants is pl
So 2 is printed as the output.

*/


#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i=0,count=0;
    while(str[i]){
        char ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            str[i] = '0';
        }
        i++;
    }
    int len = str.size();
    for(i=0;i<len-1;i++){
        if(str[i]!='0'&&str[i]!='0'){
            count++;
            // cout<<str;
        }
    }
    cout<<count;
    return 0;
}
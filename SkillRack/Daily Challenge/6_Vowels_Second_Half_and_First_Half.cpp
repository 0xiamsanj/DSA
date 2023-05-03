/*The program must accept a string S as the input. The program must print all the vowels in the second half of the string S in the given order. Then the program must print all the vowels in the first half of the string S in the given order as the output. If there is no vowel in S then the program must print -1 as the output


Input:
farmer

Output:
ea

Explanation:
The second half of the string "farmer" has only one vowel e. So it is printed.
The first half of the string "farmer" has only one vowel a. So it is printed.
Hence the output is ea
*/


#include<iostream>
using namespace std;
int main()
{
    int len,mid,i,count=0;
    string str;
    cin>>str;
    len = str.size();
    mid = (0+len)/2;
    for(i=0;i<len;i++){
        int index = (mid+i)%len;
        char ch = tolower(str[index]);
        if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            cout<<str[index];
            count++;
        }
    }
    if(count==0){
        cout<<"-1";
    }
    return 0;
}
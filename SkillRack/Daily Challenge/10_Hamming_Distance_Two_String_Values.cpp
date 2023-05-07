/*The program must accept two string values S1 and S2 of equal length as the input. The program must print the Hamming distance of two string values as the output. The Hamming distance of two string values is the minimum number of substitutions required to change one string into the other string value.

Example Input/Output 1:
Input:
karolin
kathrin

Output:
3

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,i=0;
    string str1,str2;
    cin>>str1>>str2;
    while(str1[i]){
        if(str1[i]!=str2[i]){
            count++;
        }
        i++;
    }
    cout<<count;
    return 0;
}
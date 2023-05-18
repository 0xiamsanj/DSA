/*The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.



Input: 
3

Output:
a b c * c b a
a b * * * b a 
a * * * * * a 


*/


#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i=1, k =0;i<=n;i++,k=0){
        for(int j=0;j<=n-i;j++){
            char ch = 97+j;
            cout<<ch<<" ";
        }
        while(k!=2*i-1){
            cout<<"* ";
            
            ++k;
        }
        for(int j =n-i;j>=0;j--){
            char ch = 97+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
 return 0;
}
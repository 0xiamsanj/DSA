#include<iostream>
using namespace std;

int power(int n, int p){
    
    //base case 
    {
        if(p<=0){
            return 1;
        }
    }


    // recursive call for p even
    if(p%2==0){
        int ans = (power(n,p/2)*power(n,p/2));
        return ans;
    }

    // recursive call for p odd
    if(p%2!=0){
        int ans = n*(power(n,p/2)*power(n,p/2));
        return ans;
    }
}

int main()
{
    int n=12,p=21;
    int res = power(n,p);
    cout<<res;
    return 0;
}
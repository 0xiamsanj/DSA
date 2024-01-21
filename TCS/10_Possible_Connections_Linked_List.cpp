#include<bits/stdc++.h>
using namespace std;
int main(){
    int head[4] = {0,1,2,3};
    int nums[3] = {0,1,3};

    int n = sizeof(nums)/sizeof(nums[0]);
    sort(nums,nums+n);
    int  count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i+1]-1){
            count++;
        }
    }
    count++;
    cout<<count;

}

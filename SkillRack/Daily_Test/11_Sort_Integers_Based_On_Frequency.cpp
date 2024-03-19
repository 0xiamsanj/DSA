#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> hashmap;
    int n,arr[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hashmap[arr[i]]++;
    }
    for(auto num:hashmap){
        cout << num.first<<" "<<num.second<<endl;
    }


}

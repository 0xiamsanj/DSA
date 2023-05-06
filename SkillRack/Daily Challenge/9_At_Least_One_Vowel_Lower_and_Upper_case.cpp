#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    bool isTrue = false,lower=false;
    
    int i=0;
    while(str[i]){
        if(isupper(str[i])&&(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')){
        isTrue = true;
    }
        if(islower(str[i])&&(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')){
        lower = true;
    }
    i++;
    }
    cout<<isTrue<<" "<<lower<<endl;
    if(isTrue && lower){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
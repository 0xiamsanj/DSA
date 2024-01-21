#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    char mat1[100][100], mat2[100][100];
    int maxCount1=0, maxCount2=0; 

    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
           cin>>mat1[i][j]; 
        }
    }


    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
           cin>>mat2[i][j]; 
        }
    }


    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            char ch = tolower(mat1[i][j]);
            if(ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u'){
                maxCount1++;
            }
        }
    }for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            char ch = tolower(mat2[i][j]);
            if(ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u'){
                maxCount2++;
            }
        }
    }

    if(maxCount1>=maxCount2){
        for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
           cout<<mat1[i][j]<<" "; 
        }
        cout<<endl;
    }}
        else {
            for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
           cout<<mat2[i][j]<<" "; 
        }
        cout<<endl;
    }
    }

        

}

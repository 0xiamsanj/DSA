/*
  Sample input

3 4 
96 53 51 15
23 33 45 56 
67 78 89 90

*/
#include<bits/stdc++.h>
using namespace std;
void swapRows(int (*arr)[100],int i, int c){
  for(int j=0;j<c/2;j++){
    int temp = arr[i][j];
    arr[i][j]=arr[i][c-j-1];
    arr[i][c-j-1] = temp;
  }
}
int main (int argc, char *argv[])
{
  int r,c;
  cin>>r>>c;
  int mat[100][100];

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>mat[i][j];
    }
  }

  // Reversing the rows 
  for(int i=0;i<r;i++){
    for(int j=0;j<c/2;j++){
      if(i%2==1){
        int temp = mat[i][j];
        mat[i][j]=mat[i][c-j-1];
        mat[i][c-j-1] = temp;
      } 
    }
  }
  // Reversing the odd columns
  for(int j=0;j<c;j++){
    for(int i=0;i<r/2;i++){
      if(j%2==0){
        int temp = mat[i][j];
        mat[i][j]=mat[r-i-1][j];
        mat[r-i-1][j] = temp;
      } 
    }
  }
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}

#include<iostream>
using namespace std;


void insert_in_arr( int *arr,int *n, int element){
    int i=*n-1;
    while(i>=0 && arr[i]>element){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = element;
    *n+=1;
}

int main(){
    int n,k,t;
    cin >> n >> k >> t;

    int arr[200];
    for (int  i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum ;
    for(int i=0;i<t;i++){
        sum =0;
        for(int j=i;j<k+i;j++){
            sum+=arr[j];
        }
        insert_in_arr(arr,&n, sum);
    }
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}

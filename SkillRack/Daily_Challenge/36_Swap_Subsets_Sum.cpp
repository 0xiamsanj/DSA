#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[1000];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i+=6){
        for(int j=0;j<3;j++){
            swap(arr[i+j],arr[i+j+3]);
        }
    }

    for(int i=0;i<n-3;i++){
        cout << arr[i] << " ";
    }
    for(int i=0;i<n;i+=2){
        cout << arr[i] + arr[i+1] << endl;
    }
}

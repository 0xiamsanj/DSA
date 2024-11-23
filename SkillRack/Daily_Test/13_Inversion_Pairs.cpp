#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count =0, gt,lt;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i] > arr[j]){
                count++;
                lt = arr[j];
                gt = arr[i];
            }
        }
    }

    cout << count  << endl<< gt << " " <<  lt ;
}

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    //Base Case
    if(size == 0 || size ==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        //Recursive relation
        return isSorted(arr+1,size-1);
    }
}

int main()
{


    int arr[] = {2,4,6,18,10};
    int size = 5;

    bool res = isSorted(arr,size);
    if(res){
        cout<<"Sorted";
    }
    else{
        cout<<"Not sorted";
    }
 return 0;
}
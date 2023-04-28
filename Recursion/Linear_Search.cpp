#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int size , int key)
{
    if(size==0)
    return false;
    if(arr[0]==key){
        return true;
    }
    else{
        return LinearSearch(arr+1,size-1,key);
    }
}



int main()
{
 
 int arr[] = {3,5,1,2,6};
 int size = 5,key = 6;
 bool ans = LinearSearch(arr,size,key);
 if(ans){
    cout<<"Present";
 }
 else{
    cout<<"absent";
 }

}
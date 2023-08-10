
#include<bits/stdc++.h>
using namespace std;

void Insertfn(int* arr, int &n){
    int index=3;
    int target=4;
    
    //increase the size of array by one

    n++;
    for(int i=n; i>=index; i--){
        arr[i]=arr[i-1];
    }
    arr[index]=target;
}

void print(int* arr, int n){
    // print the element upto n+1 becouse it's size is increase by one
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Insertfn(arr,n);
    print(arr,n);
}


#include<bits/stdc++.h>
using namespace std;

void deletefn(int* arr, int n){
    int index;
    int target=4;
    for(int j=0; j<n; j++){
        if(arr[j]==target){
            index=j;
            break;
        }
    }
    
    for(int i=index; i<n-1; i++){
        arr[i]=arr[i+1];
    }
}

void print(int* arr, int n){
    for(int i=0;i<n-1; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    deletefn(arr,n);
    print(arr,n);
}

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void bubble(int* arr,int n){
    int swapped=0;
    for(int i=0;i<n; i++){
        for(int j=0; j<n ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        //when an array is already sorted this will check only one time
        if(swapped==0){
            break;
        }
    }
}

int main() {
    int arr[]={3,4,2,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

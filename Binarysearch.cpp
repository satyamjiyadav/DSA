#include<bits/stdc++.h>
using namespace std;

void binary(int* arr, int n, int s,int e,int target){
    while(s<=e){
        int m=(e+s)/2;
        if(arr[m]==target){
            cout<<"Target element is at "<<m<<"th position";
            return;
        }
        else if(arr[m]>target){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    
    cout<<"Target element is not present in given array"<<endl;
    cout<<"Sorry for not able to find your element";
    
    
}


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    int target=11;
    binary(arr,n,s,e,target);
    
}

#include <bits/stdc++.h>
using namespace std;

int sumarr(int arr[], int size)
{
    if(size<=0){
        return 0;
    }
    else{
        return (sumarr(arr,size-1)+arr[size-1]);
    }
    
    
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum = sumarr(arr,size);
    cout<<sumarr(arr,size);
    
    return 0;
}

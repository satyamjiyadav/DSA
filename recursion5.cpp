#include <bits/stdc++.h>
using namespace std;

int linearsearch(int* arr,int size,int key)
{
    if(size==0){
       
        return -1;
    }
    if(arr[size-1]==key){
        return size-1;
    }
    else{
        return linearsearch(arr,size-1,key);   
    }
    
    
}


int main()
{
    int arr[] = {1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=6;
    int index=linearsearch(arr,size,key);
    if(index==-1){
        cout<<"key not found in array"<<endl;
    }
    else{
        cout<<"the key element "<<key<<" is found at "<<index;
    }
   
    return 0;
}

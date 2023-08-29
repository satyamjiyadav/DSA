#include <iostream>
using namespace std;
  
  void reverse(int* arr, int s, int e){
      while(s < e){
          int temp = arr[s];
          arr[s] = arr[e];
          arr[e] = temp;
          s++;
          e--;
      }
  }
   void rorate(int* arr, int value,int size){
       value = value%size;
       reverse(arr,0,value-1);
       reverse(arr,value,size-1);
       reverse(arr,0,size-1);
   }
  
  
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
   rorate(arr,10,9);
    
    for(int i=0; i < 9; i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}

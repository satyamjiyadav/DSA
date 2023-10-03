#include<bits/stdc++.h>
using namespace std;

void NGE(int arr[], int n){
    stack<int>st;
    
    st.push(arr[0]);
    for(int i=1; i<n; i++){
        if(st.empty()){
            st.push(arr[i]);
            continue;
        }
        else{
            while(!st.empty() && arr[i]>st.top()){
                cout<<st.top()<<" -- ->"<<arr[i]<<endl;
                st.pop();
            }
        }
        st.push(arr[i]);
    }
while(!st.empty()){
    cout<<st.top()<<" --->"<<-1<<endl;
    st.pop();
}
}

int main(){
    int arr[]={4,5,2,25};
    int n=4;
    NGE(arr,n);
}






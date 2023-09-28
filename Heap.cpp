int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    priority_queue<int,vector<int>,greater<int>>pq;
    priority_queue<int>pq2;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
        pq2.push(arr[i]);
    }

    cout<<"max heap elements :";
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }

    cout<<endl<<"min heap elements :";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    int k=5;
    cout<<endl;
    cout<<"kth largest element is: ";
    for(int i=0; i<k; i++ ){
        pq2.push(arr[i]);
    }

    for(int i=k; i<n; i++){
        if(pq2.top()>arr[i]){
            pq2.pop();
            pq2.push(arr[i]);
        }
    }

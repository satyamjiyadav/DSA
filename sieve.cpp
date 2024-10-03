// memory efficient approach
#include<bits/stdc++.h>
using namespace std;

// void solve(){
	
// }

// O(sqrt(r) * size) + O(size)
int main(){
	int r,l;
	cin>>r>>l;

	int size = r-l+1;

	vector<bool>prime(size,true);

	for(int i=2; i<=sqrt(r); i++){
		for(int ind = 0; ind<size; ind++){
			if((l+ind)%i == 0){
				prime[ind] = false;
			}
		}
	}

	for(int ind = 0; ind<size; ind++){
		if(prime[ind] == true){
			cout<<ind+l<<" ";
		}
	}
}

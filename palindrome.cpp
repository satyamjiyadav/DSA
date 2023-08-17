// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    string s="saats";
    int Done=0;
    int size=s.size();
    
    for(int k=0,j=size-1; k<size; k++, j--)
    {
        if(s[k]!=s[j]){
            cout<<"no";
            Done=1;
            break;
        }
    }
    if(Done==0){
        cout<<"yes";
    }
    
    return 0;
}
